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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBECONTRACTCOMPARISONTASKREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBECONTRACTCOMPARISONTASKREQUEST_H_

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
                * DescribeContractComparisonTask请求参数结构体
                */
                class DescribeContractComparisonTaskRequest : public AbstractModel
                {
                public:
                    DescribeContractComparisonTaskRequest();
                    ~DescribeContractComparisonTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行合同审查任务的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @return Operator 执行合同审查任务的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置执行合同审查任务的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @param _operator 执行合同审查任务的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
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
                     * 获取合同对比任务ID，该参数通过调用接口CreateContractComparisonTask获取。
                     * @return TaskId 合同对比任务ID，该参数通过调用接口CreateContractComparisonTask获取。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置合同对比任务ID，该参数通过调用接口CreateContractComparisonTask获取。
                     * @param _taskId 合同对比任务ID，该参数通过调用接口CreateContractComparisonTask获取。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取是否返回详细的对比结果。为 true时，响应中将包含详细的对比信息，如相似度、文本差异具体内容等；为 false时，仅返回任务基本状态信息。
注：`详细结果数据量可能较大，请按需开启。`
                     * @return ShowDetail 是否返回详细的对比结果。为 true时，响应中将包含详细的对比信息，如相似度、文本差异具体内容等；为 false时，仅返回任务基本状态信息。
注：`详细结果数据量可能较大，请按需开启。`
                     * 
                     */
                    bool GetShowDetail() const;

                    /**
                     * 设置是否返回详细的对比结果。为 true时，响应中将包含详细的对比信息，如相似度、文本差异具体内容等；为 false时，仅返回任务基本状态信息。
注：`详细结果数据量可能较大，请按需开启。`
                     * @param _showDetail 是否返回详细的对比结果。为 true时，响应中将包含详细的对比信息，如相似度、文本差异具体内容等；为 false时，仅返回任务基本状态信息。
注：`详细结果数据量可能较大，请按需开启。`
                     * 
                     */
                    void SetShowDetail(const bool& _showDetail);

                    /**
                     * 判断参数 ShowDetail 是否已赋值
                     * @return ShowDetail 是否已赋值
                     * 
                     */
                    bool ShowDetailHasBeenSet() const;

                private:

                    /**
                     * 执行合同审查任务的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 合同对比任务ID，该参数通过调用接口CreateContractComparisonTask获取。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 是否返回详细的对比结果。为 true时，响应中将包含详细的对比信息，如相似度、文本差异具体内容等；为 false时，仅返回任务基本状态信息。
注：`详细结果数据量可能较大，请按需开启。`
                     */
                    bool m_showDetail;
                    bool m_showDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBECONTRACTCOMPARISONTASKREQUEST_H_
