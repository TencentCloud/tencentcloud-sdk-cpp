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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_PROVIDERRESPONSEPARAMETERSMAP_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_PROVIDERRESPONSEPARAMETERSMAP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 三方认证出参映射。如果您的对接方不标准，则可以使用这个参数。默认情况下，该参数可以为空。比如：microsoft, github,google,apple 接入，这些参数为空，但是国内的腾讯，新浪等则需要配置该参数。原因主要是：腾讯等公司在实现oauth时，未能完全遵循oauth标准。
                */
                class ProviderResponseParametersMap : public AbstractModel
                {
                public:
                    ProviderResponseParametersMap();
                    ~ProviderResponseParametersMap() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户唯一标识（sub）的映射字段名。对应 OIDC 标准中的 sub 字段，值为第三方平台返回的用户信息 JSON 中表示用户 ID 的字段路径。例如github平台填sub。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sub 用户唯一标识（sub）的映射字段名。对应 OIDC 标准中的 sub 字段，值为第三方平台返回的用户信息 JSON 中表示用户 ID 的字段路径。例如github平台填sub。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSub() const;

                    /**
                     * 设置用户唯一标识（sub）的映射字段名。对应 OIDC 标准中的 sub 字段，值为第三方平台返回的用户信息 JSON 中表示用户 ID 的字段路径。例如github平台填sub。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sub 用户唯一标识（sub）的映射字段名。对应 OIDC 标准中的 sub 字段，值为第三方平台返回的用户信息 JSON 中表示用户 ID 的字段路径。例如github平台填sub。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSub(const std::string& _sub);

                    /**
                     * 判断参数 Sub 是否已赋值
                     * @return Sub 是否已赋值
                     * 
                     */
                    bool SubHasBeenSet() const;

                    /**
                     * 获取用户名称（name）的映射字段名。对应 OIDC 标准中的 name 字段，值为第三方平台返回的用户信息 JSON 中表示用户昵称或姓名的字段路径。例如github平台填 name。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 用户名称（name）的映射字段名。对应 OIDC 标准中的 name 字段，值为第三方平台返回的用户信息 JSON 中表示用户昵称或姓名的字段路径。例如github平台填 name。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置用户名称（name）的映射字段名。对应 OIDC 标准中的 name 字段，值为第三方平台返回的用户信息 JSON 中表示用户昵称或姓名的字段路径。例如github平台填 name。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 用户名称（name）的映射字段名。对应 OIDC 标准中的 name 字段，值为第三方平台返回的用户信息 JSON 中表示用户昵称或姓名的字段路径。例如github平台填 name。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取用户头像（picture）的映射字段名。对应 OIDC 标准中的 picture 字段，值为第三方平台返回的用户信息 JSON 中表示用户头像 URL 的字段路径。需要公网可访问的url。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Picture 用户头像（picture）的映射字段名。对应 OIDC 标准中的 picture 字段，值为第三方平台返回的用户信息 JSON 中表示用户头像 URL 的字段路径。需要公网可访问的url。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPicture() const;

                    /**
                     * 设置用户头像（picture）的映射字段名。对应 OIDC 标准中的 picture 字段，值为第三方平台返回的用户信息 JSON 中表示用户头像 URL 的字段路径。需要公网可访问的url。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _picture 用户头像（picture）的映射字段名。对应 OIDC 标准中的 picture 字段，值为第三方平台返回的用户信息 JSON 中表示用户头像 URL 的字段路径。需要公网可访问的url。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPicture(const std::string& _picture);

                    /**
                     * 判断参数 Picture 是否已赋值
                     * @return Picture 是否已赋值
                     * 
                     */
                    bool PictureHasBeenSet() const;

                    /**
                     * 获取用户登录名（username）的映射字段名。对应 OIDC 标准中的 preferred_username 字段，值为第三方平台返回的用户信息 JSON 中表示用户唯一登录名的字段, 例如可使用sub或email等唯一值的字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Username 用户登录名（username）的映射字段名。对应 OIDC 标准中的 preferred_username 字段，值为第三方平台返回的用户信息 JSON 中表示用户唯一登录名的字段, 例如可使用sub或email等唯一值的字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置用户登录名（username）的映射字段名。对应 OIDC 标准中的 preferred_username 字段，值为第三方平台返回的用户信息 JSON 中表示用户唯一登录名的字段, 例如可使用sub或email等唯一值的字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _username 用户登录名（username）的映射字段名。对应 OIDC 标准中的 preferred_username 字段，值为第三方平台返回的用户信息 JSON 中表示用户唯一登录名的字段, 例如可使用sub或email等唯一值的字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取用户邮箱（email）的映射字段名。对应 OIDC 标准中的 email 字段，值为第三方平台返回的用户信息 JSON 中表示用户邮箱地址的字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Email 用户邮箱（email）的映射字段名。对应 OIDC 标准中的 email 字段，值为第三方平台返回的用户信息 JSON 中表示用户邮箱地址的字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置用户邮箱（email）的映射字段名。对应 OIDC 标准中的 email 字段，值为第三方平台返回的用户信息 JSON 中表示用户邮箱地址的字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _email 用户邮箱（email）的映射字段名。对应 OIDC 标准中的 email 字段，值为第三方平台返回的用户信息 JSON 中表示用户邮箱地址的字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取用户手机号（phone_number）的映射字段名。对应 OIDC 标准中的 phone_number 字段，值为第三方平台返回的用户信息 JSON 中表示用户手机号的字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhoneNumber 用户手机号（phone_number）的映射字段名。对应 OIDC 标准中的 phone_number 字段，值为第三方平台返回的用户信息 JSON 中表示用户手机号的字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置用户手机号（phone_number）的映射字段名。对应 OIDC 标准中的 phone_number 字段，值为第三方平台返回的用户信息 JSON 中表示用户手机号的字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phoneNumber 用户手机号（phone_number）的映射字段名。对应 OIDC 标准中的 phone_number 字段，值为第三方平台返回的用户信息 JSON 中表示用户手机号的字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPhoneNumber(const std::string& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     * 
                     */
                    bool PhoneNumberHasBeenSet() const;

                    /**
                     * 获取用户角色/分组（groups）的映射字段名。对应 OIDC 标准中的 groups 字段，值为第三方平台返回的用户信息 JSON 中表示用户所属角色或分组的字段路径。支持字符串数组类型的返回值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Groups 用户角色/分组（groups）的映射字段名。对应 OIDC 标准中的 groups 字段，值为第三方平台返回的用户信息 JSON 中表示用户所属角色或分组的字段路径。支持字符串数组类型的返回值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroups() const;

                    /**
                     * 设置用户角色/分组（groups）的映射字段名。对应 OIDC 标准中的 groups 字段，值为第三方平台返回的用户信息 JSON 中表示用户所属角色或分组的字段路径。支持字符串数组类型的返回值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groups 用户角色/分组（groups）的映射字段名。对应 OIDC 标准中的 groups 字段，值为第三方平台返回的用户信息 JSON 中表示用户所属角色或分组的字段路径。支持字符串数组类型的返回值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroups(const std::string& _groups);

                    /**
                     * 判断参数 Groups 是否已赋值
                     * @return Groups 是否已赋值
                     * 
                     */
                    bool GroupsHasBeenSet() const;

                private:

                    /**
                     * 用户唯一标识（sub）的映射字段名。对应 OIDC 标准中的 sub 字段，值为第三方平台返回的用户信息 JSON 中表示用户 ID 的字段路径。例如github平台填sub。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sub;
                    bool m_subHasBeenSet;

                    /**
                     * 用户名称（name）的映射字段名。对应 OIDC 标准中的 name 字段，值为第三方平台返回的用户信息 JSON 中表示用户昵称或姓名的字段路径。例如github平台填 name。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 用户头像（picture）的映射字段名。对应 OIDC 标准中的 picture 字段，值为第三方平台返回的用户信息 JSON 中表示用户头像 URL 的字段路径。需要公网可访问的url。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_picture;
                    bool m_pictureHasBeenSet;

                    /**
                     * 用户登录名（username）的映射字段名。对应 OIDC 标准中的 preferred_username 字段，值为第三方平台返回的用户信息 JSON 中表示用户唯一登录名的字段, 例如可使用sub或email等唯一值的字段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 用户邮箱（email）的映射字段名。对应 OIDC 标准中的 email 字段，值为第三方平台返回的用户信息 JSON 中表示用户邮箱地址的字段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 用户手机号（phone_number）的映射字段名。对应 OIDC 标准中的 phone_number 字段，值为第三方平台返回的用户信息 JSON 中表示用户手机号的字段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * 用户角色/分组（groups）的映射字段名。对应 OIDC 标准中的 groups 字段，值为第三方平台返回的用户信息 JSON 中表示用户所属角色或分组的字段路径。支持字符串数组类型的返回值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groups;
                    bool m_groupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_PROVIDERRESPONSEPARAMETERSMAP_H_
