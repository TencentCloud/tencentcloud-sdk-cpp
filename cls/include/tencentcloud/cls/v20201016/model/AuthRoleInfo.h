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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_AUTHROLEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_AUTHROLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * dataSight 第三方验证登录角色配置信息
                */
                class AuthRoleInfo : public AbstractModel
                {
                public:
                    AuthRoleInfo();
                    ~AuthRoleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Auth角色名称</p>
                     * @return RoleName <p>Auth角色名称</p>
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置<p>Auth角色名称</p>
                     * @param _roleName <p>Auth角色名称</p>
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取<p>Auth角色对应权限SecretId</p>
                     * @return SecretId <p>Auth角色对应权限SecretId</p>
                     * 
                     */
                    std::string GetSecretId() const;

                    /**
                     * 设置<p>Auth角色对应权限SecretId</p>
                     * @param _secretId <p>Auth角色对应权限SecretId</p>
                     * 
                     */
                    void SetSecretId(const std::string& _secretId);

                    /**
                     * 判断参数 SecretId 是否已赋值
                     * @return SecretId 是否已赋值
                     * 
                     */
                    bool SecretIdHasBeenSet() const;

                    /**
                     * 获取<p>Auth角色对应权限SecretKey</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecretKey <p>Auth角色对应权限SecretKey</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置<p>Auth角色对应权限SecretKey</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secretKey <p>Auth角色对应权限SecretKey</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                private:

                    /**
                     * <p>Auth角色名称</p>
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * <p>Auth角色对应权限SecretId</p>
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * <p>Auth角色对应权限SecretKey</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_AUTHROLEINFO_H_
