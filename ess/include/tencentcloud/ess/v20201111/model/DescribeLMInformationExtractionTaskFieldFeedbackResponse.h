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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBELMINFORMATIONEXTRACTIONTASKFIELDFEEDBACKRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBELMINFORMATIONEXTRACTIONTASKFIELDFEEDBACKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/SubTaskFeedback.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeLMInformationExtractionTaskFieldFeedback返回参数结构体
                */
                class DescribeLMInformationExtractionTaskFieldFeedbackResponse : public AbstractModel
                {
                public:
                    DescribeLMInformationExtractionTaskFieldFeedbackResponse();
                    ~DescribeLMInformationExtractionTaskFieldFeedbackResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取合同智能提取子任务反馈信息
                     * @return SubTaskFeedbackList 合同智能提取子任务反馈信息
                     * 
                     */
                    std::vector<SubTaskFeedback> GetSubTaskFeedbackList() const;

                    /**
                     * 判断参数 SubTaskFeedbackList 是否已赋值
                     * @return SubTaskFeedbackList 是否已赋值
                     * 
                     */
                    bool SubTaskFeedbackListHasBeenSet() const;

                    /**
                     * 获取合同智能提取任务ID
                     * @return TaskId 合同智能提取任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 合同智能提取子任务反馈信息
                     */
                    std::vector<SubTaskFeedback> m_subTaskFeedbackList;
                    bool m_subTaskFeedbackListHasBeenSet;

                    /**
                     * 合同智能提取任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBELMINFORMATIONEXTRACTIONTASKFIELDFEEDBACKRESPONSE_H_
