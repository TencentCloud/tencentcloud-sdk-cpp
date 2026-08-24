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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_INVOKETWESEECOMPREHENSIONRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_INVOKETWESEECOMPREHENSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/SeeComprehensionResult.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * InvokeTWeSeeComprehension返回参数结构体
                */
                class InvokeTWeSeeComprehensionResponse : public AbstractModel
                {
                public:
                    InvokeTWeSeeComprehensionResponse();
                    ~InvokeTWeSeeComprehensionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务 ID</p>
                     * @return TaskId <p>任务 ID</p>
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
                     * 获取<p>任务状态。可能取值：</p><ul><li><code>1</code>：失败</li><li><code>2</code>：空结果</li><li><code>3</code>：有效结果</li><li><code>4</code>：处理中</li></ul>
                     * @return Status <p>任务状态。可能取值：</p><ul><li><code>1</code>：失败</li><li><code>2</code>：空结果</li><li><code>3</code>：有效结果</li><li><code>4</code>：处理中</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>视觉理解结果</p>
                     * @return ComprehensionResult <p>视觉理解结果</p>
                     * 
                     */
                    SeeComprehensionResult GetComprehensionResult() const;

                    /**
                     * 判断参数 ComprehensionResult 是否已赋值
                     * @return ComprehensionResult 是否已赋值
                     * 
                     */
                    bool ComprehensionResultHasBeenSet() const;

                    /**
                     * 获取<p>完成该任务所消耗的基础能力额度</p>
                     * @return CostBasic <p>完成该任务所消耗的基础能力额度</p>
                     * 
                     */
                    int64_t GetCostBasic() const;

                    /**
                     * 判断参数 CostBasic 是否已赋值
                     * @return CostBasic 是否已赋值
                     * 
                     */
                    bool CostBasicHasBeenSet() const;

                    /**
                     * 获取<p>完成该任务所消耗的高级能力额度</p>
                     * @return CostAdvanced <p>完成该任务所消耗的高级能力额度</p>
                     * 
                     */
                    int64_t GetCostAdvanced() const;

                    /**
                     * 判断参数 CostAdvanced 是否已赋值
                     * @return CostAdvanced 是否已赋值
                     * 
                     */
                    bool CostAdvancedHasBeenSet() const;

                private:

                    /**
                     * <p>任务 ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务状态。可能取值：</p><ul><li><code>1</code>：失败</li><li><code>2</code>：空结果</li><li><code>3</code>：有效结果</li><li><code>4</code>：处理中</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>视觉理解结果</p>
                     */
                    SeeComprehensionResult m_comprehensionResult;
                    bool m_comprehensionResultHasBeenSet;

                    /**
                     * <p>完成该任务所消耗的基础能力额度</p>
                     */
                    int64_t m_costBasic;
                    bool m_costBasicHasBeenSet;

                    /**
                     * <p>完成该任务所消耗的高级能力额度</p>
                     */
                    int64_t m_costAdvanced;
                    bool m_costAdvancedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_INVOKETWESEECOMPREHENSIONRESPONSE_H_
