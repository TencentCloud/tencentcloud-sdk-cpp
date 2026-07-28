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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_NEWACCOUNT_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_NEWACCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 新建账号
                */
                class NewAccount : public AbstractModel
                {
                public:
                    NewAccount();
                    ~NewAccount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>账户名，包含字母数字_,以字母开头，字母或数字结尾，长度1-30</p>
                     * @return AccountName <p>账户名，包含字母数字_,以字母开头，字母或数字结尾，长度1-30</p>
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置<p>账户名，包含字母数字_,以字母开头，字母或数字结尾，长度1-30</p>
                     * @param _accountName <p>账户名，包含字母数字_,以字母开头，字母或数字结尾，长度1-30</p>
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取<p>主机(%或ipv4地址)</p>
                     * @return Host <p>主机(%或ipv4地址)</p>
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>主机(%或ipv4地址)</p>
                     * @param _host <p>主机(%或ipv4地址)</p>
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取<p>密码，密码长度范围为8到64个字符</p>
                     * @return AccountPassword <p>密码，密码长度范围为8到64个字符</p>
                     * 
                     */
                    std::string GetAccountPassword() const;

                    /**
                     * 设置<p>密码，密码长度范围为8到64个字符</p>
                     * @param _accountPassword <p>密码，密码长度范围为8到64个字符</p>
                     * 
                     */
                    void SetAccountPassword(const std::string& _accountPassword);

                    /**
                     * 判断参数 AccountPassword 是否已赋值
                     * @return AccountPassword 是否已赋值
                     * 
                     */
                    bool AccountPasswordHasBeenSet() const;

                    /**
                     * 获取<p>是否开启密码轮转(0:关闭;1:开启)</p>
                     * @return PasswordRotation <p>是否开启密码轮转(0:关闭;1:开启)</p>
                     * 
                     */
                    int64_t GetPasswordRotation() const;

                    /**
                     * 设置<p>是否开启密码轮转(0:关闭;1:开启)</p>
                     * @param _passwordRotation <p>是否开启密码轮转(0:关闭;1:开启)</p>
                     * 
                     */
                    void SetPasswordRotation(const int64_t& _passwordRotation);

                    /**
                     * 判断参数 PasswordRotation 是否已赋值
                     * @return PasswordRotation 是否已赋值
                     * 
                     */
                    bool PasswordRotationHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>用户最大连接数，不能大于10240</p>
                     * @return MaxUserConnections <p>用户最大连接数，不能大于10240</p>
                     * 
                     */
                    int64_t GetMaxUserConnections() const;

                    /**
                     * 设置<p>用户最大连接数，不能大于10240</p>
                     * @param _maxUserConnections <p>用户最大连接数，不能大于10240</p>
                     * 
                     */
                    void SetMaxUserConnections(const int64_t& _maxUserConnections);

                    /**
                     * 判断参数 MaxUserConnections 是否已赋值
                     * @return MaxUserConnections 是否已赋值
                     * 
                     */
                    bool MaxUserConnectionsHasBeenSet() const;

                private:

                    /**
                     * <p>账户名，包含字母数字_,以字母开头，字母或数字结尾，长度1-30</p>
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * <p>主机(%或ipv4地址)</p>
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>密码，密码长度范围为8到64个字符</p>
                     */
                    std::string m_accountPassword;
                    bool m_accountPasswordHasBeenSet;

                    /**
                     * <p>是否开启密码轮转(0:关闭;1:开启)</p>
                     */
                    int64_t m_passwordRotation;
                    bool m_passwordRotationHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>用户最大连接数，不能大于10240</p>
                     */
                    int64_t m_maxUserConnections;
                    bool m_maxUserConnectionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_NEWACCOUNT_H_
