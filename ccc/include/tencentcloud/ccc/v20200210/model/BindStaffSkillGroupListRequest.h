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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_BINDSTAFFSKILLGROUPLISTREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_BINDSTAFFSKILLGROUPLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/StaffSkillGroupList.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * BindStaffSkillGroupList请求参数结构体
                */
                class BindStaffSkillGroupListRequest : public AbstractModel
                {
                public:
                    BindStaffSkillGroupListRequest();
                    ~BindStaffSkillGroupListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @return SdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @param _sdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取座席邮箱
                     * @return StaffEmail 座席邮箱
                     * 
                     */
                    std::string GetStaffEmail() const;

                    /**
                     * 设置座席邮箱
                     * @param _staffEmail 座席邮箱
                     * 
                     */
                    void SetStaffEmail(const std::string& _staffEmail);

                    /**
                     * 判断参数 StaffEmail 是否已赋值
                     * @return StaffEmail 是否已赋值
                     * 
                     */
                    bool StaffEmailHasBeenSet() const;

                    /**
                     * 获取绑定技能组列表
                     * @return SkillGroupList 绑定技能组列表
                     * @deprecated
                     */
                    std::vector<int64_t> GetSkillGroupList() const;

                    /**
                     * 设置绑定技能组列表
                     * @param _skillGroupList 绑定技能组列表
                     * @deprecated
                     */
                    void SetSkillGroupList(const std::vector<int64_t>& _skillGroupList);

                    /**
                     * 判断参数 SkillGroupList 是否已赋值
                     * @return SkillGroupList 是否已赋值
                     * @deprecated
                     */
                    bool SkillGroupListHasBeenSet() const;

                    /**
                     * 获取绑定技能组列表(必填)
                     * @return StaffSkillGroupList 绑定技能组列表(必填)
                     * 
                     */
                    std::vector<StaffSkillGroupList> GetStaffSkillGroupList() const;

                    /**
                     * 设置绑定技能组列表(必填)
                     * @param _staffSkillGroupList 绑定技能组列表(必填)
                     * 
                     */
                    void SetStaffSkillGroupList(const std::vector<StaffSkillGroupList>& _staffSkillGroupList);

                    /**
                     * 判断参数 StaffSkillGroupList 是否已赋值
                     * @return StaffSkillGroupList 是否已赋值
                     * 
                     */
                    bool StaffSkillGroupListHasBeenSet() const;

                private:

                    /**
                     * 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 座席邮箱
                     */
                    std::string m_staffEmail;
                    bool m_staffEmailHasBeenSet;

                    /**
                     * 绑定技能组列表
                     */
                    std::vector<int64_t> m_skillGroupList;
                    bool m_skillGroupListHasBeenSet;

                    /**
                     * 绑定技能组列表(必填)
                     */
                    std::vector<StaffSkillGroupList> m_staffSkillGroupList;
                    bool m_staffSkillGroupListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_BINDSTAFFSKILLGROUPLISTREQUEST_H_
