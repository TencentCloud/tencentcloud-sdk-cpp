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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_ACTIONTIMER_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_ACTIONTIMER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/Externals.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 定时任务
                */
                class ActionTimer : public AbstractModel
                {
                public:
                    ActionTimer();
                    ~ActionTimer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取定时器动作，目前仅支持销毁一个值：TerminateInstances。
                     * @return TimerAction 定时器动作，目前仅支持销毁一个值：TerminateInstances。
                     * 
                     */
                    std::string GetTimerAction() const;

                    /**
                     * 设置定时器动作，目前仅支持销毁一个值：TerminateInstances。
                     * @param _timerAction 定时器动作，目前仅支持销毁一个值：TerminateInstances。
                     * 
                     */
                    void SetTimerAction(const std::string& _timerAction);

                    /**
                     * 判断参数 TimerAction 是否已赋值
                     * @return TimerAction 是否已赋值
                     * 
                     */
                    bool TimerActionHasBeenSet() const;

                    /**
                     * 获取执行时间，按照ISO8601标准表示，并且使用UTC时间。格式为 YYYY-MM-DDThh:mm:ssZ。例如 2018-05-29T11:26:40Z，执行时间必须大于当前时间5分钟。
                     * @return ActionTime 执行时间，按照ISO8601标准表示，并且使用UTC时间。格式为 YYYY-MM-DDThh:mm:ssZ。例如 2018-05-29T11:26:40Z，执行时间必须大于当前时间5分钟。
                     * 
                     */
                    std::string GetActionTime() const;

                    /**
                     * 设置执行时间，按照ISO8601标准表示，并且使用UTC时间。格式为 YYYY-MM-DDThh:mm:ssZ。例如 2018-05-29T11:26:40Z，执行时间必须大于当前时间5分钟。
                     * @param _actionTime 执行时间，按照ISO8601标准表示，并且使用UTC时间。格式为 YYYY-MM-DDThh:mm:ssZ。例如 2018-05-29T11:26:40Z，执行时间必须大于当前时间5分钟。
                     * 
                     */
                    void SetActionTime(const std::string& _actionTime);

                    /**
                     * 判断参数 ActionTime 是否已赋值
                     * @return ActionTime 是否已赋值
                     * 
                     */
                    bool ActionTimeHasBeenSet() const;

                    /**
                     * 获取扩展数据
                     * @return Externals 扩展数据
                     * 
                     */
                    Externals GetExternals() const;

                    /**
                     * 设置扩展数据
                     * @param _externals 扩展数据
                     * 
                     */
                    void SetExternals(const Externals& _externals);

                    /**
                     * 判断参数 Externals 是否已赋值
                     * @return Externals 是否已赋值
                     * 
                     */
                    bool ExternalsHasBeenSet() const;

                    /**
                     * 获取定时器ID。
                     * @return ActionTimerId 定时器ID。
                     * 
                     */
                    std::string GetActionTimerId() const;

                    /**
                     * 设置定时器ID。
                     * @param _actionTimerId 定时器ID。
                     * 
                     */
                    void SetActionTimerId(const std::string& _actionTimerId);

                    /**
                     * 判断参数 ActionTimerId 是否已赋值
                     * @return ActionTimerId 是否已赋值
                     * 
                     */
                    bool ActionTimerIdHasBeenSet() const;

                    /**
                     * 获取定时器状态，取值范围：

UNDO：未触发
DOING：触发中
DONE：已经触发

                     * @return Status 定时器状态，取值范围：

UNDO：未触发
DOING：触发中
DONE：已经触发

                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置定时器状态，取值范围：

UNDO：未触发
DOING：触发中
DONE：已经触发

                     * @param _status 定时器状态，取值范围：

UNDO：未触发
DOING：触发中
DONE：已经触发

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
                     * 获取定时器对应的实例ID。
                     * @return InstanceId 定时器对应的实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置定时器对应的实例ID。
                     * @param _instanceId 定时器对应的实例ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 定时器动作，目前仅支持销毁一个值：TerminateInstances。
                     */
                    std::string m_timerAction;
                    bool m_timerActionHasBeenSet;

                    /**
                     * 执行时间，按照ISO8601标准表示，并且使用UTC时间。格式为 YYYY-MM-DDThh:mm:ssZ。例如 2018-05-29T11:26:40Z，执行时间必须大于当前时间5分钟。
                     */
                    std::string m_actionTime;
                    bool m_actionTimeHasBeenSet;

                    /**
                     * 扩展数据
                     */
                    Externals m_externals;
                    bool m_externalsHasBeenSet;

                    /**
                     * 定时器ID。
                     */
                    std::string m_actionTimerId;
                    bool m_actionTimerIdHasBeenSet;

                    /**
                     * 定时器状态，取值范围：

UNDO：未触发
DOING：触发中
DONE：已经触发

                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 定时器对应的实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_ACTIONTIMER_H_
