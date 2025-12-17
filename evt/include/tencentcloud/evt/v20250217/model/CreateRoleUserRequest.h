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

#ifndef TENCENTCLOUD_EVT_V20250217_MODEL_CREATEROLEUSERREQUEST_H_
#define TENCENTCLOUD_EVT_V20250217_MODEL_CREATEROLEUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/evt/v20250217/model/UserAttribute.h>


namespace TencentCloud
{
    namespace Evt
    {
        namespace V20250217
        {
            namespace Model
            {
                /**
                * CreateRoleUser请求参数结构体
                */
                class CreateRoleUserRequest : public AbstractModel
                {
                public:
                    CreateRoleUserRequest();
                    ~CreateRoleUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>自定义角色体系的ID</p><p>角色体系ID</p>
                     * @return RoleSystemId <p>自定义角色体系的ID</p><p>角色体系ID</p>
                     * 
                     */
                    int64_t GetRoleSystemId() const;

                    /**
                     * 设置<p>自定义角色体系的ID</p><p>角色体系ID</p>
                     * @param _roleSystemId <p>自定义角色体系的ID</p><p>角色体系ID</p>
                     * 
                     */
                    void SetRoleSystemId(const int64_t& _roleSystemId);

                    /**
                     * 判断参数 RoleSystemId 是否已赋值
                     * @return RoleSystemId 是否已赋值
                     * 
                     */
                    bool RoleSystemIdHasBeenSet() const;

                    /**
                     * 获取<p>要添加的自定义用户ID，建议与腾讯云-子用户的用户名称保持一致</p><p>人员ID</p>
                     * @return UserId <p>要添加的自定义用户ID，建议与腾讯云-子用户的用户名称保持一致</p><p>人员ID</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>要添加的自定义用户ID，建议与腾讯云-子用户的用户名称保持一致</p><p>人员ID</p>
                     * @param _userId <p>要添加的自定义用户ID，建议与腾讯云-子用户的用户名称保持一致</p><p>人员ID</p>
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
                     * 获取<p>自定义用户的名称</p><p>人员名称</p>
                     * @return Username <p>自定义用户的名称</p><p>人员名称</p>
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置<p>自定义用户的名称</p><p>人员名称</p>
                     * @param _username <p>自定义用户的名称</p><p>人员名称</p>
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
                     * 获取<p>是否启用当前用户</p>枚举值：<ul><li> 1： 启用</li><li> 2： 禁用</li></ul><p>是否启用</p>
                     * @return Enabled <p>是否启用当前用户</p>枚举值：<ul><li> 1： 启用</li><li> 2： 禁用</li></ul><p>是否启用</p>
                     * 
                     */
                    uint64_t GetEnabled() const;

                    /**
                     * 设置<p>是否启用当前用户</p>枚举值：<ul><li> 1： 启用</li><li> 2： 禁用</li></ul><p>是否启用</p>
                     * @param _enabled <p>是否启用当前用户</p>枚举值：<ul><li> 1： 启用</li><li> 2： 禁用</li></ul><p>是否启用</p>
                     * 
                     */
                    void SetEnabled(const uint64_t& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>自定义用户的手机号</p><p>手机号</p>
                     * @return Phone <p>自定义用户的手机号</p><p>手机号</p>
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置<p>自定义用户的手机号</p><p>手机号</p>
                     * @param _phone <p>自定义用户的手机号</p><p>手机号</p>
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取<p>自定义用户的身份属性列表</p><p>属性列表</p>
                     * @return Attributes <p>自定义用户的身份属性列表</p><p>属性列表</p>
                     * 
                     */
                    std::vector<UserAttribute> GetAttributes() const;

                    /**
                     * 设置<p>自定义用户的身份属性列表</p><p>属性列表</p>
                     * @param _attributes <p>自定义用户的身份属性列表</p><p>属性列表</p>
                     * 
                     */
                    void SetAttributes(const std::vector<UserAttribute>& _attributes);

                    /**
                     * 判断参数 Attributes 是否已赋值
                     * @return Attributes 是否已赋值
                     * 
                     */
                    bool AttributesHasBeenSet() const;

                    /**
                     * 获取<p>自定义用户与腾讯云-子用户关联，如果不传默认按照子用户名称进行匹配</p>
                     * @return TencentUin <p>自定义用户与腾讯云-子用户关联，如果不传默认按照子用户名称进行匹配</p>
                     * 
                     */
                    uint64_t GetTencentUin() const;

                    /**
                     * 设置<p>自定义用户与腾讯云-子用户关联，如果不传默认按照子用户名称进行匹配</p>
                     * @param _tencentUin <p>自定义用户与腾讯云-子用户关联，如果不传默认按照子用户名称进行匹配</p>
                     * 
                     */
                    void SetTencentUin(const uint64_t& _tencentUin);

                    /**
                     * 判断参数 TencentUin 是否已赋值
                     * @return TencentUin 是否已赋值
                     * 
                     */
                    bool TencentUinHasBeenSet() const;

                private:

                    /**
                     * <p>自定义角色体系的ID</p><p>角色体系ID</p>
                     */
                    int64_t m_roleSystemId;
                    bool m_roleSystemIdHasBeenSet;

                    /**
                     * <p>要添加的自定义用户ID，建议与腾讯云-子用户的用户名称保持一致</p><p>人员ID</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>自定义用户的名称</p><p>人员名称</p>
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * <p>是否启用当前用户</p>枚举值：<ul><li> 1： 启用</li><li> 2： 禁用</li></ul><p>是否启用</p>
                     */
                    uint64_t m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>自定义用户的手机号</p><p>手机号</p>
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * <p>自定义用户的身份属性列表</p><p>属性列表</p>
                     */
                    std::vector<UserAttribute> m_attributes;
                    bool m_attributesHasBeenSet;

                    /**
                     * <p>自定义用户与腾讯云-子用户关联，如果不传默认按照子用户名称进行匹配</p>
                     */
                    uint64_t m_tencentUin;
                    bool m_tencentUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EVT_V20250217_MODEL_CREATEROLEUSERREQUEST_H_
