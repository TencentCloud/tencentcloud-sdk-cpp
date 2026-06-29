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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBECANCELFLOWSTASKRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBECANCELFLOWSTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/CancelFailureFlow.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeCancelFlowsTask返回参数结构体
                */
                class DescribeCancelFlowsTaskResponse : public AbstractModel
                {
                public:
                    DescribeCancelFlowsTaskResponse();
                    ~DescribeCancelFlowsTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>批量撤销任务编号，为32位字符串，通过接口<a href="https://qian.tencent.com/developers/companyApis/operateFlows/CreateBatchCancelFlowUrl">获取批量撤销签署流程腾讯电子签小程序链接</a>获得。</p>
                     * @return TaskId <p>批量撤销任务编号，为32位字符串，通过接口<a href="https://qian.tencent.com/developers/companyApis/operateFlows/CreateBatchCancelFlowUrl">获取批量撤销签署流程腾讯电子签小程序链接</a>获得。</p>
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
                     * 获取<p>任务状态，需要关注的状态</p><ul><li>**PROCESSING**  - 任务执行中</li><li>**END** - 任务处理完成</li><li>**TIMEOUT** 任务超时未处理完成，用户未在批量撤销链接有效期内操作</li></ul>
                     * @return TaskStatus <p>任务状态，需要关注的状态</p><ul><li>**PROCESSING**  - 任务执行中</li><li>**END** - 任务处理完成</li><li>**TIMEOUT** 任务超时未处理完成，用户未在批量撤销链接有效期内操作</li></ul>
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取<p>批量撤销成功的签署流程编号</p>
                     * @return SuccessFlowIds <p>批量撤销成功的签署流程编号</p>
                     * 
                     */
                    std::vector<std::string> GetSuccessFlowIds() const;

                    /**
                     * 判断参数 SuccessFlowIds 是否已赋值
                     * @return SuccessFlowIds 是否已赋值
                     * 
                     */
                    bool SuccessFlowIdsHasBeenSet() const;

                    /**
                     * 获取<p>批量撤销失败的签署流程信息</p>
                     * @return FailureFlows <p>批量撤销失败的签署流程信息</p>
                     * 
                     */
                    std::vector<CancelFailureFlow> GetFailureFlows() const;

                    /**
                     * 判断参数 FailureFlows 是否已赋值
                     * @return FailureFlows 是否已赋值
                     * 
                     */
                    bool FailureFlowsHasBeenSet() const;

                private:

                    /**
                     * <p>批量撤销任务编号，为32位字符串，通过接口<a href="https://qian.tencent.com/developers/companyApis/operateFlows/CreateBatchCancelFlowUrl">获取批量撤销签署流程腾讯电子签小程序链接</a>获得。</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务状态，需要关注的状态</p><ul><li>**PROCESSING**  - 任务执行中</li><li>**END** - 任务处理完成</li><li>**TIMEOUT** 任务超时未处理完成，用户未在批量撤销链接有效期内操作</li></ul>
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * <p>批量撤销成功的签署流程编号</p>
                     */
                    std::vector<std::string> m_successFlowIds;
                    bool m_successFlowIdsHasBeenSet;

                    /**
                     * <p>批量撤销失败的签署流程信息</p>
                     */
                    std::vector<CancelFailureFlow> m_failureFlows;
                    bool m_failureFlowsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBECANCELFLOWSTASKRESPONSE_H_
