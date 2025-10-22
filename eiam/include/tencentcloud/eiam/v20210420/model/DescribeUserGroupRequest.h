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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEUSERGROUPREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEUSERGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeUserGroup请求参数结构体
                */
                class DescribeUserGroupRequest : public AbstractModel
                {
                public:
                    DescribeUserGroupRequest();
                    ~DescribeUserGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户组ID，是用户组的全局唯一标识。
                     * @return UserGroupId 用户组ID，是用户组的全局唯一标识。
                     * 
                     */
                    std::string GetUserGroupId() const;

                    /**
                     * 设置用户组ID，是用户组的全局唯一标识。
                     * @param _userGroupId 用户组ID，是用户组的全局唯一标识。
                     * 
                     */
                    void SetUserGroupId(const std::string& _userGroupId);

                    /**
                     * 判断参数 UserGroupId 是否已赋值
                     * @return UserGroupId 是否已赋值
                     * 
                     */
                    bool UserGroupIdHasBeenSet() const;

                private:

                    /**
                     * 用户组ID，是用户组的全局唯一标识。
                     */
                    std::string m_userGroupId;
                    bool m_userGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEUSERGROUPREQUEST_H_
