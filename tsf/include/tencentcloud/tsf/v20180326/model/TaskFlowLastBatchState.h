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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_TASKFLOWLASTBATCHSTATE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_TASKFLOWLASTBATCHSTATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 工作流最近批次的状态
                */
                class TaskFlowLastBatchState : public AbstractModel
                {
                public:
                    TaskFlowLastBatchState();
                    ~TaskFlowLastBatchState() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取批次ID
                     * @return FlowBatchId 批次ID
                     * 
                     */
                    std::string GetFlowBatchId() const;

                    /**
                     * 设置批次ID
                     * @param _flowBatchId 批次ID
                     * 
                     */
                    void SetFlowBatchId(const std::string& _flowBatchId);

                    /**
                     * 判断参数 FlowBatchId 是否已赋值
                     * @return FlowBatchId 是否已赋值
                     * 
                     */
                    bool FlowBatchIdHasBeenSet() const;

                    /**
                     * 获取批次历史ID
                     * @return FlowBatchLogId 批次历史ID
                     * 
                     */
                    std::string GetFlowBatchLogId() const;

                    /**
                     * 设置批次历史ID
                     * @param _flowBatchLogId 批次历史ID
                     * 
                     */
                    void SetFlowBatchLogId(const std::string& _flowBatchLogId);

                    /**
                     * 判断参数 FlowBatchLogId 是否已赋值
                     * @return FlowBatchLogId 是否已赋值
                     * 
                     */
                    bool FlowBatchLogIdHasBeenSet() const;

                    /**
                     * 获取状态,WAITING/SUCCESS/FAILED/RUNNING/TERMINATING
                     * @return State 状态,WAITING/SUCCESS/FAILED/RUNNING/TERMINATING
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置状态,WAITING/SUCCESS/FAILED/RUNNING/TERMINATING
                     * @param _state 状态,WAITING/SUCCESS/FAILED/RUNNING/TERMINATING
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * 批次ID
                     */
                    std::string m_flowBatchId;
                    bool m_flowBatchIdHasBeenSet;

                    /**
                     * 批次历史ID
                     */
                    std::string m_flowBatchLogId;
                    bool m_flowBatchLogIdHasBeenSet;

                    /**
                     * 状态,WAITING/SUCCESS/FAILED/RUNNING/TERMINATING
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_TASKFLOWLASTBATCHSTATE_H_
