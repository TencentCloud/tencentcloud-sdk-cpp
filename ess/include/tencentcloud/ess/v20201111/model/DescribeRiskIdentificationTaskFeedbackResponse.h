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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBERISKIDENTIFICATIONTASKFEEDBACKRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBERISKIDENTIFICATIONTASKFEEDBACKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/RiskIdentificationFeedbackInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeRiskIdentificationTaskFeedback返回参数结构体
                */
                class DescribeRiskIdentificationTaskFeedbackResponse : public AbstractModel
                {
                public:
                    DescribeRiskIdentificationTaskFeedbackResponse();
                    ~DescribeRiskIdentificationTaskFeedbackResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取合同审查任务反馈信息列表
                     * @return FeedbackList 合同审查任务反馈信息列表
                     * 
                     */
                    std::vector<RiskIdentificationFeedbackInfo> GetFeedbackList() const;

                    /**
                     * 判断参数 FeedbackList 是否已赋值
                     * @return FeedbackList 是否已赋值
                     * 
                     */
                    bool FeedbackListHasBeenSet() const;

                private:

                    /**
                     * 合同审查任务反馈信息列表
                     */
                    std::vector<RiskIdentificationFeedbackInfo> m_feedbackList;
                    bool m_feedbackListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBERISKIDENTIFICATIONTASKFEEDBACKRESPONSE_H_
