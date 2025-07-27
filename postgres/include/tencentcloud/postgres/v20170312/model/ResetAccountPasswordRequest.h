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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_RESETACCOUNTPASSWORDREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_RESETACCOUNTPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ResetAccountPassword请求参数结构体
                */
                class ResetAccountPasswordRequest : public AbstractModel
                {
                public:
                    ResetAccountPasswordRequest();
                    ~ResetAccountPasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，形如postgres-4wdeb0zv。可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/409/16773)接口获取
                     * @return DBInstanceId 实例ID，形如postgres-4wdeb0zv。可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/409/16773)接口获取
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例ID，形如postgres-4wdeb0zv。可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/409/16773)接口获取
                     * @param _dBInstanceId 实例ID，形如postgres-4wdeb0zv。可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/409/16773)接口获取
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取实例账户名。可通过[DescribeAccounts](https://cloud.tencent.com/document/api/409/18109)接口获取
                     * @return UserName 实例账户名。可通过[DescribeAccounts](https://cloud.tencent.com/document/api/409/18109)接口获取
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置实例账户名。可通过[DescribeAccounts](https://cloud.tencent.com/document/api/409/18109)接口获取
                     * @param _userName 实例账户名。可通过[DescribeAccounts](https://cloud.tencent.com/document/api/409/18109)接口获取
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
                     * 获取UserName账户对应的新密码。
密码设置规则如下：
- 长度8~ 32位，推荐使用12位以上的密码
- 不能以" / "开头
- 必须包含以下四项:
  1.    小写字母a ~ z
  2.    大写字母 A ～ Z
  3.    数字 0 ～ 9
  4.    特殊字符 ()`~!@#$%^&*-+=_|{}[]:<>,.?/
                     * @return Password UserName账户对应的新密码。
密码设置规则如下：
- 长度8~ 32位，推荐使用12位以上的密码
- 不能以" / "开头
- 必须包含以下四项:
  1.    小写字母a ~ z
  2.    大写字母 A ～ Z
  3.    数字 0 ～ 9
  4.    特殊字符 ()`~!@#$%^&*-+=_|{}[]:<>,.?/
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置UserName账户对应的新密码。
密码设置规则如下：
- 长度8~ 32位，推荐使用12位以上的密码
- 不能以" / "开头
- 必须包含以下四项:
  1.    小写字母a ~ z
  2.    大写字母 A ～ Z
  3.    数字 0 ～ 9
  4.    特殊字符 ()`~!@#$%^&*-+=_|{}[]:<>,.?/
                     * @param _password UserName账户对应的新密码。
密码设置规则如下：
- 长度8~ 32位，推荐使用12位以上的密码
- 不能以" / "开头
- 必须包含以下四项:
  1.    小写字母a ~ z
  2.    大写字母 A ～ Z
  3.    数字 0 ～ 9
  4.    特殊字符 ()`~!@#$%^&*-+=_|{}[]:<>,.?/
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
                     * 实例ID，形如postgres-4wdeb0zv。可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/409/16773)接口获取
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 实例账户名。可通过[DescribeAccounts](https://cloud.tencent.com/document/api/409/18109)接口获取
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * UserName账户对应的新密码。
密码设置规则如下：
- 长度8~ 32位，推荐使用12位以上的密码
- 不能以" / "开头
- 必须包含以下四项:
  1.    小写字母a ~ z
  2.    大写字母 A ～ Z
  3.    数字 0 ～ 9
  4.    特殊字符 ()`~!@#$%^&*-+=_|{}[]:<>,.?/
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_RESETACCOUNTPASSWORDREQUEST_H_
