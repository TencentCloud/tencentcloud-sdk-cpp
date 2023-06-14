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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_USERGROUPINFORMATION_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_USERGROUPINFORMATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * 返回的用户组列表。
                */
                class UserGroupInformation : public AbstractModel
                {
                public:
                    UserGroupInformation();
                    ~UserGroupInformation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户组ID。
                     * @return UserGroupId 用户组ID。
                     * 
                     */
                    std::string GetUserGroupId() const;

                    /**
                     * 设置用户组ID。
                     * @param _userGroupId 用户组ID。
                     * 
                     */
                    void SetUserGroupId(const std::string& _userGroupId);

                    /**
                     * 判断参数 UserGroupId 是否已赋值
                     * @return UserGroupId 是否已赋值
                     * 
                     */
                    bool UserGroupIdHasBeenSet() const;

                    /**
                     * 获取用户组名称。
                     * @return UserGroupName 用户组名称。
                     * 
                     */
                    std::string GetUserGroupName() const;

                    /**
                     * 设置用户组名称。
                     * @param _userGroupName 用户组名称。
                     * 
                     */
                    void SetUserGroupName(const std::string& _userGroupName);

                    /**
                     * 判断参数 UserGroupName 是否已赋值
                     * @return UserGroupName 是否已赋值
                     * 
                     */
                    bool UserGroupNameHasBeenSet() const;

                    /**
                     * 获取上次更新时间，符合 ISO8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastModifiedDate 上次更新时间，符合 ISO8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastModifiedDate() const;

                    /**
                     * 设置上次更新时间，符合 ISO8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastModifiedDate 上次更新时间，符合 ISO8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastModifiedDate(const std::string& _lastModifiedDate);

                    /**
                     * 判断参数 LastModifiedDate 是否已赋值
                     * @return LastModifiedDate 是否已赋值
                     * 
                     */
                    bool LastModifiedDateHasBeenSet() const;

                private:

                    /**
                     * 用户组ID。
                     */
                    std::string m_userGroupId;
                    bool m_userGroupIdHasBeenSet;

                    /**
                     * 用户组名称。
                     */
                    std::string m_userGroupName;
                    bool m_userGroupNameHasBeenSet;

                    /**
                     * 上次更新时间，符合 ISO8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastModifiedDate;
                    bool m_lastModifiedDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_USERGROUPINFORMATION_H_
