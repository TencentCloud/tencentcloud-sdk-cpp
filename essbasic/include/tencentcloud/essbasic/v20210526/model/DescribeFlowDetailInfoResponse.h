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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBEFLOWDETAILINFORESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBEFLOWDETAILINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/FlowDetailInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * DescribeFlowDetailInfo返回参数结构体
                */
                class DescribeFlowDetailInfoResponse : public AbstractModel
                {
                public:
                    DescribeFlowDetailInfoResponse();
                    ~DescribeFlowDetailInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取第三方平台应用号Id
                     * @return ApplicationId 第三方平台应用号Id
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取第三方平台子客企业OpenId
                     * @return ProxyOrganizationOpenId 第三方平台子客企业OpenId
                     * 
                     */
                    std::string GetProxyOrganizationOpenId() const;

                    /**
                     * 判断参数 ProxyOrganizationOpenId 是否已赋值
                     * @return ProxyOrganizationOpenId 是否已赋值
                     * 
                     */
                    bool ProxyOrganizationOpenIdHasBeenSet() const;

                    /**
                     * 获取合同(签署流程)的具体详细描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowInfo 合同(签署流程)的具体详细描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FlowDetailInfo> GetFlowInfo() const;

                    /**
                     * 判断参数 FlowInfo 是否已赋值
                     * @return FlowInfo 是否已赋值
                     * 
                     */
                    bool FlowInfoHasBeenSet() const;

                    /**
                     * 获取合同组编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowGroupId 合同组编号
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取合同组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowGroupName 合同组名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 第三方平台应用号Id
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 第三方平台子客企业OpenId
                     */
                    std::string m_proxyOrganizationOpenId;
                    bool m_proxyOrganizationOpenIdHasBeenSet;

                    /**
                     * 合同(签署流程)的具体详细描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FlowDetailInfo> m_flowInfo;
                    bool m_flowInfoHasBeenSet;

                    /**
                     * 合同组编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flowGroupId;
                    bool m_flowGroupIdHasBeenSet;

                    /**
                     * 合同组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flowGroupName;
                    bool m_flowGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBEFLOWDETAILINFORESPONSE_H_
