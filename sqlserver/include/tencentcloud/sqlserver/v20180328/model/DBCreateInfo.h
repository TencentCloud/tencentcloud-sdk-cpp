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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBCREATEINFO_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBCREATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/AccountPrivilege.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 数据库创建信息
                */
                class DBCreateInfo : public AbstractModel
                {
                public:
                    DBCreateInfo();
                    ~DBCreateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库名
                     * @return DBName 数据库名
                     * 
                     */
                    std::string GetDBName() const;

                    /**
                     * 设置数据库名
                     * @param _dBName 数据库名
                     * 
                     */
                    void SetDBName(const std::string& _dBName);

                    /**
                     * 判断参数 DBName 是否已赋值
                     * @return DBName 是否已赋值
                     * 
                     */
                    bool DBNameHasBeenSet() const;

                    /**
                     * 获取字符集。可通过接口DescribeDBCharsets查到支持的字符集，不填默认为Chinese_PRC_CI_AS。
                     * @return Charset 字符集。可通过接口DescribeDBCharsets查到支持的字符集，不填默认为Chinese_PRC_CI_AS。
                     * 
                     */
                    std::string GetCharset() const;

                    /**
                     * 设置字符集。可通过接口DescribeDBCharsets查到支持的字符集，不填默认为Chinese_PRC_CI_AS。
                     * @param _charset 字符集。可通过接口DescribeDBCharsets查到支持的字符集，不填默认为Chinese_PRC_CI_AS。
                     * 
                     */
                    void SetCharset(const std::string& _charset);

                    /**
                     * 判断参数 Charset 是否已赋值
                     * @return Charset 是否已赋值
                     * 
                     */
                    bool CharsetHasBeenSet() const;

                    /**
                     * 获取数据库账号权限信息
                     * @return Accounts 数据库账号权限信息
                     * 
                     */
                    std::vector<AccountPrivilege> GetAccounts() const;

                    /**
                     * 设置数据库账号权限信息
                     * @param _accounts 数据库账号权限信息
                     * 
                     */
                    void SetAccounts(const std::vector<AccountPrivilege>& _accounts);

                    /**
                     * 判断参数 Accounts 是否已赋值
                     * @return Accounts 是否已赋值
                     * 
                     */
                    bool AccountsHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 数据库名
                     */
                    std::string m_dBName;
                    bool m_dBNameHasBeenSet;

                    /**
                     * 字符集。可通过接口DescribeDBCharsets查到支持的字符集，不填默认为Chinese_PRC_CI_AS。
                     */
                    std::string m_charset;
                    bool m_charsetHasBeenSet;

                    /**
                     * 数据库账号权限信息
                     */
                    std::vector<AccountPrivilege> m_accounts;
                    bool m_accountsHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBCREATEINFO_H_
