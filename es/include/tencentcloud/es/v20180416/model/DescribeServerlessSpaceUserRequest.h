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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBESERVERLESSSPACEUSERREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBESERVERLESSSPACEUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeServerlessSpaceUser请求参数结构体
                */
                class DescribeServerlessSpaceUserRequest : public AbstractModel
                {
                public:
                    DescribeServerlessSpaceUserRequest();
                    ~DescribeServerlessSpaceUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取空间的ID
                     * @return SpaceId 空间的ID
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置空间的ID
                     * @param _spaceId 空间的ID
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取游标
                     * @return Offset 游标
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置游标
                     * @param _offset 游标
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取页条数
                     * @return Limit 页条数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置页条数
                     * @param _limit 页条数
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取用户名列表过滤
                     * @return UserNames 用户名列表过滤
                     * 
                     */
                    std::vector<std::string> GetUserNames() const;

                    /**
                     * 设置用户名列表过滤
                     * @param _userNames 用户名列表过滤
                     * 
                     */
                    void SetUserNames(const std::vector<std::string>& _userNames);

                    /**
                     * 判断参数 UserNames 是否已赋值
                     * @return UserNames 是否已赋值
                     * 
                     */
                    bool UserNamesHasBeenSet() const;

                    /**
                     * 获取用户类型
                     * @return UserTypes 用户类型
                     * 
                     */
                    std::vector<int64_t> GetUserTypes() const;

                    /**
                     * 设置用户类型
                     * @param _userTypes 用户类型
                     * 
                     */
                    void SetUserTypes(const std::vector<int64_t>& _userTypes);

                    /**
                     * 判断参数 UserTypes 是否已赋值
                     * @return UserTypes 是否已赋值
                     * 
                     */
                    bool UserTypesHasBeenSet() const;

                    /**
                     * 获取权限类型
                     * @return PrivilegeTypes 权限类型
                     * 
                     */
                    std::vector<int64_t> GetPrivilegeTypes() const;

                    /**
                     * 设置权限类型
                     * @param _privilegeTypes 权限类型
                     * 
                     */
                    void SetPrivilegeTypes(const std::vector<int64_t>& _privilegeTypes);

                    /**
                     * 判断参数 PrivilegeTypes 是否已赋值
                     * @return PrivilegeTypes 是否已赋值
                     * 
                     */
                    bool PrivilegeTypesHasBeenSet() const;

                private:

                    /**
                     * 空间的ID
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * 游标
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 页条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 用户名列表过滤
                     */
                    std::vector<std::string> m_userNames;
                    bool m_userNamesHasBeenSet;

                    /**
                     * 用户类型
                     */
                    std::vector<int64_t> m_userTypes;
                    bool m_userTypesHasBeenSet;

                    /**
                     * 权限类型
                     */
                    std::vector<int64_t> m_privilegeTypes;
                    bool m_privilegeTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBESERVERLESSSPACEUSERREQUEST_H_
