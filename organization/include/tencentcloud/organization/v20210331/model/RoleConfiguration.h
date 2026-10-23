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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ROLECONFIGURATION_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ROLECONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/FailedAccount.h>


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
                     * 获取<p>权限配置配置ID。</p>
                     * @return RoleConfigurationId <p>权限配置配置ID。</p>
                     * 
                     */
                    std::string GetRoleConfigurationId() const;

                    /**
                     * 设置<p>权限配置配置ID。</p>
                     * @param _roleConfigurationId <p>权限配置配置ID。</p>
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
                     * 获取<p>权限配置配名称。</p>
                     * @return RoleConfigurationName <p>权限配置配名称。</p>
                     * 
                     */
                    std::string GetRoleConfigurationName() const;

                    /**
                     * 设置<p>权限配置配名称。</p>
                     * @param _roleConfigurationName <p>权限配置配名称。</p>
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
                     * 获取<p>权限配置的描述。</p>
                     * @return Description <p>权限配置的描述。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>权限配置的描述。</p>
                     * @param _description <p>权限配置的描述。</p>
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
                     * 获取<p>会话持续时间。CIC 用户使用访问配置访问成员账号时，会话最多保持的时间。<br>单位：秒。</p>
                     * @return SessionDuration <p>会话持续时间。CIC 用户使用访问配置访问成员账号时，会话最多保持的时间。<br>单位：秒。</p>
                     * 
                     */
                    int64_t GetSessionDuration() const;

                    /**
                     * 设置<p>会话持续时间。CIC 用户使用访问配置访问成员账号时，会话最多保持的时间。<br>单位：秒。</p>
                     * @param _sessionDuration <p>会话持续时间。CIC 用户使用访问配置访问成员账号时，会话最多保持的时间。<br>单位：秒。</p>
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
                     * 获取<p>初始访问页面。CIC 用户使用访问配置访问成员账号时，初始访问的页面地址。</p>
                     * @return RelayState <p>初始访问页面。CIC 用户使用访问配置访问成员账号时，初始访问的页面地址。</p>
                     * 
                     */
                    std::string GetRelayState() const;

                    /**
                     * 设置<p>初始访问页面。CIC 用户使用访问配置访问成员账号时，初始访问的页面地址。</p>
                     * @param _relayState <p>初始访问页面。CIC 用户使用访问配置访问成员账号时，初始访问的页面地址。</p>
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
                     * 获取<p>权限配置的创建时间。</p>
                     * @return CreateTime <p>权限配置的创建时间。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>权限配置的创建时间。</p>
                     * @param _createTime <p>权限配置的创建时间。</p>
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
                     * 获取<p>权限配置的更新时间。</p>
                     * @return UpdateTime <p>权限配置的更新时间。</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>权限配置的更新时间。</p>
                     * @param _updateTime <p>权限配置的更新时间。</p>
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
                     * 获取<p>如果有入参FilterTargets查询成员账号是否配置过权限，配置了返回true，否则返回false。</p>
                     * @return IsSelected <p>如果有入参FilterTargets查询成员账号是否配置过权限，配置了返回true，否则返回false。</p>
                     * 
                     */
                    bool GetIsSelected() const;

                    /**
                     * 设置<p>如果有入参FilterTargets查询成员账号是否配置过权限，配置了返回true，否则返回false。</p>
                     * @param _isSelected <p>如果有入参FilterTargets查询成员账号是否配置过权限，配置了返回true，否则返回false。</p>
                     * 
                     */
                    void SetIsSelected(const bool& _isSelected);

                    /**
                     * 判断参数 IsSelected 是否已赋值
                     * @return IsSelected 是否已赋值
                     * 
                     */
                    bool IsSelectedHasBeenSet() const;

                    /**
                     * 获取<p>会话时长应用状态</p><p>枚举值：</p><ul><li>Success： 全部账号应用成功</li><li>Failed： 存在失败账号</li><li>Applying： 任务在途</li><li>Unknown： 已部署账号超查询上限</li></ul>
                     * @return ApplyStatus <p>会话时长应用状态</p><p>枚举值：</p><ul><li>Success： 全部账号应用成功</li><li>Failed： 存在失败账号</li><li>Applying： 任务在途</li><li>Unknown： 已部署账号超查询上限</li></ul>
                     * 
                     */
                    std::string GetApplyStatus() const;

                    /**
                     * 设置<p>会话时长应用状态</p><p>枚举值：</p><ul><li>Success： 全部账号应用成功</li><li>Failed： 存在失败账号</li><li>Applying： 任务在途</li><li>Unknown： 已部署账号超查询上限</li></ul>
                     * @param _applyStatus <p>会话时长应用状态</p><p>枚举值：</p><ul><li>Success： 全部账号应用成功</li><li>Failed： 存在失败账号</li><li>Applying： 任务在途</li><li>Unknown： 已部署账号超查询上限</li></ul>
                     * 
                     */
                    void SetApplyStatus(const std::string& _applyStatus);

                    /**
                     * 判断参数 ApplyStatus 是否已赋值
                     * @return ApplyStatus 是否已赋值
                     * 
                     */
                    bool ApplyStatusHasBeenSet() const;

                    /**
                     * 获取<p>当前已真实下发到 CAM 的会话时长</p><p>取值范围：[900, 43200]</p><p>单位：秒</p>
                     * @return AppliedSessionDuration <p>当前已真实下发到 CAM 的会话时长</p><p>取值范围：[900, 43200]</p><p>单位：秒</p>
                     * 
                     */
                    uint64_t GetAppliedSessionDuration() const;

                    /**
                     * 设置<p>当前已真实下发到 CAM 的会话时长</p><p>取值范围：[900, 43200]</p><p>单位：秒</p>
                     * @param _appliedSessionDuration <p>当前已真实下发到 CAM 的会话时长</p><p>取值范围：[900, 43200]</p><p>单位：秒</p>
                     * 
                     */
                    void SetAppliedSessionDuration(const uint64_t& _appliedSessionDuration);

                    /**
                     * 判断参数 AppliedSessionDuration 是否已赋值
                     * @return AppliedSessionDuration 是否已赋值
                     * 
                     */
                    bool AppliedSessionDurationHasBeenSet() const;

                    /**
                     * 获取<p>最近一次成功下发时间</p><p>参数格式： YYYY-MM-DD hh:mm:ss</p>
                     * @return SessionDurationUpdateTime <p>最近一次成功下发时间</p><p>参数格式： YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetSessionDurationUpdateTime() const;

                    /**
                     * 设置<p>最近一次成功下发时间</p><p>参数格式： YYYY-MM-DD hh:mm:ss</p>
                     * @param _sessionDurationUpdateTime <p>最近一次成功下发时间</p><p>参数格式： YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetSessionDurationUpdateTime(const std::string& _sessionDurationUpdateTime);

                    /**
                     * 判断参数 SessionDurationUpdateTime 是否已赋值
                     * @return SessionDurationUpdateTime 是否已赋值
                     * 
                     */
                    bool SessionDurationUpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>未成功应用的账号明细</p><p>仅 Failed 态返回</p>
                     * @return FailedAccounts <p>未成功应用的账号明细</p><p>仅 Failed 态返回</p>
                     * 
                     */
                    std::vector<FailedAccount> GetFailedAccounts() const;

                    /**
                     * 设置<p>未成功应用的账号明细</p><p>仅 Failed 态返回</p>
                     * @param _failedAccounts <p>未成功应用的账号明细</p><p>仅 Failed 态返回</p>
                     * 
                     */
                    void SetFailedAccounts(const std::vector<FailedAccount>& _failedAccounts);

                    /**
                     * 判断参数 FailedAccounts 是否已赋值
                     * @return FailedAccounts 是否已赋值
                     * 
                     */
                    bool FailedAccountsHasBeenSet() const;

                private:

                    /**
                     * <p>权限配置配置ID。</p>
                     */
                    std::string m_roleConfigurationId;
                    bool m_roleConfigurationIdHasBeenSet;

                    /**
                     * <p>权限配置配名称。</p>
                     */
                    std::string m_roleConfigurationName;
                    bool m_roleConfigurationNameHasBeenSet;

                    /**
                     * <p>权限配置的描述。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>会话持续时间。CIC 用户使用访问配置访问成员账号时，会话最多保持的时间。<br>单位：秒。</p>
                     */
                    int64_t m_sessionDuration;
                    bool m_sessionDurationHasBeenSet;

                    /**
                     * <p>初始访问页面。CIC 用户使用访问配置访问成员账号时，初始访问的页面地址。</p>
                     */
                    std::string m_relayState;
                    bool m_relayStateHasBeenSet;

                    /**
                     * <p>权限配置的创建时间。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>权限配置的更新时间。</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>如果有入参FilterTargets查询成员账号是否配置过权限，配置了返回true，否则返回false。</p>
                     */
                    bool m_isSelected;
                    bool m_isSelectedHasBeenSet;

                    /**
                     * <p>会话时长应用状态</p><p>枚举值：</p><ul><li>Success： 全部账号应用成功</li><li>Failed： 存在失败账号</li><li>Applying： 任务在途</li><li>Unknown： 已部署账号超查询上限</li></ul>
                     */
                    std::string m_applyStatus;
                    bool m_applyStatusHasBeenSet;

                    /**
                     * <p>当前已真实下发到 CAM 的会话时长</p><p>取值范围：[900, 43200]</p><p>单位：秒</p>
                     */
                    uint64_t m_appliedSessionDuration;
                    bool m_appliedSessionDurationHasBeenSet;

                    /**
                     * <p>最近一次成功下发时间</p><p>参数格式： YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_sessionDurationUpdateTime;
                    bool m_sessionDurationUpdateTimeHasBeenSet;

                    /**
                     * <p>未成功应用的账号明细</p><p>仅 Failed 态返回</p>
                     */
                    std::vector<FailedAccount> m_failedAccounts;
                    bool m_failedAccountsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ROLECONFIGURATION_H_
