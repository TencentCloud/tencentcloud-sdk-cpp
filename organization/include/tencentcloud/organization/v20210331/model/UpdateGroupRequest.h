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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEGROUPREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * UpdateGroup请求参数结构体
                */
                class UpdateGroupRequest : public AbstractModel
                {
                public:
                    UpdateGroupRequest();
                    ~UpdateGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取空间 ID。
                     * @return ZoneId 空间 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置空间 ID。
                     * @param _zoneId 空间 ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取用户组ID。
                     * @return GroupId 用户组ID。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置用户组ID。
                     * @param _groupId 用户组ID。
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
                     * 获取新的用户组名称。
                     * @return NewGroupName 新的用户组名称。
                     * 
                     */
                    std::string GetNewGroupName() const;

                    /**
                     * 设置新的用户组名称。
                     * @param _newGroupName 新的用户组名称。
                     * 
                     */
                    void SetNewGroupName(const std::string& _newGroupName);

                    /**
                     * 判断参数 NewGroupName 是否已赋值
                     * @return NewGroupName 是否已赋值
                     * 
                     */
                    bool NewGroupNameHasBeenSet() const;

                    /**
                     * 获取新的用户组描述。
                     * @return NewDescription 新的用户组描述。
                     * 
                     */
                    std::string GetNewDescription() const;

                    /**
                     * 设置新的用户组描述。
                     * @param _newDescription 新的用户组描述。
                     * 
                     */
                    void SetNewDescription(const std::string& _newDescription);

                    /**
                     * 判断参数 NewDescription 是否已赋值
                     * @return NewDescription 是否已赋值
                     * 
                     */
                    bool NewDescriptionHasBeenSet() const;

                private:

                    /**
                     * 空间 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 用户组ID。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 新的用户组名称。
                     */
                    std::string m_newGroupName;
                    bool m_newGroupNameHasBeenSet;

                    /**
                     * 新的用户组描述。
                     */
                    std::string m_newDescription;
                    bool m_newDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEGROUPREQUEST_H_
