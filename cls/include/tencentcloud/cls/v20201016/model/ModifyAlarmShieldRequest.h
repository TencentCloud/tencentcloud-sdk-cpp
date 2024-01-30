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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYALARMSHIELDREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYALARMSHIELDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyAlarmShield请求参数结构体
                */
                class ModifyAlarmShieldRequest : public AbstractModel
                {
                public:
                    ModifyAlarmShieldRequest();
                    ~ModifyAlarmShieldRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取屏蔽规则ID。
                     * @return TaskId 屏蔽规则ID。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置屏蔽规则ID。
                     * @param _taskId 屏蔽规则ID。
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
                     * 获取通知渠道组id。
                     * @return AlarmNoticeId 通知渠道组id。
                     * 
                     */
                    std::string GetAlarmNoticeId() const;

                    /**
                     * 设置通知渠道组id。
                     * @param _alarmNoticeId 通知渠道组id。
                     * 
                     */
                    void SetAlarmNoticeId(const std::string& _alarmNoticeId);

                    /**
                     * 判断参数 AlarmNoticeId 是否已赋值
                     * @return AlarmNoticeId 是否已赋值
                     * 
                     */
                    bool AlarmNoticeIdHasBeenSet() const;

                    /**
                     * 获取屏蔽开始时间（秒级时间戳）。
                     * @return StartTime 屏蔽开始时间（秒级时间戳）。
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置屏蔽开始时间（秒级时间戳）。
                     * @param _startTime 屏蔽开始时间（秒级时间戳）。
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取屏蔽结束时间（秒级时间戳）。
                     * @return EndTime 屏蔽结束时间（秒级时间戳）。
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置屏蔽结束时间（秒级时间戳）。
                     * @param _endTime 屏蔽结束时间（秒级时间戳）。
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取屏蔽类型。1：屏蔽所有通知，2：按照Rule参数屏蔽匹配规则的通知。
                     * @return Type 屏蔽类型。1：屏蔽所有通知，2：按照Rule参数屏蔽匹配规则的通知。
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置屏蔽类型。1：屏蔽所有通知，2：按照Rule参数屏蔽匹配规则的通知。
                     * @param _type 屏蔽类型。1：屏蔽所有通知，2：按照Rule参数屏蔽匹配规则的通知。
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取屏蔽规则，当Type为2时必填。规则填写方式详见[产品文档](https://cloud.tencent.com/document/product/614/103178#rule)。
                     * @return Rule 屏蔽规则，当Type为2时必填。规则填写方式详见[产品文档](https://cloud.tencent.com/document/product/614/103178#rule)。
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置屏蔽规则，当Type为2时必填。规则填写方式详见[产品文档](https://cloud.tencent.com/document/product/614/103178#rule)。
                     * @param _rule 屏蔽规则，当Type为2时必填。规则填写方式详见[产品文档](https://cloud.tencent.com/document/product/614/103178#rule)。
                     * 
                     */
                    void SetRule(const std::string& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取屏蔽原因。
                     * @return Reason 屏蔽原因。
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置屏蔽原因。
                     * @param _reason 屏蔽原因。
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取规则状态。只有规则状态为生效中（status:1）时，才能将其修改为已失效（status:2）。
                     * @return Status 规则状态。只有规则状态为生效中（status:1）时，才能将其修改为已失效（status:2）。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置规则状态。只有规则状态为生效中（status:1）时，才能将其修改为已失效（status:2）。
                     * @param _status 规则状态。只有规则状态为生效中（status:1）时，才能将其修改为已失效（status:2）。
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 屏蔽规则ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 通知渠道组id。
                     */
                    std::string m_alarmNoticeId;
                    bool m_alarmNoticeIdHasBeenSet;

                    /**
                     * 屏蔽开始时间（秒级时间戳）。
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 屏蔽结束时间（秒级时间戳）。
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 屏蔽类型。1：屏蔽所有通知，2：按照Rule参数屏蔽匹配规则的通知。
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 屏蔽规则，当Type为2时必填。规则填写方式详见[产品文档](https://cloud.tencent.com/document/product/614/103178#rule)。
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * 屏蔽原因。
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 规则状态。只有规则状态为生效中（status:1）时，才能将其修改为已失效（status:2）。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYALARMSHIELDREQUEST_H_
