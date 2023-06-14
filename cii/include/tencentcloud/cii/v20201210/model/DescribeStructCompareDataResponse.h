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

#ifndef TENCENTCLOUD_CII_V20201210_MODEL_DESCRIBESTRUCTCOMPAREDATARESPONSE_H_
#define TENCENTCLOUD_CII_V20201210_MODEL_DESCRIBESTRUCTCOMPAREDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cii/v20201210/model/CompareMetricsData.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20201210
        {
            namespace Model
            {
                /**
                * DescribeStructCompareData返回参数结构体
                */
                class DescribeStructCompareDataResponse : public AbstractModel
                {
                public:
                    DescribeStructCompareDataResponse();
                    ~DescribeStructCompareDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取保单号
                     * @return PolicyId 保单号
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取结构化任务ID
                     * @return TaskId 结构化任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取客户号
                     * @return CustomerId 客户号
                     * 
                     */
                    std::string GetCustomerId() const;

                    /**
                     * 判断参数 CustomerId 是否已赋值
                     * @return CustomerId 是否已赋值
                     * 
                     */
                    bool CustomerIdHasBeenSet() const;

                    /**
                     * 获取客户姓名
                     * @return CustomerName 客户姓名
                     * 
                     */
                    std::string GetCustomerName() const;

                    /**
                     * 判断参数 CustomerName 是否已赋值
                     * @return CustomerName 是否已赋值
                     * 
                     */
                    bool CustomerNameHasBeenSet() const;

                    /**
                     * 获取复核时间
                     * @return ReviewTime 复核时间
                     * 
                     */
                    std::string GetReviewTime() const;

                    /**
                     * 判断参数 ReviewTime 是否已赋值
                     * @return ReviewTime 是否已赋值
                     * 
                     */
                    bool ReviewTimeHasBeenSet() const;

                    /**
                     * 获取算法识别结果
                     * @return MachineResult 算法识别结果
                     * 
                     */
                    std::string GetMachineResult() const;

                    /**
                     * 判断参数 MachineResult 是否已赋值
                     * @return MachineResult 是否已赋值
                     * 
                     */
                    bool MachineResultHasBeenSet() const;

                    /**
                     * 获取人工复核结果
                     * @return ManualResult 人工复核结果
                     * 
                     */
                    std::string GetManualResult() const;

                    /**
                     * 判断参数 ManualResult 是否已赋值
                     * @return ManualResult 是否已赋值
                     * 
                     */
                    bool ManualResultHasBeenSet() const;

                    /**
                     * 获取结构化对比指标数据
                     * @return Metrics 结构化对比指标数据
                     * 
                     */
                    CompareMetricsData GetMetrics() const;

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     * 
                     */
                    bool MetricsHasBeenSet() const;

                    /**
                     * 获取新增项
                     * @return NewItems 新增项
                     * 
                     */
                    std::string GetNewItems() const;

                    /**
                     * 判断参数 NewItems 是否已赋值
                     * @return NewItems 是否已赋值
                     * 
                     */
                    bool NewItemsHasBeenSet() const;

                    /**
                     * 获取修改项
                     * @return ModifyItems 修改项
                     * 
                     */
                    std::string GetModifyItems() const;

                    /**
                     * 判断参数 ModifyItems 是否已赋值
                     * @return ModifyItems 是否已赋值
                     * 
                     */
                    bool ModifyItemsHasBeenSet() const;

                private:

                    /**
                     * 保单号
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 结构化任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 客户号
                     */
                    std::string m_customerId;
                    bool m_customerIdHasBeenSet;

                    /**
                     * 客户姓名
                     */
                    std::string m_customerName;
                    bool m_customerNameHasBeenSet;

                    /**
                     * 复核时间
                     */
                    std::string m_reviewTime;
                    bool m_reviewTimeHasBeenSet;

                    /**
                     * 算法识别结果
                     */
                    std::string m_machineResult;
                    bool m_machineResultHasBeenSet;

                    /**
                     * 人工复核结果
                     */
                    std::string m_manualResult;
                    bool m_manualResultHasBeenSet;

                    /**
                     * 结构化对比指标数据
                     */
                    CompareMetricsData m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * 新增项
                     */
                    std::string m_newItems;
                    bool m_newItemsHasBeenSet;

                    /**
                     * 修改项
                     */
                    std::string m_modifyItems;
                    bool m_modifyItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20201210_MODEL_DESCRIBESTRUCTCOMPAREDATARESPONSE_H_
