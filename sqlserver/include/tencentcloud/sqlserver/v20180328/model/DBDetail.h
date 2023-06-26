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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBDETAIL_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBDETAIL_H_

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
                * 数据库信息
                */
                class DBDetail : public AbstractModel
                {
                public:
                    DBDetail();
                    ~DBDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库名称
                     * @return Name 数据库名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置数据库名称
                     * @param _name 数据库名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取字符集
                     * @return Charset 字符集
                     * 
                     */
                    std::string GetCharset() const;

                    /**
                     * 设置字符集
                     * @param _charset 字符集
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

                    /**
                     * 获取数据库创建时间
                     * @return CreateTime 数据库创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置数据库创建时间
                     * @param _createTime 数据库创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取数据库状态。1--创建中， 2--运行中， 3--修改中，-1--删除中
                     * @return Status 数据库状态。1--创建中， 2--运行中， 3--修改中，-1--删除中
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置数据库状态。1--创建中， 2--运行中， 3--修改中，-1--删除中
                     * @param _status 数据库状态。1--创建中， 2--运行中， 3--修改中，-1--删除中
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

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
                     * 获取内部状态。ONLINE表示运行中
                     * @return InternalStatus 内部状态。ONLINE表示运行中
                     * 
                     */
                    std::string GetInternalStatus() const;

                    /**
                     * 设置内部状态。ONLINE表示运行中
                     * @param _internalStatus 内部状态。ONLINE表示运行中
                     * 
                     */
                    void SetInternalStatus(const std::string& _internalStatus);

                    /**
                     * 判断参数 InternalStatus 是否已赋值
                     * @return InternalStatus 是否已赋值
                     * 
                     */
                    bool InternalStatusHasBeenSet() const;

                    /**
                     * 获取是否已开启TDE加密，enable-已加密，disable-未加密
                     * @return Encryption 是否已开启TDE加密，enable-已加密，disable-未加密
                     * 
                     */
                    std::string GetEncryption() const;

                    /**
                     * 设置是否已开启TDE加密，enable-已加密，disable-未加密
                     * @param _encryption 是否已开启TDE加密，enable-已加密，disable-未加密
                     * 
                     */
                    void SetEncryption(const std::string& _encryption);

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                private:

                    /**
                     * 数据库名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 字符集
                     */
                    std::string m_charset;
                    bool m_charsetHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 数据库创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 数据库状态。1--创建中， 2--运行中， 3--修改中，-1--删除中
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 数据库账号权限信息
                     */
                    std::vector<AccountPrivilege> m_accounts;
                    bool m_accountsHasBeenSet;

                    /**
                     * 内部状态。ONLINE表示运行中
                     */
                    std::string m_internalStatus;
                    bool m_internalStatusHasBeenSet;

                    /**
                     * 是否已开启TDE加密，enable-已加密，disable-未加密
                     */
                    std::string m_encryption;
                    bool m_encryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBDETAIL_H_
