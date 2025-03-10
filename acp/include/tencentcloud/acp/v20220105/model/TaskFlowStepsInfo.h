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

#ifndef TENCENTCLOUD_ACP_V20220105_MODEL_TASKFLOWSTEPSINFO_H_
#define TENCENTCLOUD_ACP_V20220105_MODEL_TASKFLOWSTEPSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Acp
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 任务流步骤详情
                */
                class TaskFlowStepsInfo : public AbstractModel
                {
                public:
                    TaskFlowStepsInfo();
                    ~TaskFlowStepsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流程编号
                     * @return FlowNo 流程编号
                     * 
                     */
                    std::string GetFlowNo() const;

                    /**
                     * 设置流程编号
                     * @param _flowNo 流程编号
                     * 
                     */
                    void SetFlowNo(const std::string& _flowNo);

                    /**
                     * 判断参数 FlowNo 是否已赋值
                     * @return FlowNo 是否已赋值
                     * 
                     */
                    bool FlowNoHasBeenSet() const;

                    /**
                     * 获取流程名称
                     * @return FlowName 流程名称
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置流程名称
                     * @param _flowName 流程名称
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
                     * 获取流程状态, 其他值:进行中, 2:成功, 3:失败
                     * @return FlowStatus 流程状态, 其他值:进行中, 2:成功, 3:失败
                     * 
                     */
                    int64_t GetFlowStatus() const;

                    /**
                     * 设置流程状态, 其他值:进行中, 2:成功, 3:失败
                     * @param _flowStatus 流程状态, 其他值:进行中, 2:成功, 3:失败
                     * 
                     */
                    void SetFlowStatus(const int64_t& _flowStatus);

                    /**
                     * 判断参数 FlowStatus 是否已赋值
                     * @return FlowStatus 是否已赋值
                     * 
                     */
                    bool FlowStatusHasBeenSet() const;

                    /**
                     * 获取流程状态描述
                     * @return FlowStateDesc 流程状态描述
                     * 
                     */
                    std::string GetFlowStateDesc() const;

                    /**
                     * 设置流程状态描述
                     * @param _flowStateDesc 流程状态描述
                     * 
                     */
                    void SetFlowStateDesc(const std::string& _flowStateDesc);

                    /**
                     * 判断参数 FlowStateDesc 是否已赋值
                     * @return FlowStateDesc 是否已赋值
                     * 
                     */
                    bool FlowStateDescHasBeenSet() const;

                    /**
                     * 获取流程启动时间
                     * @return StartTime 流程启动时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置流程启动时间
                     * @param _startTime 流程启动时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取流程完成时间
                     * @return EndTime 流程完成时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置流程完成时间
                     * @param _endTime 流程完成时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 流程编号
                     */
                    std::string m_flowNo;
                    bool m_flowNoHasBeenSet;

                    /**
                     * 流程名称
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 流程状态, 其他值:进行中, 2:成功, 3:失败
                     */
                    int64_t m_flowStatus;
                    bool m_flowStatusHasBeenSet;

                    /**
                     * 流程状态描述
                     */
                    std::string m_flowStateDesc;
                    bool m_flowStateDescHasBeenSet;

                    /**
                     * 流程启动时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 流程完成时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACP_V20220105_MODEL_TASKFLOWSTEPSINFO_H_
