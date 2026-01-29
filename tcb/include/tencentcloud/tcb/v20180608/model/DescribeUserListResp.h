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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEUSERLISTRESP_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEUSERLISTRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/User.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 查询用户返回结果
                */
                class DescribeUserListResp : public AbstractModel
                {
                public:
                    DescribeUserListResp();
                    ~DescribeUserListResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户总数
                     * @return Total 用户总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置用户总数
                     * @param _total 用户总数
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取用户列表
                     * @return UserList 用户列表
                     * 
                     */
                    std::vector<User> GetUserList() const;

                    /**
                     * 设置用户列表
                     * @param _userList 用户列表
                     * 
                     */
                    void SetUserList(const std::vector<User>& _userList);

                    /**
                     * 判断参数 UserList 是否已赋值
                     * @return UserList 是否已赋值
                     * 
                     */
                    bool UserListHasBeenSet() const;

                private:

                    /**
                     * 用户总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 用户列表
                     */
                    std::vector<User> m_userList;
                    bool m_userListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEUSERLISTRESP_H_
