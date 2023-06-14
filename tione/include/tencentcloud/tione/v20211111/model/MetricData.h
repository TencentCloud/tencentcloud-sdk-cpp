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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_METRICDATA_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_METRICDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/DataPoint.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 指标数据
                */
                class MetricData : public AbstractModel
                {
                public:
                    MetricData();
                    ~MetricData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取训练任务id
                     * @return TaskId 训练任务id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置训练任务id
                     * @param _taskId 训练任务id
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取时间戳.unix timestamp,单位为秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timestamp 时间戳.unix timestamp,单位为秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置时间戳.unix timestamp,单位为秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timestamp 时间戳.unix timestamp,单位为秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin 用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uin 用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取本次上报数据所处的训练周期数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Epoch 本次上报数据所处的训练周期数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEpoch() const;

                    /**
                     * 设置本次上报数据所处的训练周期数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _epoch 本次上报数据所处的训练周期数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEpoch(const int64_t& _epoch);

                    /**
                     * 判断参数 Epoch 是否已赋值
                     * @return Epoch 是否已赋值
                     * 
                     */
                    bool EpochHasBeenSet() const;

                    /**
                     * 获取本次上报数据所处的训练迭代次数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Step 本次上报数据所处的训练迭代次数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStep() const;

                    /**
                     * 设置本次上报数据所处的训练迭代次数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _step 本次上报数据所处的训练迭代次数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStep(const int64_t& _step);

                    /**
                     * 判断参数 Step 是否已赋值
                     * @return Step 是否已赋值
                     * 
                     */
                    bool StepHasBeenSet() const;

                    /**
                     * 获取训练停止所需的迭代总数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalSteps 训练停止所需的迭代总数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalSteps() const;

                    /**
                     * 设置训练停止所需的迭代总数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalSteps 训练停止所需的迭代总数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalSteps(const int64_t& _totalSteps);

                    /**
                     * 判断参数 TotalSteps 是否已赋值
                     * @return TotalSteps 是否已赋值
                     * 
                     */
                    bool TotalStepsHasBeenSet() const;

                    /**
                     * 获取数据点。数组元素为不同指标的数据。数组长度不超过10。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Points 数据点。数组元素为不同指标的数据。数组长度不超过10。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DataPoint> GetPoints() const;

                    /**
                     * 设置数据点。数组元素为不同指标的数据。数组长度不超过10。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _points 数据点。数组元素为不同指标的数据。数组长度不超过10。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPoints(const std::vector<DataPoint>& _points);

                    /**
                     * 判断参数 Points 是否已赋值
                     * @return Points 是否已赋值
                     * 
                     */
                    bool PointsHasBeenSet() const;

                private:

                    /**
                     * 训练任务id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 时间戳.unix timestamp,单位为秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 本次上报数据所处的训练周期数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_epoch;
                    bool m_epochHasBeenSet;

                    /**
                     * 本次上报数据所处的训练迭代次数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_step;
                    bool m_stepHasBeenSet;

                    /**
                     * 训练停止所需的迭代总数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalSteps;
                    bool m_totalStepsHasBeenSet;

                    /**
                     * 数据点。数组元素为不同指标的数据。数组长度不超过10。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DataPoint> m_points;
                    bool m_pointsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_METRICDATA_H_
