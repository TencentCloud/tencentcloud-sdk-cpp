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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_BATCHTASKINSTANCE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_BATCHTASKINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 批处理任务实例
                */
                class BatchTaskInstance : public AbstractModel
                {
                public:
                    BatchTaskInstance();
                    ~BatchTaskInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务实例id
                     * @return BatchTaskInstanceId 任务实例id
                     * 
                     */
                    std::string GetBatchTaskInstanceId() const;

                    /**
                     * 设置任务实例id
                     * @param _batchTaskInstanceId 任务实例id
                     * 
                     */
                    void SetBatchTaskInstanceId(const std::string& _batchTaskInstanceId);

                    /**
                     * 判断参数 BatchTaskInstanceId 是否已赋值
                     * @return BatchTaskInstanceId 是否已赋值
                     * 
                     */
                    bool BatchTaskInstanceIdHasBeenSet() const;

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

                    /**
                     * 获取任务状态
                     * @return Status 任务状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态
                     * @param _status 任务状态
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
                     * 获取运行时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuntimeInSeconds 运行时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuntimeInSeconds() const;

                    /**
                     * 设置运行时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runtimeInSeconds 运行时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuntimeInSeconds(const uint64_t& _runtimeInSeconds);

                    /**
                     * 判断参数 RuntimeInSeconds 是否已赋值
                     * @return RuntimeInSeconds 是否已赋值
                     * 
                     */
                    bool RuntimeInSecondsHasBeenSet() const;

                private:

                    /**
                     * 任务实例id
                     */
                    std::string m_batchTaskInstanceId;
                    bool m_batchTaskInstanceIdHasBeenSet;

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

                    /**
                     * 任务状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 运行时长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_runtimeInSeconds;
                    bool m_runtimeInSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_BATCHTASKINSTANCE_H_
