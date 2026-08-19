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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEABTESTUSERREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEABTESTUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeAbTestUser请求参数结构体
                */
                class DescribeAbTestUserRequest : public AbstractModel
                {
                public:
                    DescribeAbTestUserRequest();
                    ~DescribeAbTestUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目名称
                     * @return ProjectName 项目名称
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名称
                     * @param _projectName 项目名称
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取租户ID
                     * @return UserAppIds 租户ID
                     * 
                     */
                    std::vector<uint64_t> GetUserAppIds() const;

                    /**
                     * 设置租户ID
                     * @param _userAppIds 租户ID
                     * 
                     */
                    void SetUserAppIds(const std::vector<uint64_t>& _userAppIds);

                    /**
                     * 判断参数 UserAppIds 是否已赋值
                     * @return UserAppIds 是否已赋值
                     * 
                     */
                    bool UserAppIdsHasBeenSet() const;

                private:

                    /**
                     * 项目名称
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 租户ID
                     */
                    std::vector<uint64_t> m_userAppIds;
                    bool m_userAppIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEABTESTUSERREQUEST_H_
