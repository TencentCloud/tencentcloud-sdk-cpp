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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_USER_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_USER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * 用户信息
                */
                class User : public AbstractModel
                {
                public:
                    User();
                    ~User() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>用户ID。</p>
                     * @return Id <p>用户ID。</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>用户ID。</p>
                     * @param _id <p>用户ID。</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>名字。</p>
                     * @return Name <p>名字。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名字。</p>
                     * @param _name <p>名字。</p>
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
                     * 获取<p>显示名字。</p>
                     * @return DisplayName <p>显示名字。</p>
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置<p>显示名字。</p>
                     * @param _displayName <p>显示名字。</p>
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取<p>邮箱。</p>
                     * @return Mail <p>邮箱。</p>
                     * 
                     */
                    std::string GetMail() const;

                    /**
                     * 设置<p>邮箱。</p>
                     * @param _mail <p>邮箱。</p>
                     * 
                     */
                    void SetMail(const std::string& _mail);

                    /**
                     * 判断参数 Mail 是否已赋值
                     * @return Mail 是否已赋值
                     * 
                     */
                    bool MailHasBeenSet() const;

                    /**
                     * 获取<p>手机号。</p>
                     * @return PhoneNum <p>手机号。</p>
                     * 
                     */
                    std::string GetPhoneNum() const;

                    /**
                     * 设置<p>手机号。</p>
                     * @param _phoneNum <p>手机号。</p>
                     * 
                     */
                    void SetPhoneNum(const std::string& _phoneNum);

                    /**
                     * 判断参数 PhoneNum 是否已赋值
                     * @return PhoneNum 是否已赋值
                     * 
                     */
                    bool PhoneNumHasBeenSet() const;

                    /**
                     * 获取<p>状态。<br>ACTIVE:启用<br>PENDING_ACTIVATE:待激活<br>PENDING_ONBOARD:待启用<br>SUSPENDED:已停用<br>INACTIVE:已离职<br>PASSWORD_RESET:重置密码<br>LOCKED_OUT:锁定</p>
                     * @return Status <p>状态。<br>ACTIVE:启用<br>PENDING_ACTIVATE:待激活<br>PENDING_ONBOARD:待启用<br>SUSPENDED:已停用<br>INACTIVE:已离职<br>PASSWORD_RESET:重置密码<br>LOCKED_OUT:锁定</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态。<br>ACTIVE:启用<br>PENDING_ACTIVATE:待激活<br>PENDING_ONBOARD:待启用<br>SUSPENDED:已停用<br>INACTIVE:已离职<br>PASSWORD_RESET:重置密码<br>LOCKED_OUT:锁定</p>
                     * @param _status <p>状态。<br>ACTIVE:启用<br>PENDING_ACTIVATE:待激活<br>PENDING_ONBOARD:待启用<br>SUSPENDED:已停用<br>INACTIVE:已离职<br>PASSWORD_RESET:重置密码<br>LOCKED_OUT:锁定</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>部门ID。</p>
                     * @return DepartmentId <p>部门ID。</p>
                     * 
                     */
                    std::string GetDepartmentId() const;

                    /**
                     * 设置<p>部门ID。</p>
                     * @param _departmentId <p>部门ID。</p>
                     * 
                     */
                    void SetDepartmentId(const std::string& _departmentId);

                    /**
                     * 判断参数 DepartmentId 是否已赋值
                     * @return DepartmentId 是否已赋值
                     * 
                     */
                    bool DepartmentIdHasBeenSet() const;

                    /**
                     * 获取<p>策略ID。</p>
                     * @return StrategyId <p>策略ID。</p>
                     * 
                     */
                    std::string GetStrategyId() const;

                    /**
                     * 设置<p>策略ID。</p>
                     * @param _strategyId <p>策略ID。</p>
                     * 
                     */
                    void SetStrategyId(const std::string& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取<p>策略名称。</p>
                     * @return StrategyName <p>策略名称。</p>
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置<p>策略名称。</p>
                     * @param _strategyName <p>策略名称。</p>
                     * 
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取<p>当前用户是否绑定桌面，true：绑定，false：未绑定任何桌面</p>
                     * @return BindStatus <p>当前用户是否绑定桌面，true：绑定，false：未绑定任何桌面</p>
                     * 
                     */
                    bool GetBindStatus() const;

                    /**
                     * 设置<p>当前用户是否绑定桌面，true：绑定，false：未绑定任何桌面</p>
                     * @param _bindStatus <p>当前用户是否绑定桌面，true：绑定，false：未绑定任何桌面</p>
                     * 
                     */
                    void SetBindStatus(const bool& _bindStatus);

                    /**
                     * 判断参数 BindStatus 是否已赋值
                     * @return BindStatus 是否已赋值
                     * 
                     */
                    bool BindStatusHasBeenSet() const;

                private:

                    /**
                     * <p>用户ID。</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>名字。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>显示名字。</p>
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * <p>邮箱。</p>
                     */
                    std::string m_mail;
                    bool m_mailHasBeenSet;

                    /**
                     * <p>手机号。</p>
                     */
                    std::string m_phoneNum;
                    bool m_phoneNumHasBeenSet;

                    /**
                     * <p>状态。<br>ACTIVE:启用<br>PENDING_ACTIVATE:待激活<br>PENDING_ONBOARD:待启用<br>SUSPENDED:已停用<br>INACTIVE:已离职<br>PASSWORD_RESET:重置密码<br>LOCKED_OUT:锁定</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>部门ID。</p>
                     */
                    std::string m_departmentId;
                    bool m_departmentIdHasBeenSet;

                    /**
                     * <p>策略ID。</p>
                     */
                    std::string m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * <p>策略名称。</p>
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * <p>当前用户是否绑定桌面，true：绑定，false：未绑定任何桌面</p>
                     */
                    bool m_bindStatus;
                    bool m_bindStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_USER_H_
