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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEVPCFWCCNPOLICYWHITELISTRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEVPCFWCCNPOLICYWHITELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeVpcFwCcnPolicyWhiteList返回参数结构体
                */
                class DescribeVpcFwCcnPolicyWhiteListResponse : public AbstractModel
                {
                public:
                    DescribeVpcFwCcnPolicyWhiteListResponse();
                    ~DescribeVpcFwCcnPolicyWhiteListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取支持自动接入和策略路由的CCN列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportCcnPolicy 支持自动接入和策略路由的CCN列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSupportCcnPolicy() const;

                    /**
                     * 判断参数 SupportCcnPolicy 是否已赋值
                     * @return SupportCcnPolicy 是否已赋值
                     * 
                     */
                    bool SupportCcnPolicyHasBeenSet() const;

                    /**
                     * 获取自动接入中支持自定义cidr的CCN列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportCcnPolicyCidr 自动接入中支持自定义cidr的CCN列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSupportCcnPolicyCidr() const;

                    /**
                     * 判断参数 SupportCcnPolicyCidr 是否已赋值
                     * @return SupportCcnPolicyCidr 是否已赋值
                     * 
                     */
                    bool SupportCcnPolicyCidrHasBeenSet() const;

                private:

                    /**
                     * 支持自动接入和策略路由的CCN列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_supportCcnPolicy;
                    bool m_supportCcnPolicyHasBeenSet;

                    /**
                     * 自动接入中支持自定义cidr的CCN列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_supportCcnPolicyCidr;
                    bool m_supportCcnPolicyCidrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEVPCFWCCNPOLICYWHITELISTRESPONSE_H_
