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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DUTYPERSON_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DUTYPERSON_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 值班人员
                */
                class DutyPerson : public AbstractModel
                {
                public:
                    DutyPerson();
                    ~DutyPerson() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取值班人子账号id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserId 值班人子账号id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置值班人子账号id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userId 值班人子账号id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取值班人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName 值班人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置值班人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userName 值班人名称
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

                    /**
                     * 获取值班人员主账号用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUserId 值班人员主账号用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerUserId() const;

                    /**
                     * 设置值班人员主账号用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUserId 值班人员主账号用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerUserId(const std::string& _ownerUserId);

                    /**
                     * 判断参数 OwnerUserId 是否已赋值
                     * @return OwnerUserId 是否已赋值
                     * 
                     */
                    bool OwnerUserIdHasBeenSet() const;

                    /**
                     * 获取值班人tenantId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TenantId 值班人tenantId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTenantId() const;

                    /**
                     * 设置值班人tenantId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tenantId 值班人tenantId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTenantId(const int64_t& _tenantId);

                    /**
                     * 判断参数 TenantId 是否已赋值
                     * @return TenantId 是否已赋值
                     * 
                     */
                    bool TenantIdHasBeenSet() const;

                    /**
                     * 获取2023-11-02 08:00:00
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddTime 2023-11-02 08:00:00
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置2023-11-02 08:00:00
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _addTime 2023-11-02 08:00:00
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取扩展字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Params 扩展字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置扩展字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _params 扩展字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParams(const std::string& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                private:

                    /**
                     * 值班人子账号id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 值班人名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 值班人员主账号用户id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerUserId;
                    bool m_ownerUserIdHasBeenSet;

                    /**
                     * 值班人tenantId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * 2023-11-02 08:00:00
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * 扩展字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DUTYPERSON_H_
