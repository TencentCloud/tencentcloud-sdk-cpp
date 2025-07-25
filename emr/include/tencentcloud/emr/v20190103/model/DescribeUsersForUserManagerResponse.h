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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEUSERSFORUSERMANAGERRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEUSERSFORUSERMANAGERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/UserManagerUserBriefInfo.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeUsersForUserManager返回参数结构体
                */
                class DescribeUsersForUserManagerResponse : public AbstractModel
                {
                public:
                    DescribeUsersForUserManagerResponse();
                    ~DescribeUsersForUserManagerResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数
                     * @return TotalCnt 总数
                     * 
                     */
                    int64_t GetTotalCnt() const;

                    /**
                     * 判断参数 TotalCnt 是否已赋值
                     * @return TotalCnt 是否已赋值
                     * 
                     */
                    bool TotalCntHasBeenSet() const;

                    /**
                     * 获取用户信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserManagerUserList 用户信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<UserManagerUserBriefInfo> GetUserManagerUserList() const;

                    /**
                     * 判断参数 UserManagerUserList 是否已赋值
                     * @return UserManagerUserList 是否已赋值
                     * 
                     */
                    bool UserManagerUserListHasBeenSet() const;

                private:

                    /**
                     * 总数
                     */
                    int64_t m_totalCnt;
                    bool m_totalCntHasBeenSet;

                    /**
                     * 用户信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UserManagerUserBriefInfo> m_userManagerUserList;
                    bool m_userManagerUserListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEUSERSFORUSERMANAGERRESPONSE_H_
