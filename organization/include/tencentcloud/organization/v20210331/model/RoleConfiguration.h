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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ROLECONFIGURATION_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ROLECONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * CIC权限配置
                */
                class RoleConfiguration : public AbstractModel
                {
                public:
                    RoleConfiguration();
                    ~RoleConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取权限配置配置ID。
                     * @return RoleConfigurationId 权限配置配置ID。
                     * 
                     */
                    std::string GetRoleConfigurationId() const;

                    /**
                     * 设置权限配置配置ID。
                     * @param _roleConfigurationId 权限配置配置ID。
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
                     * 获取权限配置配名称。
                     * @return RoleConfigurationName 权限配置配名称。
                     * 
                     */
                    std::string GetRoleConfigurationName() const;

                    /**
                     * 设置权限配置配名称。
                     * @param _roleConfigurationName 权限配置配名称。
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
                     * 获取权限配置的描述。
                     * @return Description 权限配置的描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置权限配置的描述。
                     * @param _description 权限配置的描述。
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
                     * 获取会话持续时间。CIC 用户使用访问配置访问成员账号时，会话最多保持的时间。
单位：秒。
                     * @return SessionDuration 会话持续时间。CIC 用户使用访问配置访问成员账号时，会话最多保持的时间。
单位：秒。
                     * 
                     */
                    int64_t GetSessionDuration() const;

                    /**
                     * 设置会话持续时间。CIC 用户使用访问配置访问成员账号时，会话最多保持的时间。
单位：秒。
                     * @param _sessionDuration 会话持续时间。CIC 用户使用访问配置访问成员账号时，会话最多保持的时间。
单位：秒。
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
                     * 获取初始访问页面。CIC 用户使用访问配置访问成员账号时，初始访问的页面地址。
                     * @return RelayState 初始访问页面。CIC 用户使用访问配置访问成员账号时，初始访问的页面地址。
                     * 
                     */
                    std::string GetRelayState() const;

                    /**
                     * 设置初始访问页面。CIC 用户使用访问配置访问成员账号时，初始访问的页面地址。
                     * @param _relayState 初始访问页面。CIC 用户使用访问配置访问成员账号时，初始访问的页面地址。
                     * 
                     */
                    void SetRelayState(const std::string& _relayState);

                    /**
                     * 判断参数 RelayState 是否已赋值
                     * @return RelayState 是否已赋值
                     * 
                     */
                    bool RelayStateHasBeenSet() const;

                    /**
                     * 获取权限配置的创建时间。
                     * @return CreateTime 权限配置的创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置权限配置的创建时间。
                     * @param _createTime 权限配置的创建时间。
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
                     * 获取权限配置的更新时间。
                     * @return UpdateTime 权限配置的更新时间。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置权限配置的更新时间。
                     * @param _updateTime 权限配置的更新时间。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取如果有入参FilterTargets查询成员账号是否配置过权限，配置了返回true，否则返回false。
                     * @return IsSelected 如果有入参FilterTargets查询成员账号是否配置过权限，配置了返回true，否则返回false。
                     * 
                     */
                    bool GetIsSelected() const;

                    /**
                     * 设置如果有入参FilterTargets查询成员账号是否配置过权限，配置了返回true，否则返回false。
                     * @param _isSelected 如果有入参FilterTargets查询成员账号是否配置过权限，配置了返回true，否则返回false。
                     * 
                     */
                    void SetIsSelected(const bool& _isSelected);

                    /**
                     * 判断参数 IsSelected 是否已赋值
                     * @return IsSelected 是否已赋值
                     * 
                     */
                    bool IsSelectedHasBeenSet() const;

                private:

                    /**
                     * 权限配置配置ID。
                     */
                    std::string m_roleConfigurationId;
                    bool m_roleConfigurationIdHasBeenSet;

                    /**
                     * 权限配置配名称。
                     */
                    std::string m_roleConfigurationName;
                    bool m_roleConfigurationNameHasBeenSet;

                    /**
                     * 权限配置的描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 会话持续时间。CIC 用户使用访问配置访问成员账号时，会话最多保持的时间。
单位：秒。
                     */
                    int64_t m_sessionDuration;
                    bool m_sessionDurationHasBeenSet;

                    /**
                     * 初始访问页面。CIC 用户使用访问配置访问成员账号时，初始访问的页面地址。
                     */
                    std::string m_relayState;
                    bool m_relayStateHasBeenSet;

                    /**
                     * 权限配置的创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 权限配置的更新时间。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 如果有入参FilterTargets查询成员账号是否配置过权限，配置了返回true，否则返回false。
                     */
                    bool m_isSelected;
                    bool m_isSelectedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ROLECONFIGURATION_H_
