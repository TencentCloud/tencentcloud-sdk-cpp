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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_JOBSTATUSHISTORY_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_JOBSTATUSHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 任务状态历史记录
                */
                class JobStatusHistory : public AbstractModel
                {
                public:
                    JobStatusHistory();
                    ~JobStatusHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取历史记录ID
                     * @return Id 历史记录ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置历史记录ID
                     * @param _id 历史记录ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取作业ID
                     * @return JobId 作业ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置作业ID
                     * @param _jobId 作业ID
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取作业名称
                     * @return JobName 作业名称
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置作业名称
                     * @param _jobName 作业名称
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取源状态
                     * @return FromState 源状态
                     * 
                     */
                    std::string GetFromState() const;

                    /**
                     * 设置源状态
                     * @param _fromState 源状态
                     * 
                     */
                    void SetFromState(const std::string& _fromState);

                    /**
                     * 判断参数 FromState 是否已赋值
                     * @return FromState 是否已赋值
                     * 
                     */
                    bool FromStateHasBeenSet() const;

                    /**
                     * 获取目标状态
                     * @return ToState 目标状态
                     * 
                     */
                    std::string GetToState() const;

                    /**
                     * 设置目标状态
                     * @param _toState 目标状态
                     * 
                     */
                    void SetToState(const std::string& _toState);

                    /**
                     * 判断参数 ToState 是否已赋值
                     * @return ToState 是否已赋值
                     * 
                     */
                    bool ToStateHasBeenSet() const;

                    /**
                     * 获取触发事件
                     * @return Event 触发事件
                     * 
                     */
                    std::string GetEvent() const;

                    /**
                     * 设置触发事件
                     * @param _event 触发事件
                     * 
                     */
                    void SetEvent(const std::string& _event);

                    /**
                     * 判断参数 Event 是否已赋值
                     * @return Event 是否已赋值
                     * 
                     */
                    bool EventHasBeenSet() const;

                    /**
                     * 获取消息
                     * @return Message 消息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置消息
                     * @param _message 消息
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
                     * 获取转换时间（毫秒时间戳）
                     * @return TransitionTime 转换时间（毫秒时间戳）
                     * 
                     */
                    uint64_t GetTransitionTime() const;

                    /**
                     * 设置转换时间（毫秒时间戳）
                     * @param _transitionTime 转换时间（毫秒时间戳）
                     * 
                     */
                    void SetTransitionTime(const uint64_t& _transitionTime);

                    /**
                     * 判断参数 TransitionTime 是否已赋值
                     * @return TransitionTime 是否已赋值
                     * 
                     */
                    bool TransitionTimeHasBeenSet() const;

                private:

                    /**
                     * 历史记录ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 作业ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 作业名称
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 源状态
                     */
                    std::string m_fromState;
                    bool m_fromStateHasBeenSet;

                    /**
                     * 目标状态
                     */
                    std::string m_toState;
                    bool m_toStateHasBeenSet;

                    /**
                     * 触发事件
                     */
                    std::string m_event;
                    bool m_eventHasBeenSet;

                    /**
                     * 消息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 转换时间（毫秒时间戳）
                     */
                    uint64_t m_transitionTime;
                    bool m_transitionTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_JOBSTATUSHISTORY_H_
