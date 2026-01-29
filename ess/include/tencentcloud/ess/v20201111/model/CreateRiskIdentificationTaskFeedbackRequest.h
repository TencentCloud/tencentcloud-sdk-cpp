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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATERISKIDENTIFICATIONTASKFEEDBACKREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATERISKIDENTIFICATIONTASKFEEDBACKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateRiskIdentificationTaskFeedback请求参数结构体
                */
                class CreateRiskIdentificationTaskFeedbackRequest : public AbstractModel
                {
                public:
                    CreateRiskIdentificationTaskFeedbackRequest();
                    ~CreateRiskIdentificationTaskFeedbackRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行合同审查任务的员工信息。
                     * @return Operator 执行合同审查任务的员工信息。
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置执行合同审查任务的员工信息。
                     * @param _operator 执行合同审查任务的员工信息。
                     * 
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取合同审查风险结果ID，取值如下：

- 反馈风险项结果。该参数通过调用接口[获取合同审查任务详情](https://qian.tencent.com/developers/companyApis/%E5%90%88%E5%90%8C%E6%99%BA%E8%83%BD%E7%9B%B8%E5%85%B3%E6%8E%A5%E5%8F%A3/DescribeContractReviewTask)获取（取Risks.RiskId值）。

- 反馈通过项结果。该参数通过调用接口[获取合同审查任务详情](https://qian.tencent.com/developers/companyApis/%E5%90%88%E5%90%8C%E6%99%BA%E8%83%BD%E7%9B%B8%E5%85%B3%E6%8E%A5%E5%8F%A3/DescribeContractReviewTask)获取（取ApprovedLists.RiskId值）
                     * @return RiskId 合同审查风险结果ID，取值如下：

- 反馈风险项结果。该参数通过调用接口[获取合同审查任务详情](https://qian.tencent.com/developers/companyApis/%E5%90%88%E5%90%8C%E6%99%BA%E8%83%BD%E7%9B%B8%E5%85%B3%E6%8E%A5%E5%8F%A3/DescribeContractReviewTask)获取（取Risks.RiskId值）。

- 反馈通过项结果。该参数通过调用接口[获取合同审查任务详情](https://qian.tencent.com/developers/companyApis/%E5%90%88%E5%90%8C%E6%99%BA%E8%83%BD%E7%9B%B8%E5%85%B3%E6%8E%A5%E5%8F%A3/DescribeContractReviewTask)获取（取ApprovedLists.RiskId值）
                     * 
                     */
                    std::string GetRiskId() const;

                    /**
                     * 设置合同审查风险结果ID，取值如下：

- 反馈风险项结果。该参数通过调用接口[获取合同审查任务详情](https://qian.tencent.com/developers/companyApis/%E5%90%88%E5%90%8C%E6%99%BA%E8%83%BD%E7%9B%B8%E5%85%B3%E6%8E%A5%E5%8F%A3/DescribeContractReviewTask)获取（取Risks.RiskId值）。

- 反馈通过项结果。该参数通过调用接口[获取合同审查任务详情](https://qian.tencent.com/developers/companyApis/%E5%90%88%E5%90%8C%E6%99%BA%E8%83%BD%E7%9B%B8%E5%85%B3%E6%8E%A5%E5%8F%A3/DescribeContractReviewTask)获取（取ApprovedLists.RiskId值）
                     * @param _riskId 合同审查风险结果ID，取值如下：

- 反馈风险项结果。该参数通过调用接口[获取合同审查任务详情](https://qian.tencent.com/developers/companyApis/%E5%90%88%E5%90%8C%E6%99%BA%E8%83%BD%E7%9B%B8%E5%85%B3%E6%8E%A5%E5%8F%A3/DescribeContractReviewTask)获取（取Risks.RiskId值）。

- 反馈通过项结果。该参数通过调用接口[获取合同审查任务详情](https://qian.tencent.com/developers/companyApis/%E5%90%88%E5%90%8C%E6%99%BA%E8%83%BD%E7%9B%B8%E5%85%B3%E6%8E%A5%E5%8F%A3/DescribeContractReviewTask)获取（取ApprovedLists.RiskId值）
                     * 
                     */
                    void SetRiskId(const std::string& _riskId);

                    /**
                     * 判断参数 RiskId 是否已赋值
                     * @return RiskId 是否已赋值
                     * 
                     */
                    bool RiskIdHasBeenSet() const;

                    /**
                     * 获取反馈结果

- 1: 其他错误
- 2: 审查错误
- 3: 审查正确
                     * @return FeedbackResult 反馈结果

- 1: 其他错误
- 2: 审查错误
- 3: 审查正确
                     * 
                     */
                    int64_t GetFeedbackResult() const;

                    /**
                     * 设置反馈结果

- 1: 其他错误
- 2: 审查错误
- 3: 审查正确
                     * @param _feedbackResult 反馈结果

- 1: 其他错误
- 2: 审查错误
- 3: 审查正确
                     * 
                     */
                    void SetFeedbackResult(const int64_t& _feedbackResult);

                    /**
                     * 判断参数 FeedbackResult 是否已赋值
                     * @return FeedbackResult 是否已赋值
                     * 
                     */
                    bool FeedbackResultHasBeenSet() const;

                    /**
                     * 获取审查反馈原因
                     * @return Reason 审查反馈原因
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置审查反馈原因
                     * @param _reason 审查反馈原因
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * 执行合同审查任务的员工信息。
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 合同审查风险结果ID，取值如下：

- 反馈风险项结果。该参数通过调用接口[获取合同审查任务详情](https://qian.tencent.com/developers/companyApis/%E5%90%88%E5%90%8C%E6%99%BA%E8%83%BD%E7%9B%B8%E5%85%B3%E6%8E%A5%E5%8F%A3/DescribeContractReviewTask)获取（取Risks.RiskId值）。

- 反馈通过项结果。该参数通过调用接口[获取合同审查任务详情](https://qian.tencent.com/developers/companyApis/%E5%90%88%E5%90%8C%E6%99%BA%E8%83%BD%E7%9B%B8%E5%85%B3%E6%8E%A5%E5%8F%A3/DescribeContractReviewTask)获取（取ApprovedLists.RiskId值）
                     */
                    std::string m_riskId;
                    bool m_riskIdHasBeenSet;

                    /**
                     * 反馈结果

- 1: 其他错误
- 2: 审查错误
- 3: 审查正确
                     */
                    int64_t m_feedbackResult;
                    bool m_feedbackResultHasBeenSet;

                    /**
                     * 审查反馈原因
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATERISKIDENTIFICATIONTASKFEEDBACKREQUEST_H_
