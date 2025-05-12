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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPREPAREFLOWGROUPRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPREPAREFLOWGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreatePrepareFlowGroup返回参数结构体
                */
                class CreatePrepareFlowGroupResponse : public AbstractModel
                {
                public:
                    CreatePrepareFlowGroupResponse();
                    ~CreatePrepareFlowGroupResponse() = default;
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
                     * 获取嵌入式合同组发起链接
                     * @return PrepareUrl 嵌入式合同组发起链接
                     * 
                     */
                    std::string GetPrepareUrl() const;

                    /**
                     * 判断参数 PrepareUrl 是否已赋值
                     * @return PrepareUrl 是否已赋值
                     * 
                     */
                    bool PrepareUrlHasBeenSet() const;

                private:

                    /**
                     * 合同(流程)组的合同组Id
                     */
                    std::string m_flowGroupId;
                    bool m_flowGroupIdHasBeenSet;

                    /**
                     * 嵌入式合同组发起链接
                     */
                    std::string m_prepareUrl;
                    bool m_prepareUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPREPAREFLOWGROUPRESPONSE_H_
