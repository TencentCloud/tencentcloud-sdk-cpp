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
                     * 获取是否创建的成员。true-是、false-否；成员不是创建的成员不允许删除
                     * @return IsCreateMember 是否创建的成员。true-是、false-否；成员不是创建的成员不允许删除
                     * 
                     */
                    bool GetIsCreateMember() const;

                    /**
                     * 设置是否创建的成员。true-是、false-否；成员不是创建的成员不允许删除
                     * @param _isCreateMember 是否创建的成员。true-是、false-否；成员不是创建的成员不允许删除
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
                     * 获取成员删除许可。true-开启、false-关闭；成员删除许可关闭时不允许删除
                     * @return DeletionPermission 成员删除许可。true-开启、false-关闭；成员删除许可关闭时不允许删除
                     * 
                     */
                    bool GetDeletionPermission() const;

                    /**
                     * 设置成员删除许可。true-开启、false-关闭；成员删除许可关闭时不允许删除
                     * @param _deletionPermission 成员删除许可。true-开启、false-关闭；成员删除许可关闭时不允许删除
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
                     * 获取是否可信服务委派管理员。true-是、false-否；成员是可信服务委派管理员不允许删除
                     * @return IsAssignManager 是否可信服务委派管理员。true-是、false-否；成员是可信服务委派管理员不允许删除
                     * 
                     */
                    bool GetIsAssignManager() const;

                    /**
                     * 设置是否可信服务委派管理员。true-是、false-否；成员是可信服务委派管理员不允许删除
                     * @param _isAssignManager 是否可信服务委派管理员。true-是、false-否；成员是可信服务委派管理员不允许删除
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
                     * 获取是否主体管理员。true-是、false-否；成员是主体管理员不允许删除
                     * @return IsAuthManager 是否主体管理员。true-是、false-否；成员是主体管理员不允许删除
                     * 
                     */
                    bool GetIsAuthManager() const;

                    /**
                     * 设置是否主体管理员。true-是、false-否；成员是主体管理员不允许删除
                     * @param _isAuthManager 是否主体管理员。true-是、false-否；成员是主体管理员不允许删除
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
                     * 获取是否共享资源管理员。true-是、false-否；成员是共享资源管理员不允许删除
                     * @return IsShareManager 是否共享资源管理员。true-是、false-否；成员是共享资源管理员不允许删除
                     * 
                     */
                    bool GetIsShareManager() const;

                    /**
                     * 设置是否共享资源管理员。true-是、false-否；成员是共享资源管理员不允许删除
                     * @param _isShareManager 是否共享资源管理员。true-是、false-否；成员是共享资源管理员不允许删除
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
                     * 获取成员是否设置了操作审批。true-是、false-否；成员设置了操作审批时不允许删除
                     * @return OperateProcess 成员是否设置了操作审批。true-是、false-否；成员设置了操作审批时不允许删除
                     * 
                     */
                    bool GetOperateProcess() const;

                    /**
                     * 设置成员是否设置了操作审批。true-是、false-否；成员设置了操作审批时不允许删除
                     * @param _operateProcess 成员是否设置了操作审批。true-是、false-否；成员设置了操作审批时不允许删除
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
                     * 获取是否允许解除成员财务权限。true-是、false-否；成员不能解除财务权限时不允许删除
                     * @return BillingPermission 是否允许解除成员财务权限。true-是、false-否；成员不能解除财务权限时不允许删除
                     * 
                     */
                    bool GetBillingPermission() const;

                    /**
                     * 设置是否允许解除成员财务权限。true-是、false-否；成员不能解除财务权限时不允许删除
                     * @param _billingPermission 是否允许解除成员财务权限。true-是、false-否；成员不能解除财务权限时不允许删除
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
                     * 获取存在的资源列表。账号存在资源时不允许删除
                     * @return ExistResources 存在的资源列表。账号存在资源时不允许删除
                     * 
                     */
                    std::vector<std::string> GetExistResources() const;

                    /**
                     * 设置存在的资源列表。账号存在资源时不允许删除
                     * @param _existResources 存在的资源列表。账号存在资源时不允许删除
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
                     * 获取检测失败的资源列表。账号有资源检测失败时不允许删除。
                     * @return DetectFailedResources 检测失败的资源列表。账号有资源检测失败时不允许删除。
                     * 
                     */
                    std::vector<std::string> GetDetectFailedResources() const;

                    /**
                     * 设置检测失败的资源列表。账号有资源检测失败时不允许删除。
                     * @param _detectFailedResources 检测失败的资源列表。账号有资源检测失败时不允许删除。
                     * 
                     */
                    void SetDetectFailedResources(const std::vector<std::string>& _detectFailedResources);

                    /**
                     * 判断参数 DetectFailedResources 是否已赋值
                     * @return DetectFailedResources 是否已赋值
                     * 
                     */
                    bool DetectFailedResourcesHasBeenSet() const;

                private:

                    /**
                     * 是否创建的成员。true-是、false-否；成员不是创建的成员不允许删除
                     */
                    bool m_isCreateMember;
                    bool m_isCreateMemberHasBeenSet;

                    /**
                     * 成员删除许可。true-开启、false-关闭；成员删除许可关闭时不允许删除
                     */
                    bool m_deletionPermission;
                    bool m_deletionPermissionHasBeenSet;

                    /**
                     * 是否可信服务委派管理员。true-是、false-否；成员是可信服务委派管理员不允许删除
                     */
                    bool m_isAssignManager;
                    bool m_isAssignManagerHasBeenSet;

                    /**
                     * 是否主体管理员。true-是、false-否；成员是主体管理员不允许删除
                     */
                    bool m_isAuthManager;
                    bool m_isAuthManagerHasBeenSet;

                    /**
                     * 是否共享资源管理员。true-是、false-否；成员是共享资源管理员不允许删除
                     */
                    bool m_isShareManager;
                    bool m_isShareManagerHasBeenSet;

                    /**
                     * 成员是否设置了操作审批。true-是、false-否；成员设置了操作审批时不允许删除
                     */
                    bool m_operateProcess;
                    bool m_operateProcessHasBeenSet;

                    /**
                     * 是否允许解除成员财务权限。true-是、false-否；成员不能解除财务权限时不允许删除
                     */
                    bool m_billingPermission;
                    bool m_billingPermissionHasBeenSet;

                    /**
                     * 存在的资源列表。账号存在资源时不允许删除
                     */
                    std::vector<std::string> m_existResources;
                    bool m_existResourcesHasBeenSet;

                    /**
                     * 检测失败的资源列表。账号有资源检测失败时不允许删除。
                     */
                    std::vector<std::string> m_detectFailedResources;
                    bool m_detectFailedResourcesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_NOTALLOWREASON_H_
