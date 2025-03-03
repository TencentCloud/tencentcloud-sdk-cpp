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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWFORWARDSRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWFORWARDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/FlowForwardResult.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateFlowForwards返回参数结构体
                */
                class CreateFlowForwardsResponse : public AbstractModel
                {
                public:
                    CreateFlowForwardsResponse();
                    ~CreateFlowForwardsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取失败的合同id以及错误详情
                     * @return FailedFlows 失败的合同id以及错误详情
                     * 
                     */
                    std::vector<FlowForwardResult> GetFailedFlows() const;

                    /**
                     * 判断参数 FailedFlows 是否已赋值
                     * @return FailedFlows 是否已赋值
                     * 
                     */
                    bool FailedFlowsHasBeenSet() const;

                    /**
                     * 获取成功的合同id
                     * @return SuccessFlows 成功的合同id
                     * 
                     */
                    std::vector<std::string> GetSuccessFlows() const;

                    /**
                     * 判断参数 SuccessFlows 是否已赋值
                     * @return SuccessFlows 是否已赋值
                     * 
                     */
                    bool SuccessFlowsHasBeenSet() const;

                private:

                    /**
                     * 失败的合同id以及错误详情
                     */
                    std::vector<FlowForwardResult> m_failedFlows;
                    bool m_failedFlowsHasBeenSet;

                    /**
                     * 成功的合同id
                     */
                    std::vector<std::string> m_successFlows;
                    bool m_successFlowsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWFORWARDSRESPONSE_H_
