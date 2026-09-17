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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_MODIFYROLEEVENT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_MODIFYROLEEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/User.h>
#include <tencentcloud/rce/v20260130/model/Role.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 编辑角色资料事件详情
                */
                class ModifyRoleEvent : public AbstractModel
                {
                public:
                    ModifyRoleEvent();
                    ~ModifyRoleEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>修改后的角色名，允许空串</p>
                     * @return RoleNameAfter <p>修改后的角色名，允许空串</p>
                     * 
                     */
                    std::string GetRoleNameAfter() const;

                    /**
                     * 设置<p>修改后的角色名，允许空串</p>
                     * @param _roleNameAfter <p>修改后的角色名，允许空串</p>
                     * 
                     */
                    void SetRoleNameAfter(const std::string& _roleNameAfter);

                    /**
                     * 判断参数 RoleNameAfter 是否已赋值
                     * @return RoleNameAfter 是否已赋值
                     * 
                     */
                    bool RoleNameAfterHasBeenSet() const;

                    /**
                     * 获取<p>修改后的签名档，允许空串</p>
                     * @return RoleSignatureAfter <p>修改后的签名档，允许空串</p>
                     * 
                     */
                    std::string GetRoleSignatureAfter() const;

                    /**
                     * 设置<p>修改后的签名档，允许空串</p>
                     * @param _roleSignatureAfter <p>修改后的签名档，允许空串</p>
                     * 
                     */
                    void SetRoleSignatureAfter(const std::string& _roleSignatureAfter);

                    /**
                     * 判断参数 RoleSignatureAfter 是否已赋值
                     * @return RoleSignatureAfter 是否已赋值
                     * 
                     */
                    bool RoleSignatureAfterHasBeenSet() const;

                    /**
                     * 获取<p>所属服务器ID，允许空串</p>
                     * @return ServerId <p>所属服务器ID，允许空串</p>
                     * 
                     */
                    std::string GetServerId() const;

                    /**
                     * 设置<p>所属服务器ID，允许空串</p>
                     * @param _serverId <p>所属服务器ID，允许空串</p>
                     * 
                     */
                    void SetServerId(const std::string& _serverId);

                    /**
                     * 判断参数 ServerId 是否已赋值
                     * @return ServerId 是否已赋值
                     * 
                     */
                    bool ServerIdHasBeenSet() const;

                    /**
                     * 获取<p>编辑者账号信息</p>
                     * @return UserInfo <p>编辑者账号信息</p>
                     * 
                     */
                    User GetUserInfo() const;

                    /**
                     * 设置<p>编辑者账号信息</p>
                     * @param _userInfo <p>编辑者账号信息</p>
                     * 
                     */
                    void SetUserInfo(const User& _userInfo);

                    /**
                     * 判断参数 UserInfo 是否已赋值
                     * @return UserInfo 是否已赋值
                     * 
                     */
                    bool UserInfoHasBeenSet() const;

                    /**
                     * 获取<p>角色信息</p>
                     * @return RoleInfo <p>角色信息</p>
                     * 
                     */
                    Role GetRoleInfo() const;

                    /**
                     * 设置<p>角色信息</p>
                     * @param _roleInfo <p>角色信息</p>
                     * 
                     */
                    void SetRoleInfo(const Role& _roleInfo);

                    /**
                     * 判断参数 RoleInfo 是否已赋值
                     * @return RoleInfo 是否已赋值
                     * 
                     */
                    bool RoleInfoHasBeenSet() const;

                private:

                    /**
                     * <p>修改后的角色名，允许空串</p>
                     */
                    std::string m_roleNameAfter;
                    bool m_roleNameAfterHasBeenSet;

                    /**
                     * <p>修改后的签名档，允许空串</p>
                     */
                    std::string m_roleSignatureAfter;
                    bool m_roleSignatureAfterHasBeenSet;

                    /**
                     * <p>所属服务器ID，允许空串</p>
                     */
                    std::string m_serverId;
                    bool m_serverIdHasBeenSet;

                    /**
                     * <p>编辑者账号信息</p>
                     */
                    User m_userInfo;
                    bool m_userInfoHasBeenSet;

                    /**
                     * <p>角色信息</p>
                     */
                    Role m_roleInfo;
                    bool m_roleInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_MODIFYROLEEVENT_H_
