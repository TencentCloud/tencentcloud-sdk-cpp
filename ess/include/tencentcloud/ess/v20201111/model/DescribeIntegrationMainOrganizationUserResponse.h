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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEINTEGRATIONMAINORGANIZATIONUSERRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEINTEGRATIONMAINORGANIZATIONUSERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/IntegrationMainOrganizationUser.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeIntegrationMainOrganizationUser返回参数结构体
                */
                class DescribeIntegrationMainOrganizationUserResponse : public AbstractModel
                {
                public:
                    DescribeIntegrationMainOrganizationUserResponse();
                    ~DescribeIntegrationMainOrganizationUserResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取主企业员工账号信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntegrationMainOrganizationUser 主企业员工账号信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IntegrationMainOrganizationUser GetIntegrationMainOrganizationUser() const;

                    /**
                     * 判断参数 IntegrationMainOrganizationUser 是否已赋值
                     * @return IntegrationMainOrganizationUser 是否已赋值
                     */
                    bool IntegrationMainOrganizationUserHasBeenSet() const;

                private:

                    /**
                     * 主企业员工账号信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IntegrationMainOrganizationUser m_integrationMainOrganizationUser;
                    bool m_integrationMainOrganizationUserHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEINTEGRATIONMAINORGANIZATIONUSERRESPONSE_H_
