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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_MODIFYTRAININGTASKSCHEDULINGPOLICYREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_MODIFYTRAININGTASKSCHEDULINGPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/SchedulePolicy.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * ModifyTrainingTaskSchedulingPolicy请求参数结构体
                */
                class ModifyTrainingTaskSchedulingPolicyRequest : public AbstractModel
                {
                public:
                    ModifyTrainingTaskSchedulingPolicyRequest();
                    ~ModifyTrainingTaskSchedulingPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>训练任务 id</p>
                     * @return TrainingTaskId <p>训练任务 id</p>
                     * 
                     */
                    std::string GetTrainingTaskId() const;

                    /**
                     * 设置<p>训练任务 id</p>
                     * @param _trainingTaskId <p>训练任务 id</p>
                     * 
                     */
                    void SetTrainingTaskId(const std::string& _trainingTaskId);

                    /**
                     * 判断参数 TrainingTaskId 是否已赋值
                     * @return TrainingTaskId 是否已赋值
                     * 
                     */
                    bool TrainingTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     * @return TiProjectId <p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     * 
                     */
                    std::string GetTiProjectId() const;

                    /**
                     * 设置<p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     * @param _tiProjectId <p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     * 
                     */
                    void SetTiProjectId(const std::string& _tiProjectId);

                    /**
                     * 判断参数 TiProjectId 是否已赋值
                     * @return TiProjectId 是否已赋值
                     * 
                     */
                    bool TiProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>是否开启跨资源组调度。缺省为 false，仅改优先级时若任务已开启需显式传 true，否则会被关闭。</p>
                     * @return CrossResourceGroupScheduling <p>是否开启跨资源组调度。缺省为 false，仅改优先级时若任务已开启需显式传 true，否则会被关闭。</p>
                     * 
                     */
                    bool GetCrossResourceGroupScheduling() const;

                    /**
                     * 设置<p>是否开启跨资源组调度。缺省为 false，仅改优先级时若任务已开启需显式传 true，否则会被关闭。</p>
                     * @param _crossResourceGroupScheduling <p>是否开启跨资源组调度。缺省为 false，仅改优先级时若任务已开启需显式传 true，否则会被关闭。</p>
                     * 
                     */
                    void SetCrossResourceGroupScheduling(const bool& _crossResourceGroupScheduling);

                    /**
                     * 判断参数 CrossResourceGroupScheduling 是否已赋值
                     * @return CrossResourceGroupScheduling 是否已赋值
                     * 
                     */
                    bool CrossResourceGroupSchedulingHasBeenSet() const;

                    /**
                     * 获取<p>调度策略</p>
                     * @return SchedulePolicy <p>调度策略</p>
                     * 
                     */
                    SchedulePolicy GetSchedulePolicy() const;

                    /**
                     * 设置<p>调度策略</p>
                     * @param _schedulePolicy <p>调度策略</p>
                     * 
                     */
                    void SetSchedulePolicy(const SchedulePolicy& _schedulePolicy);

                    /**
                     * 判断参数 SchedulePolicy 是否已赋值
                     * @return SchedulePolicy 是否已赋值
                     * 
                     */
                    bool SchedulePolicyHasBeenSet() const;

                private:

                    /**
                     * <p>训练任务 id</p>
                     */
                    std::string m_trainingTaskId;
                    bool m_trainingTaskIdHasBeenSet;

                    /**
                     * <p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     */
                    std::string m_tiProjectId;
                    bool m_tiProjectIdHasBeenSet;

                    /**
                     * <p>是否开启跨资源组调度。缺省为 false，仅改优先级时若任务已开启需显式传 true，否则会被关闭。</p>
                     */
                    bool m_crossResourceGroupScheduling;
                    bool m_crossResourceGroupSchedulingHasBeenSet;

                    /**
                     * <p>调度策略</p>
                     */
                    SchedulePolicy m_schedulePolicy;
                    bool m_schedulePolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_MODIFYTRAININGTASKSCHEDULINGPOLICYREQUEST_H_
