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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ALARMSHIELDINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ALARMSHIELDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 告警屏蔽任务配置
                */
                class AlarmShieldInfo : public AbstractModel
                {
                public:
                    AlarmShieldInfo();
                    ~AlarmShieldInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通知渠道组Id
                     * @return AlarmNoticeId 通知渠道组Id
                     * 
                     */
                    std::string GetAlarmNoticeId() const;

                    /**
                     * 设置通知渠道组Id
                     * @param _alarmNoticeId 通知渠道组Id
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
                     * 获取屏蔽规则id
                     * @return TaskId 屏蔽规则id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置屏蔽规则id
                     * @param _taskId 屏蔽规则id
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
                     * 获取规则创建来源。
1. 控制台，2.api，3.告警通知
                     * @return Source 规则创建来源。
1. 控制台，2.api，3.告警通知
                     * 
                     */
                    uint64_t GetSource() const;

                    /**
                     * 设置规则创建来源。
1. 控制台，2.api，3.告警通知
                     * @param _source 规则创建来源。
1. 控制台，2.api，3.告警通知
                     * 
                     */
                    void SetSource(const uint64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取操作者。
                     * @return Operator 操作者。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者。
                     * @param _operator 操作者。
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取规则状态。
0：暂未生效，1：生效中，2：已失效
                     * @return Status 规则状态。
0：暂未生效，1：生效中，2：已失效
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置规则状态。
0：暂未生效，1：生效中，2：已失效
                     * @param _status 规则状态。
0：暂未生效，1：生效中，2：已失效
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取规则创建时间。
                     * @return CreateTime 规则创建时间。
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置规则创建时间。
                     * @param _createTime 规则创建时间。
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取规则更新时间。
                     * @return UpdateTime 规则更新时间。
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置规则更新时间。
                     * @param _updateTime 规则更新时间。
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 通知渠道组Id
                     */
                    std::string m_alarmNoticeId;
                    bool m_alarmNoticeIdHasBeenSet;

                    /**
                     * 屏蔽规则id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

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
                     * 规则创建来源。
1. 控制台，2.api，3.告警通知
                     */
                    uint64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 操作者。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 规则状态。
0：暂未生效，1：生效中，2：已失效
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 规则创建时间。
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 规则更新时间。
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ALARMSHIELDINFO_H_
