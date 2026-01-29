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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBELMINFORMATIONEXTRACTIONTASKFIELDFEEDBACKREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBELMINFORMATIONEXTRACTIONTASKFIELDFEEDBACKREQUEST_H_

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
                * DescribeLMInformationExtractionTaskFieldFeedback请求参数结构体
                */
                class DescribeLMInformationExtractionTaskFieldFeedbackRequest : public AbstractModel
                {
                public:
                    DescribeLMInformationExtractionTaskFieldFeedbackRequest();
                    ~DescribeLMInformationExtractionTaskFieldFeedbackRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行合同智能提取任务的员工信息。
                     * @return Operator 执行合同智能提取任务的员工信息。
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置执行合同智能提取任务的员工信息。
                     * @param _operator 执行合同智能提取任务的员工信息。
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
                     * 获取合同智能提取任务ID，该参数通过调用接口[批量创建合同智能提取任务](https://qian.tencent.com/developers/companyApis/%E5%90%88%E5%90%8C%E6%99%BA%E8%83%BD%E7%9B%B8%E5%85%B3%E6%8E%A5%E5%8F%A3/CreateBatchInformationExtractionTask/)获取。
                     * @return TaskId 合同智能提取任务ID，该参数通过调用接口[批量创建合同智能提取任务](https://qian.tencent.com/developers/companyApis/%E5%90%88%E5%90%8C%E6%99%BA%E8%83%BD%E7%9B%B8%E5%85%B3%E6%8E%A5%E5%8F%A3/CreateBatchInformationExtractionTask/)获取。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置合同智能提取任务ID，该参数通过调用接口[批量创建合同智能提取任务](https://qian.tencent.com/developers/companyApis/%E5%90%88%E5%90%8C%E6%99%BA%E8%83%BD%E7%9B%B8%E5%85%B3%E6%8E%A5%E5%8F%A3/CreateBatchInformationExtractionTask/)获取。
                     * @param _taskId 合同智能提取任务ID，该参数通过调用接口[批量创建合同智能提取任务](https://qian.tencent.com/developers/companyApis/%E5%90%88%E5%90%8C%E6%99%BA%E8%83%BD%E7%9B%B8%E5%85%B3%E6%8E%A5%E5%8F%A3/CreateBatchInformationExtractionTask/)获取。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 执行合同智能提取任务的员工信息。
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 合同智能提取任务ID，该参数通过调用接口[批量创建合同智能提取任务](https://qian.tencent.com/developers/companyApis/%E5%90%88%E5%90%8C%E6%99%BA%E8%83%BD%E7%9B%B8%E5%85%B3%E6%8E%A5%E5%8F%A3/CreateBatchInformationExtractionTask/)获取。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBELMINFORMATIONEXTRACTIONTASKFIELDFEEDBACKREQUEST_H_
