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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_NOTALLOWREASON_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_NOTALLOWREASON_H_

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
                * 不允许删除的原因。
                */
                class NotAllowReason : public AbstractModel
                {
                public:
                    NotAllowReason();
                    ~NotAllowReason() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否创建的成员。true-是、false-否；成员不是创建的成员不允许删除</p>
                     * @return IsCreateMember <p>是否创建的成员。true-是、false-否；成员不是创建的成员不允许删除</p>
                     * 
                     */
                    bool GetIsCreateMember() const;

                    /**
                     * 设置<p>是否创建的成员。true-是、false-否；成员不是创建的成员不允许删除</p>
                     * @param _isCreateMember <p>是否创建的成员。true-是、false-否；成员不是创建的成员不允许删除</p>
                     * 
                     */
                    void SetIsCreateMember(const bool& _isCreateMember);

                    /**
                     * 判断参数 IsCreateMember 是否已赋值
                     * @return IsCreateMember 是否已赋值
                     * 
                     */
                    bool IsCreateMemberHasBeenSet() const;

                    /**
                     * 获取<p>成员删除许可。true-开启、false-关闭；成员删除许可关闭时不允许删除</p>
                     * @return DeletionPermission <p>成员删除许可。true-开启、false-关闭；成员删除许可关闭时不允许删除</p>
                     * 
                     */
                    bool GetDeletionPermission() const;

                    /**
                     * 设置<p>成员删除许可。true-开启、false-关闭；成员删除许可关闭时不允许删除</p>
                     * @param _deletionPermission <p>成员删除许可。true-开启、false-关闭；成员删除许可关闭时不允许删除</p>
                     * 
                     */
                    void SetDeletionPermission(const bool& _deletionPermission);

                    /**
                     * 判断参数 DeletionPermission 是否已赋值
                     * @return DeletionPermission 是否已赋值
                     * 
                     */
                    bool DeletionPermissionHasBeenSet() const;

                    /**
                     * 获取<p>是否可信服务委派管理员。true-是、false-否；成员是可信服务委派管理员不允许删除</p>
                     * @return IsAssignManager <p>是否可信服务委派管理员。true-是、false-否；成员是可信服务委派管理员不允许删除</p>
                     * 
                     */
                    bool GetIsAssignManager() const;

                    /**
                     * 设置<p>是否可信服务委派管理员。true-是、false-否；成员是可信服务委派管理员不允许删除</p>
                     * @param _isAssignManager <p>是否可信服务委派管理员。true-是、false-否；成员是可信服务委派管理员不允许删除</p>
                     * 
                     */
                    void SetIsAssignManager(const bool& _isAssignManager);

                    /**
                     * 判断参数 IsAssignManager 是否已赋值
                     * @return IsAssignManager 是否已赋值
                     * 
                     */
                    bool IsAssignManagerHasBeenSet() const;

                    /**
                     * 获取<p>是否主体管理员。true-是、false-否；成员是主体管理员不允许删除</p>
                     * @return IsAuthManager <p>是否主体管理员。true-是、false-否；成员是主体管理员不允许删除</p>
                     * 
                     */
                    bool GetIsAuthManager() const;

                    /**
                     * 设置<p>是否主体管理员。true-是、false-否；成员是主体管理员不允许删除</p>
                     * @param _isAuthManager <p>是否主体管理员。true-是、false-否；成员是主体管理员不允许删除</p>
                     * 
                     */
                    void SetIsAuthManager(const bool& _isAuthManager);

                    /**
                     * 判断参数 IsAuthManager 是否已赋值
                     * @return IsAuthManager 是否已赋值
                     * 
                     */
                    bool IsAuthManagerHasBeenSet() const;

                    /**
                     * 获取<p>是否共享资源管理员。true-是、false-否；成员是共享资源管理员不允许删除</p>
                     * @return IsShareManager <p>是否共享资源管理员。true-是、false-否；成员是共享资源管理员不允许删除</p>
                     * 
                     */
                    bool GetIsShareManager() const;

                    /**
                     * 设置<p>是否共享资源管理员。true-是、false-否；成员是共享资源管理员不允许删除</p>
                     * @param _isShareManager <p>是否共享资源管理员。true-是、false-否；成员是共享资源管理员不允许删除</p>
                     * 
                     */
                    void SetIsShareManager(const bool& _isShareManager);

                    /**
                     * 判断参数 IsShareManager 是否已赋值
                     * @return IsShareManager 是否已赋值
                     * 
                     */
                    bool IsShareManagerHasBeenSet() const;

                    /**
                     * 获取<p>成员是否设置了操作审批。true-是、false-否；成员设置了操作审批时不允许删除</p>
                     * @return OperateProcess <p>成员是否设置了操作审批。true-是、false-否；成员设置了操作审批时不允许删除</p>
                     * 
                     */
                    bool GetOperateProcess() const;

                    /**
                     * 设置<p>成员是否设置了操作审批。true-是、false-否；成员设置了操作审批时不允许删除</p>
                     * @param _operateProcess <p>成员是否设置了操作审批。true-是、false-否；成员设置了操作审批时不允许删除</p>
                     * 
                     */
                    void SetOperateProcess(const bool& _operateProcess);

                    /**
                     * 判断参数 OperateProcess 是否已赋值
                     * @return OperateProcess 是否已赋值
                     * 
                     */
                    bool OperateProcessHasBeenSet() const;

                    /**
                     * 获取<p>是否允许解除成员财务权限。true-是、false-否；成员不能解除财务权限时不允许删除</p>
                     * @return BillingPermission <p>是否允许解除成员财务权限。true-是、false-否；成员不能解除财务权限时不允许删除</p>
                     * 
                     */
                    bool GetBillingPermission() const;

                    /**
                     * 设置<p>是否允许解除成员财务权限。true-是、false-否；成员不能解除财务权限时不允许删除</p>
                     * @param _billingPermission <p>是否允许解除成员财务权限。true-是、false-否；成员不能解除财务权限时不允许删除</p>
                     * 
                     */
                    void SetBillingPermission(const bool& _billingPermission);

                    /**
                     * 判断参数 BillingPermission 是否已赋值
                     * @return BillingPermission 是否已赋值
                     * 
                     */
                    bool BillingPermissionHasBeenSet() const;

                    /**
                     * 获取<p>存在的资源列表。账号存在资源时不允许删除</p>
                     * @return ExistResources <p>存在的资源列表。账号存在资源时不允许删除</p>
                     * 
                     */
                    std::vector<std::string> GetExistResources() const;

                    /**
                     * 设置<p>存在的资源列表。账号存在资源时不允许删除</p>
                     * @param _existResources <p>存在的资源列表。账号存在资源时不允许删除</p>
                     * 
                     */
                    void SetExistResources(const std::vector<std::string>& _existResources);

                    /**
                     * 判断参数 ExistResources 是否已赋值
                     * @return ExistResources 是否已赋值
                     * 
                     */
                    bool ExistResourcesHasBeenSet() const;

                    /**
                     * 获取<p>检测失败的资源列表。账号有资源检测失败时不允许删除。</p>
                     * @return DetectFailedResources <p>检测失败的资源列表。账号有资源检测失败时不允许删除。</p>
                     * 
                     */
                    std::vector<std::string> GetDetectFailedResources() const;

                    /**
                     * 设置<p>检测失败的资源列表。账号有资源检测失败时不允许删除。</p>
                     * @param _detectFailedResources <p>检测失败的资源列表。账号有资源检测失败时不允许删除。</p>
                     * 
                     */
                    void SetDetectFailedResources(const std::vector<std::string>& _detectFailedResources);

                    /**
                     * 判断参数 DetectFailedResources 是否已赋值
                     * @return DetectFailedResources 是否已赋值
                     * 
                     */
                    bool DetectFailedResourcesHasBeenSet() const;

                    /**
                     * 获取<p>是否部署身份中心权限。部署权限不允许删除</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * @return CICRoleConfig <p>是否部署身份中心权限。部署权限不允许删除</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * 
                     */
                    bool GetCICRoleConfig() const;

                    /**
                     * 设置<p>是否部署身份中心权限。部署权限不允许删除</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * @param _cICRoleConfig <p>是否部署身份中心权限。部署权限不允许删除</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * 
                     */
                    void SetCICRoleConfig(const bool& _cICRoleConfig);

                    /**
                     * 判断参数 CICRoleConfig 是否已赋值
                     * @return CICRoleConfig 是否已赋值
                     * 
                     */
                    bool CICRoleConfigHasBeenSet() const;

                    /**
                     * 获取<p>是否同步身份中心用户。同步用户不允许删除</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * @return CICUserConfig <p>是否同步身份中心用户。同步用户不允许删除</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * 
                     */
                    bool GetCICUserConfig() const;

                    /**
                     * 设置<p>是否同步身份中心用户。同步用户不允许删除</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * @param _cICUserConfig <p>是否同步身份中心用户。同步用户不允许删除</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * 
                     */
                    void SetCICUserConfig(const bool& _cICUserConfig);

                    /**
                     * 判断参数 CICUserConfig 是否已赋值
                     * @return CICUserConfig 是否已赋值
                     * 
                     */
                    bool CICUserConfigHasBeenSet() const;

                private:

                    /**
                     * <p>是否创建的成员。true-是、false-否；成员不是创建的成员不允许删除</p>
                     */
                    bool m_isCreateMember;
                    bool m_isCreateMemberHasBeenSet;

                    /**
                     * <p>成员删除许可。true-开启、false-关闭；成员删除许可关闭时不允许删除</p>
                     */
                    bool m_deletionPermission;
                    bool m_deletionPermissionHasBeenSet;

                    /**
                     * <p>是否可信服务委派管理员。true-是、false-否；成员是可信服务委派管理员不允许删除</p>
                     */
                    bool m_isAssignManager;
                    bool m_isAssignManagerHasBeenSet;

                    /**
                     * <p>是否主体管理员。true-是、false-否；成员是主体管理员不允许删除</p>
                     */
                    bool m_isAuthManager;
                    bool m_isAuthManagerHasBeenSet;

                    /**
                     * <p>是否共享资源管理员。true-是、false-否；成员是共享资源管理员不允许删除</p>
                     */
                    bool m_isShareManager;
                    bool m_isShareManagerHasBeenSet;

                    /**
                     * <p>成员是否设置了操作审批。true-是、false-否；成员设置了操作审批时不允许删除</p>
                     */
                    bool m_operateProcess;
                    bool m_operateProcessHasBeenSet;

                    /**
                     * <p>是否允许解除成员财务权限。true-是、false-否；成员不能解除财务权限时不允许删除</p>
                     */
                    bool m_billingPermission;
                    bool m_billingPermissionHasBeenSet;

                    /**
                     * <p>存在的资源列表。账号存在资源时不允许删除</p>
                     */
                    std::vector<std::string> m_existResources;
                    bool m_existResourcesHasBeenSet;

                    /**
                     * <p>检测失败的资源列表。账号有资源检测失败时不允许删除。</p>
                     */
                    std::vector<std::string> m_detectFailedResources;
                    bool m_detectFailedResourcesHasBeenSet;

                    /**
                     * <p>是否部署身份中心权限。部署权限不允许删除</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     */
                    bool m_cICRoleConfig;
                    bool m_cICRoleConfigHasBeenSet;

                    /**
                     * <p>是否同步身份中心用户。同步用户不允许删除</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     */
                    bool m_cICUserConfig;
                    bool m_cICUserConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_NOTALLOWREASON_H_
