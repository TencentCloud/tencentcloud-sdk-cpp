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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_USERGROUPUPDATEDTO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_USERGROUPUPDATEDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 用户组更新入参
                */
                class UserGroupUpdateDTO : public AbstractModel
                {
                public:
                    UserGroupUpdateDTO();
                    ~UserGroupUpdateDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取组管理员
                     * @return AdminUserId 组管理员
                     * 
                     */
                    std::string GetAdminUserId() const;

                    /**
                     * 设置组管理员
                     * @param _adminUserId 组管理员
                     * 
                     */
                    void SetAdminUserId(const std::string& _adminUserId);

                    /**
                     * 判断参数 AdminUserId 是否已赋值
                     * @return AdminUserId 是否已赋值
                     * 
                     */
                    bool AdminUserIdHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
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
                     * 获取用户组名称
                     * @return GroupName 用户组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置用户组名称
                     * @param _groupName 用户组名称
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
                     * 获取排序位置
                     * @return Location 排序位置
                     * 
                     */
                    int64_t GetLocation() const;

                    /**
                     * 设置排序位置
                     * @param _location 排序位置
                     * 
                     */
                    void SetLocation(const int64_t& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取父节点id
                     * @return ParentId 父节点id
                     * 
                     */
                    int64_t GetParentId() const;

                    /**
                     * 设置父节点id
                     * @param _parentId 父节点id
                     * 
                     */
                    void SetParentId(const int64_t& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取用户组id
                     * @return Id 用户组id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置用户组id
                     * @param _id 用户组id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取父节点名称
                     * @return ParentName 父节点名称
                     * 
                     */
                    std::string GetParentName() const;

                    /**
                     * 设置父节点名称
                     * @param _parentName 父节点名称
                     * 
                     */
                    void SetParentName(const std::string& _parentName);

                    /**
                     * 判断参数 ParentName 是否已赋值
                     * @return ParentName 是否已赋值
                     * 
                     */
                    bool ParentNameHasBeenSet() const;

                private:

                    /**
                     * 组管理员
                     */
                    std::string m_adminUserId;
                    bool m_adminUserIdHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 用户组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 排序位置
                     */
                    int64_t m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 父节点id
                     */
                    int64_t m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * 用户组id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 父节点名称
                     */
                    std::string m_parentName;
                    bool m_parentNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_USERGROUPUPDATEDTO_H_
