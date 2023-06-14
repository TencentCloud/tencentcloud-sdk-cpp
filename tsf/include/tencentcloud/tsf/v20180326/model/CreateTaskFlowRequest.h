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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CREATETASKFLOWREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CREATETASKFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/TaskRule.h>
#include <tencentcloud/tsf/v20180326/model/TaskFlowEdge.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * CreateTaskFlow请求参数结构体
                */
                class CreateTaskFlowRequest : public AbstractModel
                {
                public:
                    CreateTaskFlowRequest();
                    ~CreateTaskFlowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取工作流名称
                     * @return FlowName 工作流名称
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置工作流名称
                     * @param _flowName 工作流名称
                     * 
                     */
                    void SetFlowName(const std::string& _flowName);

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     * 
                     */
                    bool FlowNameHasBeenSet() const;

                    /**
                     * 获取触发方式
                     * @return TriggerRule 触发方式
                     * 
                     */
                    TaskRule GetTriggerRule() const;

                    /**
                     * 设置触发方式
                     * @param _triggerRule 触发方式
                     * 
                     */
                    void SetTriggerRule(const TaskRule& _triggerRule);

                    /**
                     * 判断参数 TriggerRule 是否已赋值
                     * @return TriggerRule 是否已赋值
                     * 
                     */
                    bool TriggerRuleHasBeenSet() const;

                    /**
                     * 获取工作流任务节点列表
                     * @return FlowEdges 工作流任务节点列表
                     * 
                     */
                    std::vector<TaskFlowEdge> GetFlowEdges() const;

                    /**
                     * 设置工作流任务节点列表
                     * @param _flowEdges 工作流任务节点列表
                     * 
                     */
                    void SetFlowEdges(const std::vector<TaskFlowEdge>& _flowEdges);

                    /**
                     * 判断参数 FlowEdges 是否已赋值
                     * @return FlowEdges 是否已赋值
                     * 
                     */
                    bool FlowEdgesHasBeenSet() const;

                    /**
                     * 获取工作流执行超时时间
                     * @return TimeOut 工作流执行超时时间
                     * 
                     */
                    uint64_t GetTimeOut() const;

                    /**
                     * 设置工作流执行超时时间
                     * @param _timeOut 工作流执行超时时间
                     * 
                     */
                    void SetTimeOut(const uint64_t& _timeOut);

                    /**
                     * 判断参数 TimeOut 是否已赋值
                     * @return TimeOut 是否已赋值
                     * 
                     */
                    bool TimeOutHasBeenSet() const;

                    /**
                     * 获取无
                     * @return ProgramIdList 无
                     * 
                     */
                    std::vector<std::string> GetProgramIdList() const;

                    /**
                     * 设置无
                     * @param _programIdList 无
                     * 
                     */
                    void SetProgramIdList(const std::vector<std::string>& _programIdList);

                    /**
                     * 判断参数 ProgramIdList 是否已赋值
                     * @return ProgramIdList 是否已赋值
                     * 
                     */
                    bool ProgramIdListHasBeenSet() const;

                private:

                    /**
                     * 工作流名称
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 触发方式
                     */
                    TaskRule m_triggerRule;
                    bool m_triggerRuleHasBeenSet;

                    /**
                     * 工作流任务节点列表
                     */
                    std::vector<TaskFlowEdge> m_flowEdges;
                    bool m_flowEdgesHasBeenSet;

                    /**
                     * 工作流执行超时时间
                     */
                    uint64_t m_timeOut;
                    bool m_timeOutHasBeenSet;

                    /**
                     * 无
                     */
                    std::vector<std::string> m_programIdList;
                    bool m_programIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CREATETASKFLOWREQUEST_H_
