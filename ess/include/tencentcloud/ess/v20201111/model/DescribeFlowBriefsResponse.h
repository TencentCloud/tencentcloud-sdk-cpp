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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEFLOWBRIEFSRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEFLOWBRIEFSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/FlowBrief.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeFlowBriefs返回参数结构体
                */
                class DescribeFlowBriefsResponse : public AbstractModel
                {
                public:
                    DescribeFlowBriefsResponse();
                    ~DescribeFlowBriefsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取合同流程基础信息列表，包含流程的名称、状态、创建日期等基本信息。 
注：`与入参 FlowIds 的顺序可能存在不一致的情况。`
                     * @return FlowBriefs 合同流程基础信息列表，包含流程的名称、状态、创建日期等基本信息。 
注：`与入参 FlowIds 的顺序可能存在不一致的情况。`
                     * 
                     */
                    std::vector<FlowBrief> GetFlowBriefs() const;

                    /**
                     * 判断参数 FlowBriefs 是否已赋值
                     * @return FlowBriefs 是否已赋值
                     * 
                     */
                    bool FlowBriefsHasBeenSet() const;

                private:

                    /**
                     * 合同流程基础信息列表，包含流程的名称、状态、创建日期等基本信息。 
注：`与入参 FlowIds 的顺序可能存在不一致的情况。`
                     */
                    std::vector<FlowBrief> m_flowBriefs;
                    bool m_flowBriefsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEFLOWBRIEFSRESPONSE_H_
