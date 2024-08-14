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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_GROUPINFO_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_GROUPINFO_H_

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
                * 用户组信息。
                */
                class GroupInfo : public AbstractModel
                {
                public:
                    GroupInfo();
                    ~GroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户组的名称。
                     * @return GroupName 用户组的名称。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置用户组的名称。
                     * @param _groupName 用户组的名称。
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
                     * 获取用户组的描述。
                     * @return Description 用户组的描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置用户组的描述。
                     * @param _description 用户组的描述。
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
                     * 获取用户组的创建时间。
                     * @return CreateTime 用户组的创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置用户组的创建时间。
                     * @param _createTime 用户组的创建时间。
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
                     * 获取用户组的类型  Manual：手动创建，Synchronized：外部导入。
                     * @return GroupType 用户组的类型  Manual：手动创建，Synchronized：外部导入。
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置用户组的类型  Manual：手动创建，Synchronized：外部导入。
                     * @param _groupType 用户组的类型  Manual：手动创建，Synchronized：外部导入。
                     * 
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取用户组的修改时间。
                     * @return UpdateTime 用户组的修改时间。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置用户组的修改时间。
                     * @param _updateTime 用户组的修改时间。
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
                     * 获取用户组的 ID。
                     * @return GroupId 用户组的 ID。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置用户组的 ID。
                     * @param _groupId 用户组的 ID。
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取组员数量。
                     * @return MemberCount 组员数量。
                     * 
                     */
                    int64_t GetMemberCount() const;

                    /**
                     * 设置组员数量。
                     * @param _memberCount 组员数量。
                     * 
                     */
                    void SetMemberCount(const int64_t& _memberCount);

                    /**
                     * 判断参数 MemberCount 是否已赋值
                     * @return MemberCount 是否已赋值
                     * 
                     */
                    bool MemberCountHasBeenSet() const;

                    /**
                     * 获取如果有入参FilterUsers，用户在用户组返回true，否则返回false
                     * @return IsSelected 如果有入参FilterUsers，用户在用户组返回true，否则返回false
                     * 
                     */
                    bool GetIsSelected() const;

                    /**
                     * 设置如果有入参FilterUsers，用户在用户组返回true，否则返回false
                     * @param _isSelected 如果有入参FilterUsers，用户在用户组返回true，否则返回false
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
                     * 用户组的名称。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 用户组的描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 用户组的创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 用户组的类型  Manual：手动创建，Synchronized：外部导入。
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * 用户组的修改时间。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 用户组的 ID。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 组员数量。
                     */
                    int64_t m_memberCount;
                    bool m_memberCountHasBeenSet;

                    /**
                     * 如果有入参FilterUsers，用户在用户组返回true，否则返回false
                     */
                    bool m_isSelected;
                    bool m_isSelectedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_GROUPINFO_H_
