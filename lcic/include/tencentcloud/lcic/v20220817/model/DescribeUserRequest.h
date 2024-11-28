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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEUSERREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEUSERREQUEST_H_

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
                * DescribeUser请求参数结构体
                */
                class DescribeUserRequest : public AbstractModel
                {
                public:
                    DescribeUserRequest();
                    ~DescribeUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户id。支持通过 user_id 或 OriginId 查询用户信息，优先使用 user_id 进行查询。
                     * @return UserId 用户id。支持通过 user_id 或 OriginId 查询用户信息，优先使用 user_id 进行查询。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户id。支持通过 user_id 或 OriginId 查询用户信息，优先使用 user_id 进行查询。
                     * @param _userId 用户id。支持通过 user_id 或 OriginId 查询用户信息，优先使用 user_id 进行查询。
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取用户在客户系统的Id。支持通过 user_id 或 OriginId 查询用户信息，优先使用 user_id 进行查询（UserId不为空时，OriginId不生效）。
                     * @return OriginId 用户在客户系统的Id。支持通过 user_id 或 OriginId 查询用户信息，优先使用 user_id 进行查询（UserId不为空时，OriginId不生效）。
                     * 
                     */
                    std::string GetOriginId() const;

                    /**
                     * 设置用户在客户系统的Id。支持通过 user_id 或 OriginId 查询用户信息，优先使用 user_id 进行查询（UserId不为空时，OriginId不生效）。
                     * @param _originId 用户在客户系统的Id。支持通过 user_id 或 OriginId 查询用户信息，优先使用 user_id 进行查询（UserId不为空时，OriginId不生效）。
                     * 
                     */
                    void SetOriginId(const std::string& _originId);

                    /**
                     * 判断参数 OriginId 是否已赋值
                     * @return OriginId 是否已赋值
                     * 
                     */
                    bool OriginIdHasBeenSet() const;

                private:

                    /**
                     * 用户id。支持通过 user_id 或 OriginId 查询用户信息，优先使用 user_id 进行查询。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户在客户系统的Id。支持通过 user_id 或 OriginId 查询用户信息，优先使用 user_id 进行查询（UserId不为空时，OriginId不生效）。
                     */
                    std::string m_originId;
                    bool m_originIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEUSERREQUEST_H_
