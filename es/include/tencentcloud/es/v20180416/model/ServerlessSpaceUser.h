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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_SERVERLESSSPACEUSER_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_SERVERLESSSPACEUSER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * ServerlessSpaceUser
                */
                class ServerlessSpaceUser : public AbstractModel
                {
                public:
                    ServerlessSpaceUser();
                    ~ServerlessSpaceUser() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Username 用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _username 用户名
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
                     * 获取用户密码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Password 用户密码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置用户密码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _password 用户密码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取用户状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 用户状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置用户状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 用户状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取有权限的索引数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndicesScope 有权限的索引数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetIndicesScope() const;

                    /**
                     * 设置有权限的索引数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indicesScope 有权限的索引数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndicesScope(const std::vector<std::string>& _indicesScope);

                    /**
                     * 判断参数 IndicesScope 是否已赋值
                     * @return IndicesScope 是否已赋值
                     * 
                     */
                    bool IndicesScopeHasBeenSet() const;

                    /**
                     * 获取权限类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivilegeType 权限类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPrivilegeType() const;

                    /**
                     * 设置权限类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privilegeType 权限类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivilegeType(const int64_t& _privilegeType);

                    /**
                     * 判断参数 PrivilegeType 是否已赋值
                     * @return PrivilegeType 是否已赋值
                     * 
                     */
                    bool PrivilegeTypeHasBeenSet() const;

                private:

                    /**
                     * 用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 用户密码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 用户状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 有权限的索引数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_indicesScope;
                    bool m_indicesScopeHasBeenSet;

                    /**
                     * 权限类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_privilegeType;
                    bool m_privilegeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_SERVERLESSSPACEUSER_H_
