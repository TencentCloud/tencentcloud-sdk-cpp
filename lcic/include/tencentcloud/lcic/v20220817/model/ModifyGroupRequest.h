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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_MODIFYGROUPREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_MODIFYGROUPREQUEST_H_

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
                * ModifyGroup请求参数结构体
                */
                class ModifyGroupRequest : public AbstractModel
                {
                public:
                    ModifyGroupRequest();
                    ~ModifyGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要修改的群组ID
                     * @return GroupId 需要修改的群组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置需要修改的群组ID
                     * @param _groupId 需要修改的群组ID
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
                     * 获取待修改的群组名称
                     * @return GroupName 待修改的群组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置待修改的群组名称
                     * @param _groupName 待修改的群组名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                private:

                    /**
                     * 需要修改的群组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

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
                     * 待修改的群组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_MODIFYGROUPREQUEST_H_
