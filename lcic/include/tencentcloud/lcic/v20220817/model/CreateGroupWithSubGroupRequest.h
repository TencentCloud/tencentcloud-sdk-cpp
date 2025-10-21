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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_CREATEGROUPWITHSUBGROUPREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_CREATEGROUPWITHSUBGROUPREQUEST_H_

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
                * CreateGroupWithSubGroup请求参数结构体
                */
                class CreateGroupWithSubGroupRequest : public AbstractModel
                {
                public:
                    CreateGroupWithSubGroupRequest();
                    ~CreateGroupWithSubGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待创建的新群组名
                     * @return GroupName 待创建的新群组名
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置待创建的新群组名
                     * @param _groupName 待创建的新群组名
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
                     * 获取子群组ID列表，子群组ID不能重复，最多40个
                     * @return SubGroupIds 子群组ID列表，子群组ID不能重复，最多40个
                     * 
                     */
                    std::vector<std::string> GetSubGroupIds() const;

                    /**
                     * 设置子群组ID列表，子群组ID不能重复，最多40个
                     * @param _subGroupIds 子群组ID列表，子群组ID不能重复，最多40个
                     * 
                     */
                    void SetSubGroupIds(const std::vector<std::string>& _subGroupIds);

                    /**
                     * 判断参数 SubGroupIds 是否已赋值
                     * @return SubGroupIds 是否已赋值
                     * 
                     */
                    bool SubGroupIdsHasBeenSet() const;

                    /**
                     * 获取群组默认主讲老师ID
                     * @return TeacherId 群组默认主讲老师ID
                     * 
                     */
                    std::string GetTeacherId() const;

                    /**
                     * 设置群组默认主讲老师ID
                     * @param _teacherId 群组默认主讲老师ID
                     * 
                     */
                    void SetTeacherId(const std::string& _teacherId);

                    /**
                     * 判断参数 TeacherId 是否已赋值
                     * @return TeacherId 是否已赋值
                     * 
                     */
                    bool TeacherIdHasBeenSet() const;

                private:

                    /**
                     * 待创建的新群组名
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 低代码平台应用ID
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 子群组ID列表，子群组ID不能重复，最多40个
                     */
                    std::vector<std::string> m_subGroupIds;
                    bool m_subGroupIdsHasBeenSet;

                    /**
                     * 群组默认主讲老师ID
                     */
                    std::string m_teacherId;
                    bool m_teacherIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_CREATEGROUPWITHSUBGROUPREQUEST_H_
