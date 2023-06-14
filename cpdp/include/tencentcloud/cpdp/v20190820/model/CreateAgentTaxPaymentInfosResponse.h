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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEAGENTTAXPAYMENTINFOSRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEAGENTTAXPAYMENTINFOSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/AgentTaxPaymentBatch.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * CreateAgentTaxPaymentInfos返回参数结构体
                */
                class CreateAgentTaxPaymentInfosResponse : public AbstractModel
                {
                public:
                    CreateAgentTaxPaymentInfosResponse();
                    ~CreateAgentTaxPaymentInfosResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取代理商完税证明批次信息
                     * @return AgentTaxPaymentBatch 代理商完税证明批次信息
                     * 
                     */
                    AgentTaxPaymentBatch GetAgentTaxPaymentBatch() const;

                    /**
                     * 判断参数 AgentTaxPaymentBatch 是否已赋值
                     * @return AgentTaxPaymentBatch 是否已赋值
                     * 
                     */
                    bool AgentTaxPaymentBatchHasBeenSet() const;

                private:

                    /**
                     * 代理商完税证明批次信息
                     */
                    AgentTaxPaymentBatch m_agentTaxPaymentBatch;
                    bool m_agentTaxPaymentBatchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEAGENTTAXPAYMENTINFOSRESPONSE_H_
