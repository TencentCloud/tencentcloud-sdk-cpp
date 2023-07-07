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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYSERVICEACCOUNTREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYSERVICEACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/Permission.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * ModifyServiceAccount请求参数结构体
                */
                class ModifyServiceAccountRequest : public AbstractModel
                {
                public:
                    ModifyServiceAccountRequest();
                    ~ModifyServiceAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例Id
                     * @return RegistryId 实例Id
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置实例Id
                     * @param _registryId 实例Id
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取服务级账号名
                     * @return Name 服务级账号名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置服务级账号名
                     * @param _name 服务级账号名
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
                     * 获取服务级账号描述
                     * @return Description 服务级账号描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置服务级账号描述
                     * @param _description 服务级账号描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取有效期(单位：天)，从当前时间开始计算，优先级高于ExpiresAt
                     * @return Duration 有效期(单位：天)，从当前时间开始计算，优先级高于ExpiresAt
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置有效期(单位：天)，从当前时间开始计算，优先级高于ExpiresAt
                     * @param _duration 有效期(单位：天)，从当前时间开始计算，优先级高于ExpiresAt
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取过期时间（时间戳，单位:毫秒）
                     * @return ExpiresAt 过期时间（时间戳，单位:毫秒）
                     * 
                     */
                    int64_t GetExpiresAt() const;

                    /**
                     * 设置过期时间（时间戳，单位:毫秒）
                     * @param _expiresAt 过期时间（时间戳，单位:毫秒）
                     * 
                     */
                    void SetExpiresAt(const int64_t& _expiresAt);

                    /**
                     * 判断参数 ExpiresAt 是否已赋值
                     * @return ExpiresAt 是否已赋值
                     * 
                     */
                    bool ExpiresAtHasBeenSet() const;

                    /**
                     * 获取是否禁用服务级账号
                     * @return Disable 是否禁用服务级账号
                     * 
                     */
                    bool GetDisable() const;

                    /**
                     * 设置是否禁用服务级账号
                     * @param _disable 是否禁用服务级账号
                     * 
                     */
                    void SetDisable(const bool& _disable);

                    /**
                     * 判断参数 Disable 是否已赋值
                     * @return Disable 是否已赋值
                     * 
                     */
                    bool DisableHasBeenSet() const;

                    /**
                     * 获取策略列表
                     * @return Permissions 策略列表
                     * 
                     */
                    std::vector<Permission> GetPermissions() const;

                    /**
                     * 设置策略列表
                     * @param _permissions 策略列表
                     * 
                     */
                    void SetPermissions(const std::vector<Permission>& _permissions);

                    /**
                     * 判断参数 Permissions 是否已赋值
                     * @return Permissions 是否已赋值
                     * 
                     */
                    bool PermissionsHasBeenSet() const;

                private:

                    /**
                     * 实例Id
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 服务级账号名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 服务级账号描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 有效期(单位：天)，从当前时间开始计算，优先级高于ExpiresAt
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 过期时间（时间戳，单位:毫秒）
                     */
                    int64_t m_expiresAt;
                    bool m_expiresAtHasBeenSet;

                    /**
                     * 是否禁用服务级账号
                     */
                    bool m_disable;
                    bool m_disableHasBeenSet;

                    /**
                     * 策略列表
                     */
                    std::vector<Permission> m_permissions;
                    bool m_permissionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYSERVICEACCOUNTREQUEST_H_
