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

#ifndef TENCENTCLOUD_SMOP_V20201203_MODEL_TASKEVENTDATA_H_
#define TENCENTCLOUD_SMOP_V20201203_MODEL_TASKEVENTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Smop
    {
        namespace V20201203
        {
            namespace Model
            {
                /**
                * 后端提交任务事件返回Data复杂类型
                */
                class TaskEventData : public AbstractModel
                {
                public:
                    TaskEventData();
                    ~TaskEventData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取状态码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Code 状态码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置状态码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _code 状态码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取提示信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message 提示信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置提示信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message 提示信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取当前完成或正在完成的任务订单ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskOrderId 当前完成或正在完成的任务订单ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskOrderId() const;

                    /**
                     * 设置当前完成或正在完成的任务订单ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskOrderId 当前完成或正在完成的任务订单ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskOrderId(const std::string& _taskOrderId);

                    /**
                     * 判断参数 TaskOrderId 是否已赋值
                     * @return TaskOrderId 是否已赋值
                     * 
                     */
                    bool TaskOrderIdHasBeenSet() const;

                    /**
                     * 获取当前任务订单状态码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskCode 当前任务订单状态码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTaskCode() const;

                    /**
                     * 设置当前任务订单状态码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskCode 当前任务订单状态码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskCode(const int64_t& _taskCode);

                    /**
                     * 判断参数 TaskCode 是否已赋值
                     * @return TaskCode 是否已赋值
                     * 
                     */
                    bool TaskCodeHasBeenSet() const;

                    /**
                     * 获取获得积分数/成长值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskCoinNumber 获得积分数/成长值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTaskCoinNumber() const;

                    /**
                     * 设置获得积分数/成长值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskCoinNumber 获得积分数/成长值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskCoinNumber(const int64_t& _taskCoinNumber);

                    /**
                     * 判断参数 TaskCoinNumber 是否已赋值
                     * @return TaskCoinNumber 是否已赋值
                     * 
                     */
                    bool TaskCoinNumberHasBeenSet() const;

                    /**
                     * 获取任务类型后台代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskType 任务类型后台代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置任务类型后台代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskType 任务类型后台代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取当前积分
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCoin 当前积分
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalCoin() const;

                    /**
                     * 设置当前积分
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCoin 当前积分
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalCoin(const int64_t& _totalCoin);

                    /**
                     * 判断参数 TotalCoin 是否已赋值
                     * @return TotalCoin 是否已赋值
                     * 
                     */
                    bool TotalCoinHasBeenSet() const;

                    /**
                     * 获取用户透传的代码块
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Attach 用户透传的代码块
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAttach() const;

                    /**
                     * 设置用户透传的代码块
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attach 用户透传的代码块
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttach(const std::string& _attach);

                    /**
                     * 判断参数 Attach 是否已赋值
                     * @return Attach 是否已赋值
                     * 
                     */
                    bool AttachHasBeenSet() const;

                    /**
                     * 获取计次任务当前完成次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DoneTimes 计次任务当前完成次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDoneTimes() const;

                    /**
                     * 设置计次任务当前完成次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _doneTimes 计次任务当前完成次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDoneTimes(const int64_t& _doneTimes);

                    /**
                     * 判断参数 DoneTimes 是否已赋值
                     * @return DoneTimes 是否已赋值
                     * 
                     */
                    bool DoneTimesHasBeenSet() const;

                    /**
                     * 获取计次任务当前所需完成次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalTimes 计次任务当前所需完成次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalTimes() const;

                    /**
                     * 设置计次任务当前所需完成次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalTimes 计次任务当前所需完成次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalTimes(const int64_t& _totalTimes);

                    /**
                     * 判断参数 TotalTimes 是否已赋值
                     * @return TotalTimes 是否已赋值
                     * 
                     */
                    bool TotalTimesHasBeenSet() const;

                    /**
                     * 获取任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskName 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取当前成长值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GrowScore 当前成长值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetGrowScore() const;

                    /**
                     * 设置当前成长值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _growScore 当前成长值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGrowScore(const int64_t& _growScore);

                    /**
                     * 判断参数 GrowScore 是否已赋值
                     * @return GrowScore 是否已赋值
                     * 
                     */
                    bool GrowScoreHasBeenSet() const;

                private:

                    /**
                     * 状态码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 提示信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 当前完成或正在完成的任务订单ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskOrderId;
                    bool m_taskOrderIdHasBeenSet;

                    /**
                     * 当前任务订单状态码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_taskCode;
                    bool m_taskCodeHasBeenSet;

                    /**
                     * 获得积分数/成长值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_taskCoinNumber;
                    bool m_taskCoinNumberHasBeenSet;

                    /**
                     * 任务类型后台代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 当前积分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCoin;
                    bool m_totalCoinHasBeenSet;

                    /**
                     * 用户透传的代码块
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attach;
                    bool m_attachHasBeenSet;

                    /**
                     * 计次任务当前完成次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_doneTimes;
                    bool m_doneTimesHasBeenSet;

                    /**
                     * 计次任务当前所需完成次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalTimes;
                    bool m_totalTimesHasBeenSet;

                    /**
                     * 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 当前成长值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_growScore;
                    bool m_growScoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMOP_V20201203_MODEL_TASKEVENTDATA_H_
