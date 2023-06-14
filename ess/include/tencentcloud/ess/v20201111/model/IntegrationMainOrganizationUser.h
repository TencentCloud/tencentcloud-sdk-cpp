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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_INTEGRATIONMAINORGANIZATIONUSER_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_INTEGRATIONMAINORGANIZATIONUSER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 主企业员工账号信息
                */
                class IntegrationMainOrganizationUser : public AbstractModel
                {
                public:
                    IntegrationMainOrganizationUser();
                    ~IntegrationMainOrganizationUser() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主企业id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MainOrganizationId 主企业id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMainOrganizationId() const;

                    /**
                     * 设置主企业id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mainOrganizationId 主企业id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMainOrganizationId(const std::string& _mainOrganizationId);

                    /**
                     * 判断参数 MainOrganizationId 是否已赋值
                     * @return MainOrganizationId 是否已赋值
                     * 
                     */
                    bool MainOrganizationIdHasBeenSet() const;

                    /**
                     * 获取主企业员工UserId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MainUserId 主企业员工UserId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMainUserId() const;

                    /**
                     * 设置主企业员工UserId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mainUserId 主企业员工UserId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMainUserId(const std::string& _mainUserId);

                    /**
                     * 判断参数 MainUserId 是否已赋值
                     * @return MainUserId 是否已赋值
                     * 
                     */
                    bool MainUserIdHasBeenSet() const;

                    /**
                     * 获取主企业员工名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName 主企业员工名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置主企业员工名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userName 主企业员工名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                private:

                    /**
                     * 主企业id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mainOrganizationId;
                    bool m_mainOrganizationIdHasBeenSet;

                    /**
                     * 主企业员工UserId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mainUserId;
                    bool m_mainUserIdHasBeenSet;

                    /**
                     * 主企业员工名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_INTEGRATIONMAINORGANIZATIONUSER_H_
