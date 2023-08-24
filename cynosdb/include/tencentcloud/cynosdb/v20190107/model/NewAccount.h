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
                * x08新创建的账号
                */
                class NewAccount : public AbstractModel
                {
                public:
                    NewAccount();
                    ~NewAccount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账户名，包含字母数字_,以字母开头，字母或数字结尾，长度1-30
                     * @return AccountName 账户名，包含字母数字_,以字母开头，字母或数字结尾，长度1-30
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置账户名，包含字母数字_,以字母开头，字母或数字结尾，长度1-30
                     * @param _accountName 账户名，包含字母数字_,以字母开头，字母或数字结尾，长度1-30
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
                     * 获取密码，密码长度范围为8到64个字符
                     * @return AccountPassword 密码，密码长度范围为8到64个字符
                     * 
                     */
                    std::string GetAccountPassword() const;

                    /**
                     * 设置密码，密码长度范围为8到64个字符
                     * @param _accountPassword 密码，密码长度范围为8到64个字符
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
                     * 获取主机(%或ipv4地址)
                     * @return Host 主机(%或ipv4地址)
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置主机(%或ipv4地址)
                     * @param _host 主机(%或ipv4地址)
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
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
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
                     * 获取用户最大连接数，不能大于10240
                     * @return MaxUserConnections 用户最大连接数，不能大于10240
                     * 
                     */
                    int64_t GetMaxUserConnections() const;

                    /**
                     * 设置用户最大连接数，不能大于10240
                     * @param _maxUserConnections 用户最大连接数，不能大于10240
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
                     * 账户名，包含字母数字_,以字母开头，字母或数字结尾，长度1-30
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * 密码，密码长度范围为8到64个字符
                     */
                    std::string m_accountPassword;
                    bool m_accountPasswordHasBeenSet;

                    /**
                     * 主机(%或ipv4地址)
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 用户最大连接数，不能大于10240
                     */
                    int64_t m_maxUserConnections;
                    bool m_maxUserConnectionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_NEWACCOUNT_H_
