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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_DESCRIBESTRUCTCOMPAREDATARESPONSE_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_DESCRIBESTRUCTCOMPAREDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cii/v20210408/model/CompareMetricsData.h>
#include <tencentcloud/cii/v20210408/model/ReviewDataTaskInfo.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
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
                     * 获取主任务号
                     * @return MainTaskId 主任务号
                     * 
                     */
                    std::string GetMainTaskId() const;

                    /**
                     * 判断参数 MainTaskId 是否已赋值
                     * @return MainTaskId 是否已赋值
                     * 
                     */
                    bool MainTaskIdHasBeenSet() const;

                    /**
                     * 获取客户号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomerId 客户号
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomerName 客户姓名
注意：此字段可能返回 null，表示取不到有效值。
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

                    /**
                     * 获取子任务号
                     * @return SubTaskId 子任务号
                     * 
                     */
                    std::string GetSubTaskId() const;

                    /**
                     * 判断参数 SubTaskId 是否已赋值
                     * @return SubTaskId 是否已赋值
                     * 
                     */
                    bool SubTaskIdHasBeenSet() const;

                    /**
                     * 获取所有的子任务
                     * @return AllTasks 所有的子任务
                     * 
                     */
                    std::vector<ReviewDataTaskInfo> GetAllTasks() const;

                    /**
                     * 判断参数 AllTasks 是否已赋值
                     * @return AllTasks 是否已赋值
                     * 
                     */
                    bool AllTasksHasBeenSet() const;

                    /**
                     * 获取任务类型
                     * @return TaskType 任务类型
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                private:

                    /**
                     * 保单号
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 主任务号
                     */
                    std::string m_mainTaskId;
                    bool m_mainTaskIdHasBeenSet;

                    /**
                     * 客户号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_customerId;
                    bool m_customerIdHasBeenSet;

                    /**
                     * 客户姓名
注意：此字段可能返回 null，表示取不到有效值。
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

                    /**
                     * 子任务号
                     */
                    std::string m_subTaskId;
                    bool m_subTaskIdHasBeenSet;

                    /**
                     * 所有的子任务
                     */
                    std::vector<ReviewDataTaskInfo> m_allTasks;
                    bool m_allTasksHasBeenSet;

                    /**
                     * 任务类型
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_DESCRIBESTRUCTCOMPAREDATARESPONSE_H_
