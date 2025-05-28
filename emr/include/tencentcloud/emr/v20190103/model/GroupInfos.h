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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_GROUPINFOS_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_GROUPINFOS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 用户组信息
                */
                class GroupInfos : public AbstractModel
                {
                public:
                    GroupInfos();
                    ~GroupInfos() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取用户名称列表
                     * @return Users 用户名称列表
                     * 
                     */
                    std::vector<std::string> GetUsers() const;

                    /**
                     * 设置用户名称列表
                     * @param _users 用户名称列表
                     * 
                     */
                    void SetUsers(const std::vector<std::string>& _users);

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     * 
                     */
                    bool UsersHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Description 备注
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置备注
                     * @param _description 备注
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取用户组类型
                     * @return GroupType 用户组类型
                     * 
                     */
                    int64_t GetGroupType() const;

                    /**
                     * 设置用户组类型
                     * @param _groupType 用户组类型
                     * 
                     */
                    void SetGroupType(const int64_t& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取用户组类型描述
                     * @return GroupTypeDesc 用户组类型描述
                     * 
                     */
                    std::string GetGroupTypeDesc() const;

                    /**
                     * 设置用户组类型描述
                     * @param _groupTypeDesc 用户组类型描述
                     * 
                     */
                    void SetGroupTypeDesc(const std::string& _groupTypeDesc);

                    /**
                     * 判断参数 GroupTypeDesc 是否已赋值
                     * @return GroupTypeDesc 是否已赋值
                     * 
                     */
                    bool GroupTypeDescHasBeenSet() const;

                private:

                    /**
                     * 用户组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 用户名称列表
                     */
                    std::vector<std::string> m_users;
                    bool m_usersHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 用户组类型
                     */
                    int64_t m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * 用户组类型描述
                     */
                    std::string m_groupTypeDesc;
                    bool m_groupTypeDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_GROUPINFOS_H_
