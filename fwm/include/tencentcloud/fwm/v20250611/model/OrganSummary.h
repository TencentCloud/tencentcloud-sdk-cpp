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
                     * 获取<p>集团名称</p>
                     * @return GroupName <p>集团名称</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>集团名称</p>
                     * @param _groupName <p>集团名称</p>
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
                     * 获取<p>管理员账号信息</p>
                     * @return AdminInfo <p>管理员账号信息</p>
                     * 
                     */
                    MemberInfo GetAdminInfo() const;

                    /**
                     * 设置<p>管理员账号信息</p>
                     * @param _adminInfo <p>管理员账号信息</p>
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
                     * 获取<p>管理员/委派管理员数量</p>
                     * @return AdminCount <p>管理员/委派管理员数量</p>
                     * 
                     */
                    int64_t GetAdminCount() const;

                    /**
                     * 设置<p>管理员/委派管理员数量</p>
                     * @param _adminCount <p>管理员/委派管理员数量</p>
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
                     * 获取<p>已接入成员数</p>
                     * @return JoinedMemberCount <p>已接入成员数</p>
                     * 
                     */
                    int64_t GetJoinedMemberCount() const;

                    /**
                     * 设置<p>已接入成员数</p>
                     * @param _joinedMemberCount <p>已接入成员数</p>
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
                     * 获取<p>接入成员上限（-1表示无上限）</p>
                     * @return MemberLimit <p>接入成员上限（-1表示无上限）</p>
                     * 
                     */
                    int64_t GetMemberLimit() const;

                    /**
                     * 设置<p>接入成员上限（-1表示无上限）</p>
                     * @param _memberLimit <p>接入成员上限（-1表示无上限）</p>
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
                     * 获取<p>接入成员上限显示</p>
                     * @return MemberLimitDisplay <p>接入成员上限显示</p>
                     * 
                     */
                    std::string GetMemberLimitDisplay() const;

                    /**
                     * 设置<p>接入成员上限显示</p>
                     * @param _memberLimitDisplay <p>接入成员上限显示</p>
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
                     * 获取<p>规格共享者数量</p>
                     * @return CfwSharerCount <p>规格共享者数量</p>
                     * 
                     */
                    int64_t GetCfwSharerCount() const;

                    /**
                     * 设置<p>规格共享者数量</p>
                     * @param _cfwSharerCount <p>规格共享者数量</p>
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
                     * 获取<p>规格使用者数量</p>
                     * @return CfwUserCount <p>规格使用者数量</p>
                     * 
                     */
                    int64_t GetCfwUserCount() const;

                    /**
                     * 设置<p>规格使用者数量</p>
                     * @param _cfwUserCount <p>规格使用者数量</p>
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
                     * 获取<p>部门名称列表</p>
                     * @return Departments <p>部门名称列表</p>
                     * 
                     */
                    std::vector<std::string> GetDepartments() const;

                    /**
                     * 设置<p>部门名称列表</p>
                     * @param _departments <p>部门名称列表</p>
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
                     * 获取<p>纳管账号数</p>
                     * @return ManagedMemberCount <p>纳管账号数</p>
                     * 
                     */
                    int64_t GetManagedMemberCount() const;

                    /**
                     * 设置<p>纳管账号数</p>
                     * @param _managedMemberCount <p>纳管账号数</p>
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
                     * 获取<p>纳管产品数</p>
                     * @return ManagedProductCount <p>纳管产品数</p>
                     * 
                     */
                    int64_t GetManagedProductCount() const;

                    /**
                     * 设置<p>纳管产品数</p>
                     * @param _managedProductCount <p>纳管产品数</p>
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
                     * 获取<p>纳管账号数</p>
                     * @return CfwManageCount <p>纳管账号数</p>
                     * 
                     */
                    int64_t GetCfwManageCount() const;

                    /**
                     * 设置<p>纳管账号数</p>
                     * @param _cfwManageCount <p>纳管账号数</p>
                     * 
                     */
                    void SetCfwManageCount(const int64_t& _cfwManageCount);

                    /**
                     * 判断参数 CfwManageCount 是否已赋值
                     * @return CfwManageCount 是否已赋值
                     * 
                     */
                    bool CfwManageCountHasBeenSet() const;

                    /**
                     * 获取<p>规格共享总配额</p>
                     * @return FwmShareUserQuota <p>规格共享总配额</p>
                     * 
                     */
                    int64_t GetFwmShareUserQuota() const;

                    /**
                     * 设置<p>规格共享总配额</p>
                     * @param _fwmShareUserQuota <p>规格共享总配额</p>
                     * 
                     */
                    void SetFwmShareUserQuota(const int64_t& _fwmShareUserQuota);

                    /**
                     * 判断参数 FwmShareUserQuota 是否已赋值
                     * @return FwmShareUserQuota 是否已赋值
                     * 
                     */
                    bool FwmShareUserQuotaHasBeenSet() const;

                private:

                    /**
                     * <p>集团名称</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>管理员账号信息</p>
                     */
                    MemberInfo m_adminInfo;
                    bool m_adminInfoHasBeenSet;

                    /**
                     * <p>管理员/委派管理员数量</p>
                     */
                    int64_t m_adminCount;
                    bool m_adminCountHasBeenSet;

                    /**
                     * <p>已接入成员数</p>
                     */
                    int64_t m_joinedMemberCount;
                    bool m_joinedMemberCountHasBeenSet;

                    /**
                     * <p>接入成员上限（-1表示无上限）</p>
                     */
                    int64_t m_memberLimit;
                    bool m_memberLimitHasBeenSet;

                    /**
                     * <p>接入成员上限显示</p>
                     */
                    std::string m_memberLimitDisplay;
                    bool m_memberLimitDisplayHasBeenSet;

                    /**
                     * <p>规格共享者数量</p>
                     */
                    int64_t m_cfwSharerCount;
                    bool m_cfwSharerCountHasBeenSet;

                    /**
                     * <p>规格使用者数量</p>
                     */
                    int64_t m_cfwUserCount;
                    bool m_cfwUserCountHasBeenSet;

                    /**
                     * <p>部门名称列表</p>
                     */
                    std::vector<std::string> m_departments;
                    bool m_departmentsHasBeenSet;

                    /**
                     * <p>纳管账号数</p>
                     */
                    int64_t m_managedMemberCount;
                    bool m_managedMemberCountHasBeenSet;

                    /**
                     * <p>纳管产品数</p>
                     */
                    int64_t m_managedProductCount;
                    bool m_managedProductCountHasBeenSet;

                    /**
                     * <p>纳管账号数</p>
                     */
                    int64_t m_cfwManageCount;
                    bool m_cfwManageCountHasBeenSet;

                    /**
                     * <p>规格共享总配额</p>
                     */
                    int64_t m_fwmShareUserQuota;
                    bool m_fwmShareUserQuotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_ORGANSUMMARY_H_
