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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUTONOMYACTIONVO_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUTONOMYACTIONVO_H_

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
                * redis自治事件任务详情
                */
                class AutonomyActionVo : public AbstractModel
                {
                public:
                    AutonomyActionVo();
                    ~AutonomyActionVo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自治任务ID。
                     * @return ActionId 自治任务ID。
                     * 
                     */
                    int64_t GetActionId() const;

                    /**
                     * 设置自治任务ID。
                     * @param _actionId 自治任务ID。
                     * 
                     */
                    void SetActionId(const int64_t& _actionId);

                    /**
                     * 判断参数 ActionId 是否已赋值
                     * @return ActionId 是否已赋值
                     * 
                     */
                    bool ActionIdHasBeenSet() const;

                    /**
                     * 获取自治事件ID。
                     * @return EventId 自治事件ID。
                     * 
                     */
                    int64_t GetEventId() const;

                    /**
                     * 设置自治事件ID。
                     * @param _eventId 自治事件ID。
                     * 
                     */
                    void SetEventId(const int64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取类型：支持RedisAutoScaleUp
                     * @return Type 类型：支持RedisAutoScaleUp
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型：支持RedisAutoScaleUp
                     * @param _type 类型：支持RedisAutoScaleUp
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取自治任务触发时间。
                     * @return TriggerTime 自治任务触发时间。
                     * 
                     */
                    std::string GetTriggerTime() const;

                    /**
                     * 设置自治任务触发时间。
                     * @param _triggerTime 自治任务触发时间。
                     * 
                     */
                    void SetTriggerTime(const std::string& _triggerTime);

                    /**
                     * 判断参数 TriggerTime 是否已赋值
                     * @return TriggerTime 是否已赋值
                     * 
                     */
                    bool TriggerTimeHasBeenSet() const;

                    /**
                     * 获取自治任务创建时间。
                     * @return CreateTime 自治任务创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置自治任务创建时间。
                     * @param _createTime 自治任务创建时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取自治任务更新时间
                     * @return UpdateTime 自治任务更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置自治任务更新时间
                     * @param _updateTime 自治任务更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取自治任务完成时间。
                     * @return FinishTime 自治任务完成时间。
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置自治任务完成时间。
                     * @param _finishTime 自治任务完成时间。
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取剩余时间，单位：秒。
                     * @return ExpireTime 剩余时间，单位：秒。
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置剩余时间，单位：秒。
                     * @param _expireTime 剩余时间，单位：秒。
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取触发原因。
                     * @return Reason 触发原因。
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置触发原因。
                     * @param _reason 触发原因。
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
                     * 获取自治任务状态：支持 RUNNING，FINISHED，TERMINATED，CANCELLED
                     * @return Status 自治任务状态：支持 RUNNING，FINISHED，TERMINATED，CANCELLED
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置自治任务状态：支持 RUNNING，FINISHED，TERMINATED，CANCELLED
                     * @param _status 自治任务状态：支持 RUNNING，FINISHED，TERMINATED，CANCELLED
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 自治任务ID。
                     */
                    int64_t m_actionId;
                    bool m_actionIdHasBeenSet;

                    /**
                     * 自治事件ID。
                     */
                    int64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 类型：支持RedisAutoScaleUp
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 自治任务触发时间。
                     */
                    std::string m_triggerTime;
                    bool m_triggerTimeHasBeenSet;

                    /**
                     * 自治任务创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 自治任务更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 自治任务完成时间。
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * 剩余时间，单位：秒。
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 触发原因。
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 自治任务状态：支持 RUNNING，FINISHED，TERMINATED，CANCELLED
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUTONOMYACTIONVO_H_
