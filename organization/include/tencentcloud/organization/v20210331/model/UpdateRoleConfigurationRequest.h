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
                     * 获取<p>空间 ID</p>
                     * @return ZoneId <p>空间 ID</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>空间 ID</p>
                     * @param _zoneId <p>空间 ID</p>
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
                     * 获取<p>权限配置 ID</p>
                     * @return RoleConfigurationId <p>权限配置 ID</p>
                     * 
                     */
                    std::string GetRoleConfigurationId() const;

                    /**
                     * 设置<p>权限配置 ID</p>
                     * @param _roleConfigurationId <p>权限配置 ID</p>
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
                     * 获取<p>新的权限配置描述。  长度：最大 1024 个字符。</p>
                     * @return NewDescription <p>新的权限配置描述。  长度：最大 1024 个字符。</p>
                     * 
                     */
                    std::string GetNewDescription() const;

                    /**
                     * 设置<p>新的权限配置描述。  长度：最大 1024 个字符。</p>
                     * @param _newDescription <p>新的权限配置描述。  长度：最大 1024 个字符。</p>
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
                     * 获取<p>新的会话持续时间。  CIC 用户使用权限配置访问集团账号目标账号时，会话最多保持的时间。  单位：秒。  取值范围：900-43200（15 分钟-12 小时）。</p>
                     * @return NewSessionDuration <p>新的会话持续时间。  CIC 用户使用权限配置访问集团账号目标账号时，会话最多保持的时间。  单位：秒。  取值范围：900-43200（15 分钟-12 小时）。</p>
                     * 
                     */
                    int64_t GetNewSessionDuration() const;

                    /**
                     * 设置<p>新的会话持续时间。  CIC 用户使用权限配置访问集团账号目标账号时，会话最多保持的时间。  单位：秒。  取值范围：900-43200（15 分钟-12 小时）。</p>
                     * @param _newSessionDuration <p>新的会话持续时间。  CIC 用户使用权限配置访问集团账号目标账号时，会话最多保持的时间。  单位：秒。  取值范围：900-43200（15 分钟-12 小时）。</p>
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
                     * 获取<p>新的初始访问页面。  CIC 用户使用权限配置访问集团账号目标账号时，初始访问的页面地址。  该页面必须是腾讯云控制台页面。</p>
                     * @return NewRelayState <p>新的初始访问页面。  CIC 用户使用权限配置访问集团账号目标账号时，初始访问的页面地址。  该页面必须是腾讯云控制台页面。</p>
                     * 
                     */
                    std::string GetNewRelayState() const;

                    /**
                     * 设置<p>新的初始访问页面。  CIC 用户使用权限配置访问集团账号目标账号时，初始访问的页面地址。  该页面必须是腾讯云控制台页面。</p>
                     * @param _newRelayState <p>新的初始访问页面。  CIC 用户使用权限配置访问集团账号目标账号时，初始访问的页面地址。  该页面必须是腾讯云控制台页面。</p>
                     * 
                     */
                    void SetNewRelayState(const std::string& _newRelayState);

                    /**
                     * 判断参数 NewRelayState 是否已赋值
                     * @return NewRelayState 是否已赋值
                     * 
                     */
                    bool NewRelayStateHasBeenSet() const;

                    /**
                     * 获取<p>true=保存并应用（立即下发）；false/缺省=仅保存</p>
                     * @return IsApply <p>true=保存并应用（立即下发）；false/缺省=仅保存</p>
                     * 
                     */
                    bool GetIsApply() const;

                    /**
                     * 设置<p>true=保存并应用（立即下发）；false/缺省=仅保存</p>
                     * @param _isApply <p>true=保存并应用（立即下发）；false/缺省=仅保存</p>
                     * 
                     */
                    void SetIsApply(const bool& _isApply);

                    /**
                     * 判断参数 IsApply 是否已赋值
                     * @return IsApply 是否已赋值
                     * 
                     */
                    bool IsApplyHasBeenSet() const;

                private:

                    /**
                     * <p>空间 ID</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>权限配置 ID</p>
                     */
                    std::string m_roleConfigurationId;
                    bool m_roleConfigurationIdHasBeenSet;

                    /**
                     * <p>新的权限配置描述。  长度：最大 1024 个字符。</p>
                     */
                    std::string m_newDescription;
                    bool m_newDescriptionHasBeenSet;

                    /**
                     * <p>新的会话持续时间。  CIC 用户使用权限配置访问集团账号目标账号时，会话最多保持的时间。  单位：秒。  取值范围：900-43200（15 分钟-12 小时）。</p>
                     */
                    int64_t m_newSessionDuration;
                    bool m_newSessionDurationHasBeenSet;

                    /**
                     * <p>新的初始访问页面。  CIC 用户使用权限配置访问集团账号目标账号时，初始访问的页面地址。  该页面必须是腾讯云控制台页面。</p>
                     */
                    std::string m_newRelayState;
                    bool m_newRelayStateHasBeenSet;

                    /**
                     * <p>true=保存并应用（立即下发）；false/缺省=仅保存</p>
                     */
                    bool m_isApply;
                    bool m_isApplyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEROLECONFIGURATIONREQUEST_H_
