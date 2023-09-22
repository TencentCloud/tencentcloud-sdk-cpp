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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEFLOWINFORESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEFLOWINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/FlowDetailInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeFlowInfo返回参数结构体
                */
                class DescribeFlowInfoResponse : public AbstractModel
                {
                public:
                    DescribeFlowInfoResponse();
                    ~DescribeFlowInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取合同流程的详细信息。
如果查询的是合同组信息，则返回的是组内所有子合同流程的详细信息。
                     * @return FlowDetailInfos 合同流程的详细信息。
如果查询的是合同组信息，则返回的是组内所有子合同流程的详细信息。
                     * 
                     */
                    std::vector<FlowDetailInfo> GetFlowDetailInfos() const;

                    /**
                     * 判断参数 FlowDetailInfos 是否已赋值
                     * @return FlowDetailInfos 是否已赋值
                     * 
                     */
                    bool FlowDetailInfosHasBeenSet() const;

                    /**
                     * 获取合同组ID，只有在查询合同组信息时才会返回。
                     * @return FlowGroupId 合同组ID，只有在查询合同组信息时才会返回。
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
                     * 获取合同组名称，只有在查询合同组信息时才会返回。
                     * @return FlowGroupName 合同组名称，只有在查询合同组信息时才会返回。
                     * 
                     */
                    std::string GetFlowGroupName() const;

                    /**
                     * 判断参数 FlowGroupName 是否已赋值
                     * @return FlowGroupName 是否已赋值
                     * 
                     */
                    bool FlowGroupNameHasBeenSet() const;

                private:

                    /**
                     * 合同流程的详细信息。
如果查询的是合同组信息，则返回的是组内所有子合同流程的详细信息。
                     */
                    std::vector<FlowDetailInfo> m_flowDetailInfos;
                    bool m_flowDetailInfosHasBeenSet;

                    /**
                     * 合同组ID，只有在查询合同组信息时才会返回。
                     */
                    std::string m_flowGroupId;
                    bool m_flowGroupIdHasBeenSet;

                    /**
                     * 合同组名称，只有在查询合同组信息时才会返回。
                     */
                    std::string m_flowGroupName;
                    bool m_flowGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEFLOWINFORESPONSE_H_
