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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_PERMISSIONGROUP_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_PERMISSIONGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Permission.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 权限树中的权限组
                */
                class PermissionGroup : public AbstractModel
                {
                public:
                    PermissionGroup();
                    ~PermissionGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取权限组名称
                     * @return GroupName 权限组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置权限组名称
                     * @param _groupName 权限组名称
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
                     * 获取权限组key
                     * @return GroupKey 权限组key
                     * 
                     */
                    std::string GetGroupKey() const;

                    /**
                     * 设置权限组key
                     * @param _groupKey 权限组key
                     * 
                     */
                    void SetGroupKey(const std::string& _groupKey);

                    /**
                     * 判断参数 GroupKey 是否已赋值
                     * @return GroupKey 是否已赋值
                     * 
                     */
                    bool GroupKeyHasBeenSet() const;

                    /**
                     * 获取是否隐藏分组，0否1是
                     * @return Hide 是否隐藏分组，0否1是
                     * 
                     */
                    int64_t GetHide() const;

                    /**
                     * 设置是否隐藏分组，0否1是
                     * @param _hide 是否隐藏分组，0否1是
                     * 
                     */
                    void SetHide(const int64_t& _hide);

                    /**
                     * 判断参数 Hide 是否已赋值
                     * @return Hide 是否已赋值
                     * 
                     */
                    bool HideHasBeenSet() const;

                    /**
                     * 获取权限集合
                     * @return Permissions 权限集合
                     * 
                     */
                    std::vector<Permission> GetPermissions() const;

                    /**
                     * 设置权限集合
                     * @param _permissions 权限集合
                     * 
                     */
                    void SetPermissions(const std::vector<Permission>& _permissions);

                    /**
                     * 判断参数 Permissions 是否已赋值
                     * @return Permissions 是否已赋值
                     * 
                     */
                    bool PermissionsHasBeenSet() const;

                private:

                    /**
                     * 权限组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 权限组key
                     */
                    std::string m_groupKey;
                    bool m_groupKeyHasBeenSet;

                    /**
                     * 是否隐藏分组，0否1是
                     */
                    int64_t m_hide;
                    bool m_hideHasBeenSet;

                    /**
                     * 权限集合
                     */
                    std::vector<Permission> m_permissions;
                    bool m_permissionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_PERMISSIONGROUP_H_
