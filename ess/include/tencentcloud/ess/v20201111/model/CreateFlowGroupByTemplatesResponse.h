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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWGROUPBYTEMPLATESRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWGROUPBYTEMPLATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/FlowGroupApprovers.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateFlowGroupByTemplates返回参数结构体
                */
                class CreateFlowGroupByTemplatesResponse : public AbstractModel
                {
                public:
                    CreateFlowGroupByTemplatesResponse();
                    ~CreateFlowGroupByTemplatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取合同(流程)组的合同组Id
                     * @return FlowGroupId 合同(流程)组的合同组Id
                     * 
                     */
                    std::string GetFlowGroupId() const;

                    /**
                     * 判断参数 FlowGroupId 是否已赋值
                     * @return FlowGroupId 是否已赋值
                     * 
                     */
                    bool FlowGroupIdHasBeenSet() const;

                    /**
                     * 获取合同(流程)组中子合同列表.
                     * @return FlowIds 合同(流程)组中子合同列表.
                     * 
                     */
                    std::vector<std::string> GetFlowIds() const;

                    /**
                     * 判断参数 FlowIds 是否已赋值
                     * @return FlowIds 是否已赋值
                     * 
                     */
                    bool FlowIdsHasBeenSet() const;

                    /**
                     * 获取合同组签署人信息。
                     * @return Approvers 合同组签署人信息。
                     * 
                     */
                    std::vector<FlowGroupApprovers> GetApprovers() const;

                    /**
                     * 判断参数 Approvers 是否已赋值
                     * @return Approvers 是否已赋值
                     * 
                     */
                    bool ApproversHasBeenSet() const;

                private:

                    /**
                     * 合同(流程)组的合同组Id
                     */
                    std::string m_flowGroupId;
                    bool m_flowGroupIdHasBeenSet;

                    /**
                     * 合同(流程)组中子合同列表.
                     */
                    std::vector<std::string> m_flowIds;
                    bool m_flowIdsHasBeenSet;

                    /**
                     * 合同组签署人信息。
                     */
                    std::vector<FlowGroupApprovers> m_approvers;
                    bool m_approversHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWGROUPBYTEMPLATESRESPONSE_H_
