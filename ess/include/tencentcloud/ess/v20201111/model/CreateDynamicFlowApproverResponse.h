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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEDYNAMICFLOWAPPROVERRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEDYNAMICFLOWAPPROVERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/DynamicFlowApproverResult.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateDynamicFlowApprover返回参数结构体
                */
                class CreateDynamicFlowApproverResponse : public AbstractModel
                {
                public:
                    CreateDynamicFlowApproverResponse();
                    ~CreateDynamicFlowApproverResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取合同流程ID，为32位字符串
                     * @return FlowId 合同流程ID，为32位字符串
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取补充动态合同签署人的结果数组
                     * @return DynamicFlowApproverList 补充动态合同签署人的结果数组
                     * 
                     */
                    std::vector<DynamicFlowApproverResult> GetDynamicFlowApproverList() const;

                    /**
                     * 判断参数 DynamicFlowApproverList 是否已赋值
                     * @return DynamicFlowApproverList 是否已赋值
                     * 
                     */
                    bool DynamicFlowApproverListHasBeenSet() const;

                private:

                    /**
                     * 合同流程ID，为32位字符串
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 补充动态合同签署人的结果数组
                     */
                    std::vector<DynamicFlowApproverResult> m_dynamicFlowApproverList;
                    bool m_dynamicFlowApproverListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEDYNAMICFLOWAPPROVERRESPONSE_H_
