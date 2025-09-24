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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_RESETDBINSTANCEPASSWORDREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_RESETDBINSTANCEPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * ResetDBInstancePassword请求参数结构体
                */
                class ResetDBInstancePasswordRequest : public AbstractModel
                {
                public:
                    ResetDBInstancePasswordRequest();
                    ~ResetDBInstancePasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定实例 ID。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * @return InstanceId 指定实例 ID。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置指定实例 ID。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * @param _instanceId 指定实例 ID。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取指定需修改密码的账号名称。可通过接口 [DescribeAccountUsers](https://cloud.tencent.com/document/product/240/80800) 获取账号列表，复制需修改密码的账号。
                     * @return UserName 指定需修改密码的账号名称。可通过接口 [DescribeAccountUsers](https://cloud.tencent.com/document/product/240/80800) 获取账号列表，复制需修改密码的账号。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置指定需修改密码的账号名称。可通过接口 [DescribeAccountUsers](https://cloud.tencent.com/document/product/240/80800) 获取账号列表，复制需修改密码的账号。
                     * @param _userName 指定需修改密码的账号名称。可通过接口 [DescribeAccountUsers](https://cloud.tencent.com/document/product/240/80800) 获取账号列表，复制需修改密码的账号。
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取指定账户的新密码。密码复杂度要求：
- 8-32个字符长度。
- 至少包含字母、数字和字符（!@#%^\*()\_）中的两种。
                     * @return Password 指定账户的新密码。密码复杂度要求：
- 8-32个字符长度。
- 至少包含字母、数字和字符（!@#%^\*()\_）中的两种。
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置指定账户的新密码。密码复杂度要求：
- 8-32个字符长度。
- 至少包含字母、数字和字符（!@#%^\*()\_）中的两种。
                     * @param _password 指定账户的新密码。密码复杂度要求：
- 8-32个字符长度。
- 至少包含字母、数字和字符（!@#%^\*()\_）中的两种。
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * 指定实例 ID。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 指定需修改密码的账号名称。可通过接口 [DescribeAccountUsers](https://cloud.tencent.com/document/product/240/80800) 获取账号列表，复制需修改密码的账号。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 指定账户的新密码。密码复杂度要求：
- 8-32个字符长度。
- 至少包含字母、数字和字符（!@#%^\*()\_）中的两种。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_RESETDBINSTANCEPASSWORDREQUEST_H_
