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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEINSTANCESACTIONTIMERREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEINSTANCESACTIONTIMERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeInstancesActionTimer请求参数结构体
                */
                class DescribeInstancesActionTimerRequest : public AbstractModel
                {
                public:
                    DescribeInstancesActionTimerRequest();
                    ~DescribeInstancesActionTimerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取定时任务ID列表。
                     * @return ActionTimerIds 定时任务ID列表。
                     * 
                     */
                    std::vector<std::string> GetActionTimerIds() const;

                    /**
                     * 设置定时任务ID列表。
                     * @param _actionTimerIds 定时任务ID列表。
                     * 
                     */
                    void SetActionTimerIds(const std::vector<std::string>& _actionTimerIds);

                    /**
                     * 判断参数 ActionTimerIds 是否已赋值
                     * @return ActionTimerIds 是否已赋值
                     * 
                     */
                    bool ActionTimerIdsHasBeenSet() const;

                    /**
                     * 获取按照一个或者多个实例ID查询。可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。
                     * @return InstanceIds 按照一个或者多个实例ID查询。可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置按照一个或者多个实例ID查询。可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。
                     * @param _instanceIds 按照一个或者多个实例ID查询。可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

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
                     * 获取定时任务执行时间的结束范围，用于条件筛选，格式如2018-05-01 19:00:00。
                     * @return EndActionTime 定时任务执行时间的结束范围，用于条件筛选，格式如2018-05-01 19:00:00。
                     * 
                     */
                    std::string GetEndActionTime() const;

                    /**
                     * 设置定时任务执行时间的结束范围，用于条件筛选，格式如2018-05-01 19:00:00。
                     * @param _endActionTime 定时任务执行时间的结束范围，用于条件筛选，格式如2018-05-01 19:00:00。
                     * 
                     */
                    void SetEndActionTime(const std::string& _endActionTime);

                    /**
                     * 判断参数 EndActionTime 是否已赋值
                     * @return EndActionTime 是否已赋值
                     * 
                     */
                    bool EndActionTimeHasBeenSet() const;

                    /**
                     * 获取定时任务执行时间的开始范围，用于条件筛选，格式如2018-05-01 19:00:00。
                     * @return StartActionTime 定时任务执行时间的开始范围，用于条件筛选，格式如2018-05-01 19:00:00。
                     * 
                     */
                    std::string GetStartActionTime() const;

                    /**
                     * 设置定时任务执行时间的开始范围，用于条件筛选，格式如2018-05-01 19:00:00。
                     * @param _startActionTime 定时任务执行时间的开始范围，用于条件筛选，格式如2018-05-01 19:00:00。
                     * 
                     */
                    void SetStartActionTime(const std::string& _startActionTime);

                    /**
                     * 判断参数 StartActionTime 是否已赋值
                     * @return StartActionTime 是否已赋值
                     * 
                     */
                    bool StartActionTimeHasBeenSet() const;

                    /**
                     * 获取定时任务状态列表。<br><li>UNDO：未执行</li> <li>DOING：正在执行</li><li>DONE：执行完成。</li>
                     * @return StatusList 定时任务状态列表。<br><li>UNDO：未执行</li> <li>DOING：正在执行</li><li>DONE：执行完成。</li>
                     * 
                     */
                    std::vector<std::string> GetStatusList() const;

                    /**
                     * 设置定时任务状态列表。<br><li>UNDO：未执行</li> <li>DOING：正在执行</li><li>DONE：执行完成。</li>
                     * @param _statusList 定时任务状态列表。<br><li>UNDO：未执行</li> <li>DOING：正在执行</li><li>DONE：执行完成。</li>
                     * 
                     */
                    void SetStatusList(const std::vector<std::string>& _statusList);

                    /**
                     * 判断参数 StatusList 是否已赋值
                     * @return StatusList 是否已赋值
                     * 
                     */
                    bool StatusListHasBeenSet() const;

                private:

                    /**
                     * 定时任务ID列表。
                     */
                    std::vector<std::string> m_actionTimerIds;
                    bool m_actionTimerIdsHasBeenSet;

                    /**
                     * 按照一个或者多个实例ID查询。可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 定时器动作，目前仅支持销毁一个值：TerminateInstances。
                     */
                    std::string m_timerAction;
                    bool m_timerActionHasBeenSet;

                    /**
                     * 定时任务执行时间的结束范围，用于条件筛选，格式如2018-05-01 19:00:00。
                     */
                    std::string m_endActionTime;
                    bool m_endActionTimeHasBeenSet;

                    /**
                     * 定时任务执行时间的开始范围，用于条件筛选，格式如2018-05-01 19:00:00。
                     */
                    std::string m_startActionTime;
                    bool m_startActionTimeHasBeenSet;

                    /**
                     * 定时任务状态列表。<br><li>UNDO：未执行</li> <li>DOING：正在执行</li><li>DONE：执行完成。</li>
                     */
                    std::vector<std::string> m_statusList;
                    bool m_statusListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEINSTANCESACTIONTIMERREQUEST_H_
