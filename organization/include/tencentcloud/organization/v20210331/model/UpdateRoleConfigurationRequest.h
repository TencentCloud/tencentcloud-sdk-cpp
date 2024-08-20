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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEROLECONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEROLECONFIGURATIONREQUEST_H_

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
                * UpdateRoleConfiguration请求参数结构体
                */
                class UpdateRoleConfigurationRequest : public AbstractModel
                {
                public:
                    UpdateRoleConfigurationRequest();
                    ~UpdateRoleConfigurationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取空间 ID
                     * @return ZoneId 空间 ID
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置空间 ID
                     * @param _zoneId 空间 ID
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
                     * 获取权限配置 ID
                     * @return RoleConfigurationId 权限配置 ID
                     * 
                     */
                    std::string GetRoleConfigurationId() const;

                    /**
                     * 设置权限配置 ID
                     * @param _roleConfigurationId 权限配置 ID
                     * 
                     */
                    void SetRoleConfigurationId(const std::string& _roleConfigurationId);

                    /**
                     * 判断参数 RoleConfigurationId 是否已赋值
                     * @return RoleConfigurationId 是否已赋值
                     * 
                     */
                    bool RoleConfigurationIdHasBeenSet() const;

                    /**
                     * 获取新的权限配置描述。  长度：最大 1024 个字符。
                     * @return NewDescription 新的权限配置描述。  长度：最大 1024 个字符。
                     * 
                     */
                    std::string GetNewDescription() const;

                    /**
                     * 设置新的权限配置描述。  长度：最大 1024 个字符。
                     * @param _newDescription 新的权限配置描述。  长度：最大 1024 个字符。
                     * 
                     */
                    void SetNewDescription(const std::string& _newDescription);

                    /**
                     * 判断参数 NewDescription 是否已赋值
                     * @return NewDescription 是否已赋值
                     * 
                     */
                    bool NewDescriptionHasBeenSet() const;

                    /**
                     * 获取新的会话持续时间。  CIC 用户使用权限配置访问集团账号目标账号时，会话最多保持的时间。  单位：秒。  取值范围：900-43200（15 分钟-12 小时）。
                     * @return NewSessionDuration 新的会话持续时间。  CIC 用户使用权限配置访问集团账号目标账号时，会话最多保持的时间。  单位：秒。  取值范围：900-43200（15 分钟-12 小时）。
                     * 
                     */
                    int64_t GetNewSessionDuration() const;

                    /**
                     * 设置新的会话持续时间。  CIC 用户使用权限配置访问集团账号目标账号时，会话最多保持的时间。  单位：秒。  取值范围：900-43200（15 分钟-12 小时）。
                     * @param _newSessionDuration 新的会话持续时间。  CIC 用户使用权限配置访问集团账号目标账号时，会话最多保持的时间。  单位：秒。  取值范围：900-43200（15 分钟-12 小时）。
                     * 
                     */
                    void SetNewSessionDuration(const int64_t& _newSessionDuration);

                    /**
                     * 判断参数 NewSessionDuration 是否已赋值
                     * @return NewSessionDuration 是否已赋值
                     * 
                     */
                    bool NewSessionDurationHasBeenSet() const;

                    /**
                     * 获取新的初始访问页面。  CIC 用户使用权限配置访问集团账号目标账号时，初始访问的页面地址。  该页面必须是腾讯云控制台页面。
                     * @return NewRelayState 新的初始访问页面。  CIC 用户使用权限配置访问集团账号目标账号时，初始访问的页面地址。  该页面必须是腾讯云控制台页面。
                     * 
                     */
                    std::string GetNewRelayState() const;

                    /**
                     * 设置新的初始访问页面。  CIC 用户使用权限配置访问集团账号目标账号时，初始访问的页面地址。  该页面必须是腾讯云控制台页面。
                     * @param _newRelayState 新的初始访问页面。  CIC 用户使用权限配置访问集团账号目标账号时，初始访问的页面地址。  该页面必须是腾讯云控制台页面。
                     * 
                     */
                    void SetNewRelayState(const std::string& _newRelayState);

                    /**
                     * 判断参数 NewRelayState 是否已赋值
                     * @return NewRelayState 是否已赋值
                     * 
                     */
                    bool NewRelayStateHasBeenSet() const;

                private:

                    /**
                     * 空间 ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 权限配置 ID
                     */
                    std::string m_roleConfigurationId;
                    bool m_roleConfigurationIdHasBeenSet;

                    /**
                     * 新的权限配置描述。  长度：最大 1024 个字符。
                     */
                    std::string m_newDescription;
                    bool m_newDescriptionHasBeenSet;

                    /**
                     * 新的会话持续时间。  CIC 用户使用权限配置访问集团账号目标账号时，会话最多保持的时间。  单位：秒。  取值范围：900-43200（15 分钟-12 小时）。
                     */
                    int64_t m_newSessionDuration;
                    bool m_newSessionDurationHasBeenSet;

                    /**
                     * 新的初始访问页面。  CIC 用户使用权限配置访问集团账号目标账号时，初始访问的页面地址。  该页面必须是腾讯云控制台页面。
                     */
                    std::string m_newRelayState;
                    bool m_newRelayStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEROLECONFIGURATIONREQUEST_H_
