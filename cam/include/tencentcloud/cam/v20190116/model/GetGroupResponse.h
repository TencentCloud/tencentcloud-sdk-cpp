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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_GETGROUPRESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_GETGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cam/v20190116/model/GroupMemberInfo.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * GetGroup返回参数结构体
                */
                class GetGroupResponse : public AbstractModel
                {
                public:
                    GetGroupResponse();
                    ~GetGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用户组 ID
                     * @return GroupId 用户组 ID
                     * 
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取用户组名称
                     * @return GroupName 用户组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取用户组成员数量
                     * @return GroupNum 用户组成员数量
                     * 
                     */
                    uint64_t GetGroupNum() const;

                    /**
                     * 判断参数 GroupNum 是否已赋值
                     * @return GroupNum 是否已赋值
                     * 
                     */
                    bool GroupNumHasBeenSet() const;

                    /**
                     * 获取用户组描述
                     * @return Remark 用户组描述
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取用户组创建时间
                     * @return CreateTime 用户组创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取用户组成员信息
                     * @return UserInfo 用户组成员信息
                     * 
                     */
                    std::vector<GroupMemberInfo> GetUserInfo() const;

                    /**
                     * 判断参数 UserInfo 是否已赋值
                     * @return UserInfo 是否已赋值
                     * 
                     */
                    bool UserInfoHasBeenSet() const;

                private:

                    /**
                     * 用户组 ID
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 用户组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 用户组成员数量
                     */
                    uint64_t m_groupNum;
                    bool m_groupNumHasBeenSet;

                    /**
                     * 用户组描述
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 用户组创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 用户组成员信息
                     */
                    std::vector<GroupMemberInfo> m_userInfo;
                    bool m_userInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_GETGROUPRESPONSE_H_
