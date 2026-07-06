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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_ORGANSUMMARY_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_ORGANSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/fwm/v20250611/model/MemberInfo.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * 集团概览
                */
                class OrganSummary : public AbstractModel
                {
                public:
                    OrganSummary();
                    ~OrganSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集团名称
                     * @return GroupName 集团名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置集团名称
                     * @param _groupName 集团名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取管理员账号信息
                     * @return AdminInfo 管理员账号信息
                     * 
                     */
                    MemberInfo GetAdminInfo() const;

                    /**
                     * 设置管理员账号信息
                     * @param _adminInfo 管理员账号信息
                     * 
                     */
                    void SetAdminInfo(const MemberInfo& _adminInfo);

                    /**
                     * 判断参数 AdminInfo 是否已赋值
                     * @return AdminInfo 是否已赋值
                     * 
                     */
                    bool AdminInfoHasBeenSet() const;

                    /**
                     * 获取管理员/委派管理员数量
                     * @return AdminCount 管理员/委派管理员数量
                     * 
                     */
                    int64_t GetAdminCount() const;

                    /**
                     * 设置管理员/委派管理员数量
                     * @param _adminCount 管理员/委派管理员数量
                     * 
                     */
                    void SetAdminCount(const int64_t& _adminCount);

                    /**
                     * 判断参数 AdminCount 是否已赋值
                     * @return AdminCount 是否已赋值
                     * 
                     */
                    bool AdminCountHasBeenSet() const;

                    /**
                     * 获取已接入成员数
                     * @return JoinedMemberCount 已接入成员数
                     * 
                     */
                    int64_t GetJoinedMemberCount() const;

                    /**
                     * 设置已接入成员数
                     * @param _joinedMemberCount 已接入成员数
                     * 
                     */
                    void SetJoinedMemberCount(const int64_t& _joinedMemberCount);

                    /**
                     * 判断参数 JoinedMemberCount 是否已赋值
                     * @return JoinedMemberCount 是否已赋值
                     * 
                     */
                    bool JoinedMemberCountHasBeenSet() const;

                    /**
                     * 获取接入成员上限（-1表示无上限）
                     * @return MemberLimit 接入成员上限（-1表示无上限）
                     * 
                     */
                    int64_t GetMemberLimit() const;

                    /**
                     * 设置接入成员上限（-1表示无上限）
                     * @param _memberLimit 接入成员上限（-1表示无上限）
                     * 
                     */
                    void SetMemberLimit(const int64_t& _memberLimit);

                    /**
                     * 判断参数 MemberLimit 是否已赋值
                     * @return MemberLimit 是否已赋值
                     * 
                     */
                    bool MemberLimitHasBeenSet() const;

                    /**
                     * 获取接入成员上限显示
                     * @return MemberLimitDisplay 接入成员上限显示
                     * 
                     */
                    std::string GetMemberLimitDisplay() const;

                    /**
                     * 设置接入成员上限显示
                     * @param _memberLimitDisplay 接入成员上限显示
                     * 
                     */
                    void SetMemberLimitDisplay(const std::string& _memberLimitDisplay);

                    /**
                     * 判断参数 MemberLimitDisplay 是否已赋值
                     * @return MemberLimitDisplay 是否已赋值
                     * 
                     */
                    bool MemberLimitDisplayHasBeenSet() const;

                    /**
                     * 获取规格共享者数量
                     * @return CfwSharerCount 规格共享者数量
                     * 
                     */
                    int64_t GetCfwSharerCount() const;

                    /**
                     * 设置规格共享者数量
                     * @param _cfwSharerCount 规格共享者数量
                     * 
                     */
                    void SetCfwSharerCount(const int64_t& _cfwSharerCount);

                    /**
                     * 判断参数 CfwSharerCount 是否已赋值
                     * @return CfwSharerCount 是否已赋值
                     * 
                     */
                    bool CfwSharerCountHasBeenSet() const;

                    /**
                     * 获取规格使用者数量
                     * @return CfwUserCount 规格使用者数量
                     * 
                     */
                    int64_t GetCfwUserCount() const;

                    /**
                     * 设置规格使用者数量
                     * @param _cfwUserCount 规格使用者数量
                     * 
                     */
                    void SetCfwUserCount(const int64_t& _cfwUserCount);

                    /**
                     * 判断参数 CfwUserCount 是否已赋值
                     * @return CfwUserCount 是否已赋值
                     * 
                     */
                    bool CfwUserCountHasBeenSet() const;

                    /**
                     * 获取部门名称列表
                     * @return Departments 部门名称列表
                     * 
                     */
                    std::vector<std::string> GetDepartments() const;

                    /**
                     * 设置部门名称列表
                     * @param _departments 部门名称列表
                     * 
                     */
                    void SetDepartments(const std::vector<std::string>& _departments);

                    /**
                     * 判断参数 Departments 是否已赋值
                     * @return Departments 是否已赋值
                     * 
                     */
                    bool DepartmentsHasBeenSet() const;

                    /**
                     * 获取纳管账号数
                     * @return ManagedMemberCount 纳管账号数
                     * 
                     */
                    int64_t GetManagedMemberCount() const;

                    /**
                     * 设置纳管账号数
                     * @param _managedMemberCount 纳管账号数
                     * 
                     */
                    void SetManagedMemberCount(const int64_t& _managedMemberCount);

                    /**
                     * 判断参数 ManagedMemberCount 是否已赋值
                     * @return ManagedMemberCount 是否已赋值
                     * 
                     */
                    bool ManagedMemberCountHasBeenSet() const;

                    /**
                     * 获取纳管产品数
                     * @return ManagedProductCount 纳管产品数
                     * 
                     */
                    int64_t GetManagedProductCount() const;

                    /**
                     * 设置纳管产品数
                     * @param _managedProductCount 纳管产品数
                     * 
                     */
                    void SetManagedProductCount(const int64_t& _managedProductCount);

                    /**
                     * 判断参数 ManagedProductCount 是否已赋值
                     * @return ManagedProductCount 是否已赋值
                     * 
                     */
                    bool ManagedProductCountHasBeenSet() const;

                    /**
                     * 获取纳管账号数
                     * @return CfwManageCount 纳管账号数
                     * 
                     */
                    int64_t GetCfwManageCount() const;

                    /**
                     * 设置纳管账号数
                     * @param _cfwManageCount 纳管账号数
                     * 
                     */
                    void SetCfwManageCount(const int64_t& _cfwManageCount);

                    /**
                     * 判断参数 CfwManageCount 是否已赋值
                     * @return CfwManageCount 是否已赋值
                     * 
                     */
                    bool CfwManageCountHasBeenSet() const;

                private:

                    /**
                     * 集团名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 管理员账号信息
                     */
                    MemberInfo m_adminInfo;
                    bool m_adminInfoHasBeenSet;

                    /**
                     * 管理员/委派管理员数量
                     */
                    int64_t m_adminCount;
                    bool m_adminCountHasBeenSet;

                    /**
                     * 已接入成员数
                     */
                    int64_t m_joinedMemberCount;
                    bool m_joinedMemberCountHasBeenSet;

                    /**
                     * 接入成员上限（-1表示无上限）
                     */
                    int64_t m_memberLimit;
                    bool m_memberLimitHasBeenSet;

                    /**
                     * 接入成员上限显示
                     */
                    std::string m_memberLimitDisplay;
                    bool m_memberLimitDisplayHasBeenSet;

                    /**
                     * 规格共享者数量
                     */
                    int64_t m_cfwSharerCount;
                    bool m_cfwSharerCountHasBeenSet;

                    /**
                     * 规格使用者数量
                     */
                    int64_t m_cfwUserCount;
                    bool m_cfwUserCountHasBeenSet;

                    /**
                     * 部门名称列表
                     */
                    std::vector<std::string> m_departments;
                    bool m_departmentsHasBeenSet;

                    /**
                     * 纳管账号数
                     */
                    int64_t m_managedMemberCount;
                    bool m_managedMemberCountHasBeenSet;

                    /**
                     * 纳管产品数
                     */
                    int64_t m_managedProductCount;
                    bool m_managedProductCountHasBeenSet;

                    /**
                     * 纳管账号数
                     */
                    int64_t m_cfwManageCount;
                    bool m_cfwManageCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_ORGANSUMMARY_H_
