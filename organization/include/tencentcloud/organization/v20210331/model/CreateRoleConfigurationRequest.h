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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEROLECONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEROLECONFIGURATIONREQUEST_H_

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
                * CreateRoleConfiguration请求参数结构体
                */
                class CreateRoleConfigurationRequest : public AbstractModel
                {
                public:
                    CreateRoleConfigurationRequest();
                    ~CreateRoleConfigurationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取空间 ID。
                     * @return ZoneId 空间 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置空间 ID。
                     * @param _zoneId 空间 ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取权限配置名称。格式：包含英文字母、数字或短划线（-）。 长度：最大 128 个字符。
                     * @return RoleConfigurationName 权限配置名称。格式：包含英文字母、数字或短划线（-）。 长度：最大 128 个字符。
                     * 
                     */
                    std::string GetRoleConfigurationName() const;

                    /**
                     * 设置权限配置名称。格式：包含英文字母、数字或短划线（-）。 长度：最大 128 个字符。
                     * @param _roleConfigurationName 权限配置名称。格式：包含英文字母、数字或短划线（-）。 长度：最大 128 个字符。
                     * 
                     */
                    void SetRoleConfigurationName(const std::string& _roleConfigurationName);

                    /**
                     * 判断参数 RoleConfigurationName 是否已赋值
                     * @return RoleConfigurationName 是否已赋值
                     * 
                     */
                    bool RoleConfigurationNameHasBeenSet() const;

                    /**
                     * 获取权限配置的描述。 长度：最大 1024 个字符。
                     * @return Description 权限配置的描述。 长度：最大 1024 个字符。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置权限配置的描述。 长度：最大 1024 个字符。
                     * @param _description 权限配置的描述。 长度：最大 1024 个字符。
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
                     * 获取会话持续时间。 CIC用户使用权限配置访问集团账号目标账号时，会话最多保持的时间。 单位：秒。 取值范围：900 ~ 43200（15 分钟~12 小时）。 默认值：3600（1 小时）。
                     * @return SessionDuration 会话持续时间。 CIC用户使用权限配置访问集团账号目标账号时，会话最多保持的时间。 单位：秒。 取值范围：900 ~ 43200（15 分钟~12 小时）。 默认值：3600（1 小时）。
                     * 
                     */
                    int64_t GetSessionDuration() const;

                    /**
                     * 设置会话持续时间。 CIC用户使用权限配置访问集团账号目标账号时，会话最多保持的时间。 单位：秒。 取值范围：900 ~ 43200（15 分钟~12 小时）。 默认值：3600（1 小时）。
                     * @param _sessionDuration 会话持续时间。 CIC用户使用权限配置访问集团账号目标账号时，会话最多保持的时间。 单位：秒。 取值范围：900 ~ 43200（15 分钟~12 小时）。 默认值：3600（1 小时）。
                     * 
                     */
                    void SetSessionDuration(const int64_t& _sessionDuration);

                    /**
                     * 判断参数 SessionDuration 是否已赋值
                     * @return SessionDuration 是否已赋值
                     * 
                     */
                    bool SessionDurationHasBeenSet() const;

                    /**
                     * 获取初始访问页面。 CIC用户使用权限配置访问集团账号目标账号时，初始访问的页面地址。 该页面必须是腾讯云控制台页面。默认为空，表示跳转到腾讯云控制台首页。
                     * @return RelayState 初始访问页面。 CIC用户使用权限配置访问集团账号目标账号时，初始访问的页面地址。 该页面必须是腾讯云控制台页面。默认为空，表示跳转到腾讯云控制台首页。
                     * 
                     */
                    std::string GetRelayState() const;

                    /**
                     * 设置初始访问页面。 CIC用户使用权限配置访问集团账号目标账号时，初始访问的页面地址。 该页面必须是腾讯云控制台页面。默认为空，表示跳转到腾讯云控制台首页。
                     * @param _relayState 初始访问页面。 CIC用户使用权限配置访问集团账号目标账号时，初始访问的页面地址。 该页面必须是腾讯云控制台页面。默认为空，表示跳转到腾讯云控制台首页。
                     * 
                     */
                    void SetRelayState(const std::string& _relayState);

                    /**
                     * 判断参数 RelayState 是否已赋值
                     * @return RelayState 是否已赋值
                     * 
                     */
                    bool RelayStateHasBeenSet() const;

                private:

                    /**
                     * 空间 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 权限配置名称。格式：包含英文字母、数字或短划线（-）。 长度：最大 128 个字符。
                     */
                    std::string m_roleConfigurationName;
                    bool m_roleConfigurationNameHasBeenSet;

                    /**
                     * 权限配置的描述。 长度：最大 1024 个字符。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 会话持续时间。 CIC用户使用权限配置访问集团账号目标账号时，会话最多保持的时间。 单位：秒。 取值范围：900 ~ 43200（15 分钟~12 小时）。 默认值：3600（1 小时）。
                     */
                    int64_t m_sessionDuration;
                    bool m_sessionDurationHasBeenSet;

                    /**
                     * 初始访问页面。 CIC用户使用权限配置访问集团账号目标账号时，初始访问的页面地址。 该页面必须是腾讯云控制台页面。默认为空，表示跳转到腾讯云控制台首页。
                     */
                    std::string m_relayState;
                    bool m_relayStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEROLECONFIGURATIONREQUEST_H_
