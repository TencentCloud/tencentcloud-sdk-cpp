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

#ifndef TENCENTCLOUD_ACP_V20220105_MODEL_DESCRIBESCANTASKSTATUSRESPONSE_H_
#define TENCENTCLOUD_ACP_V20220105_MODEL_DESCRIBESCANTASKSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/acp/v20220105/model/TaskFlowStepsInfo.h>


namespace TencentCloud
{
    namespace Acp
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * DescribeScanTaskStatus返回参数结构体
                */
                class DescribeScanTaskStatusResponse : public AbstractModel
                {
                public:
                    DescribeScanTaskStatusResponse();
                    ~DescribeScanTaskStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回值, 0:成功, 其他值请查看“返回值”定义
                     * @return Result 返回值, 0:成功, 其他值请查看“返回值”定义
                     * 
                     */
                    int64_t GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取0:默认值(待检测/待咨询), 1.检测中,  4:任务完成/咨询完成, 5:任务失败, 6:咨询中;
                     * @return Status 0:默认值(待检测/待咨询), 1.检测中,  4:任务完成/咨询完成, 5:任务失败, 6:咨询中;
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取诊断失败的错误信息
                     * @return ErrMsg 诊断失败的错误信息
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取任务流详情
                     * @return FlowSteps 任务流详情
                     * 
                     */
                    std::vector<TaskFlowStepsInfo> GetFlowSteps() const;

                    /**
                     * 判断参数 FlowSteps 是否已赋值
                     * @return FlowSteps 是否已赋值
                     * 
                     */
                    bool FlowStepsHasBeenSet() const;

                private:

                    /**
                     * 返回值, 0:成功, 其他值请查看“返回值”定义
                     */
                    int64_t m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 0:默认值(待检测/待咨询), 1.检测中,  4:任务完成/咨询完成, 5:任务失败, 6:咨询中;
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 诊断失败的错误信息
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * 任务流详情
                     */
                    std::vector<TaskFlowStepsInfo> m_flowSteps;
                    bool m_flowStepsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACP_V20220105_MODEL_DESCRIBESCANTASKSTATUSRESPONSE_H_
