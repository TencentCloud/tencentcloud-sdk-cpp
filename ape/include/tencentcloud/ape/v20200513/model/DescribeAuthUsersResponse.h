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

#ifndef TENCENTCLOUD_APE_V20200513_MODEL_DESCRIBEAUTHUSERSRESPONSE_H_
#define TENCENTCLOUD_APE_V20200513_MODEL_DESCRIBEAUTHUSERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ape/v20200513/model/AuthInfo.h>


namespace TencentCloud
{
    namespace Ape
    {
        namespace V20200513
        {
            namespace Model
            {
                /**
                * DescribeAuthUsers返回参数结构体
                */
                class DescribeAuthUsersResponse : public AbstractModel
                {
                public:
                    DescribeAuthUsersResponse();
                    ~DescribeAuthUsersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取授权人信息数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Users 授权人信息数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AuthInfo> GetUsers() const;

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     * 
                     */
                    bool UsersHasBeenSet() const;

                    /**
                     * 获取总记录数
                     * @return TotalCount 总记录数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取是否是老策略用户
                     * @return OldUser 是否是老策略用户
                     * 
                     */
                    bool GetOldUser() const;

                    /**
                     * 判断参数 OldUser 是否已赋值
                     * @return OldUser 是否已赋值
                     * 
                     */
                    bool OldUserHasBeenSet() const;

                private:

                    /**
                     * 授权人信息数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AuthInfo> m_users;
                    bool m_usersHasBeenSet;

                    /**
                     * 总记录数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 是否是老策略用户
                     */
                    bool m_oldUser;
                    bool m_oldUserHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APE_V20200513_MODEL_DESCRIBEAUTHUSERSRESPONSE_H_
