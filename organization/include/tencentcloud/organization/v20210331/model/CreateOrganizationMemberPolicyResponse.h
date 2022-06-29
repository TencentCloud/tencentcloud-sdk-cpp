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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEORGANIZATIONMEMBERPOLICYRESPONSE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEORGANIZATIONMEMBERPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * CreateOrganizationMemberPolicy返回参数结构体
                */
                class CreateOrganizationMemberPolicyResponse : public AbstractModel
                {
                public:
                    CreateOrganizationMemberPolicyResponse();
                    ~CreateOrganizationMemberPolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取策略ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyId 策略ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                private:

                    /**
                     * 策略ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEORGANIZATIONMEMBERPOLICYRESPONSE_H_
