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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_ADDRECORDRETRIEVETASKRESPONSE_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_ADDRECORDRETRIEVETASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 查询取回任务详情返回数据
                */
                class AddRecordRetrieveTaskResponse : public AbstractModel
                {
                public:
                    AddRecordRetrieveTaskResponse();
                    ~AddRecordRetrieveTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务名称
                     * @return TaskName 任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取取回录像的开始时间
                     * @return StartTime 取回录像的开始时间
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取取回录像的结束时间
                     * @return EndTime 取回录像的结束时间
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取取回模式，1:极速模式，其他暂不支持
                     * @return Mode 取回模式，1:极速模式，其他暂不支持
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取副本有效期
                     * @return Expiration 副本有效期
                     * 
                     */
                    int64_t GetExpiration() const;

                    /**
                     * 判断参数 Expiration 是否已赋值
                     * @return Expiration 是否已赋值
                     * 
                     */
                    bool ExpirationHasBeenSet() const;

                    /**
                     * 获取任务状态，0:已取回，1:取回中，2:待取回
                     * @return Status 任务状态，0:已取回，1:取回中，2:待取回
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取取回容量，单位MB
                     * @return Capacity 取回容量，单位MB
                     * 
                     */
                    double GetCapacity() const;

                    /**
                     * 判断参数 Capacity 是否已赋值
                     * @return Capacity 是否已赋值
                     * 
                     */
                    bool CapacityHasBeenSet() const;

                    /**
                     * 获取任务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Describe 任务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 取回录像的开始时间
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 取回录像的结束时间
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 取回模式，1:极速模式，其他暂不支持
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 副本有效期
                     */
                    int64_t m_expiration;
                    bool m_expirationHasBeenSet;

                    /**
                     * 任务状态，0:已取回，1:取回中，2:待取回
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 取回容量，单位MB
                     */
                    double m_capacity;
                    bool m_capacityHasBeenSet;

                    /**
                     * 任务描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_ADDRECORDRETRIEVETASKRESPONSE_H_
