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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_JOINEDGROUPS_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_JOINEDGROUPS_H_

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
                * 用户加入的用户组
                */
                class JoinedGroups : public AbstractModel
                {
                public:
                    JoinedGroups();
                    ~JoinedGroups() = default;
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
                     * 获取用户组 ID。
                     * @return GroupId 用户组 ID。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置用户组 ID。
                     * @param _groupId 用户组 ID。
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
                     * 获取用户组的类型。取值：

Manual：手动创建。
Synchronized：外部同步。
                     * @return GroupType 用户组的类型。取值：

Manual：手动创建。
Synchronized：外部同步。
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置用户组的类型。取值：

Manual：手动创建。
Synchronized：外部同步。
                     * @param _groupType 用户组的类型。取值：

Manual：手动创建。
Synchronized：外部同步。
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
                     * 获取加入用户组的时间
                     * @return JoinTime 加入用户组的时间
                     * 
                     */
                    std::string GetJoinTime() const;

                    /**
                     * 设置加入用户组的时间
                     * @param _joinTime 加入用户组的时间
                     * 
                     */
                    void SetJoinTime(const std::string& _joinTime);

                    /**
                     * 判断参数 JoinTime 是否已赋值
                     * @return JoinTime 是否已赋值
                     * 
                     */
                    bool JoinTimeHasBeenSet() const;

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
                     * 用户组 ID。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 用户组的类型。取值：

Manual：手动创建。
Synchronized：外部同步。
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * 加入用户组的时间
                     */
                    std::string m_joinTime;
                    bool m_joinTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_JOINEDGROUPS_H_
