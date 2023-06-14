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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_CREATEGROUPWITHMEMBERSREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_CREATEGROUPWITHMEMBERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * CreateGroupWithMembers请求参数结构体
                */
                class CreateGroupWithMembersRequest : public AbstractModel
                {
                public:
                    CreateGroupWithMembersRequest();
                    ~CreateGroupWithMembersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待创建群组名称
                     * @return GroupName 待创建群组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置待创建群组名称
                     * @param _groupName 待创建群组名称
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
                     * 获取低代码平台应用ID
                     * @return SdkAppId 低代码平台应用ID
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置低代码平台应用ID
                     * @param _sdkAppId 低代码平台应用ID
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取默认绑定主讲老师ID
                     * @return TeacherId 默认绑定主讲老师ID
                     * 
                     */
                    std::string GetTeacherId() const;

                    /**
                     * 设置默认绑定主讲老师ID
                     * @param _teacherId 默认绑定主讲老师ID
                     * 
                     */
                    void SetTeacherId(const std::string& _teacherId);

                    /**
                     * 判断参数 TeacherId 是否已赋值
                     * @return TeacherId 是否已赋值
                     * 
                     */
                    bool TeacherIdHasBeenSet() const;

                    /**
                     * 获取群组成员列表,一次性最多200个
                     * @return MemberIds 群组成员列表,一次性最多200个
                     * 
                     */
                    std::vector<std::string> GetMemberIds() const;

                    /**
                     * 设置群组成员列表,一次性最多200个
                     * @param _memberIds 群组成员列表,一次性最多200个
                     * 
                     */
                    void SetMemberIds(const std::vector<std::string>& _memberIds);

                    /**
                     * 判断参数 MemberIds 是否已赋值
                     * @return MemberIds 是否已赋值
                     * 
                     */
                    bool MemberIdsHasBeenSet() const;

                private:

                    /**
                     * 待创建群组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 低代码平台应用ID
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 默认绑定主讲老师ID
                     */
                    std::string m_teacherId;
                    bool m_teacherIdHasBeenSet;

                    /**
                     * 群组成员列表,一次性最多200个
                     */
                    std::vector<std::string> m_memberIds;
                    bool m_memberIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_CREATEGROUPWITHMEMBERSREQUEST_H_
