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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUSERROLESRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUSERROLESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/UserRole.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeUserRoles返回参数结构体
                */
                class DescribeUserRolesResponse : public AbstractModel
                {
                public:
                    DescribeUserRolesResponse();
                    ~DescribeUserRolesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合列举条件的总数量
                     * @return Total 符合列举条件的总数量
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取用户角色信息
                     * @return UserRoles 用户角色信息
                     * 
                     */
                    std::vector<UserRole> GetUserRoles() const;

                    /**
                     * 判断参数 UserRoles 是否已赋值
                     * @return UserRoles 是否已赋值
                     * 
                     */
                    bool UserRolesHasBeenSet() const;

                private:

                    /**
                     * 符合列举条件的总数量
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 用户角色信息
                     */
                    std::vector<UserRole> m_userRoles;
                    bool m_userRolesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUSERROLESRESPONSE_H_
