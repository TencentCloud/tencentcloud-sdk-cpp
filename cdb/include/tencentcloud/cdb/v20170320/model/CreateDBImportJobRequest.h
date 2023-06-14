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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDBIMPORTJOBREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDBIMPORTJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * CreateDBImportJob请求参数结构体
                */
                class CreateDBImportJobRequest : public AbstractModel
                {
                public:
                    CreateDBImportJobRequest();
                    ~CreateDBImportJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例的 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * @return InstanceId 实例的 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例的 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * @param _instanceId 实例的 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
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
                     * 获取云数据库的用户名。
                     * @return User 云数据库的用户名。
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置云数据库的用户名。
                     * @param _user 云数据库的用户名。
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取文件名称。该文件是指用户已上传到腾讯云的文件，仅支持.sql文件。
                     * @return FileName 文件名称。该文件是指用户已上传到腾讯云的文件，仅支持.sql文件。
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名称。该文件是指用户已上传到腾讯云的文件，仅支持.sql文件。
                     * @param _fileName 文件名称。该文件是指用户已上传到腾讯云的文件，仅支持.sql文件。
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取云数据库实例 User 账号的密码。
                     * @return Password 云数据库实例 User 账号的密码。
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置云数据库实例 User 账号的密码。
                     * @param _password 云数据库实例 User 账号的密码。
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取导入的目标数据库名，不传表示不指定数据库。
                     * @return DbName 导入的目标数据库名，不传表示不指定数据库。
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置导入的目标数据库名，不传表示不指定数据库。
                     * @param _dbName 导入的目标数据库名，不传表示不指定数据库。
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取腾讯云COS文件链接。 用户需要指定 FileName 或者 CosUrl 其中一个。 COS文件需要是 .sql 文件。
                     * @return CosUrl 腾讯云COS文件链接。 用户需要指定 FileName 或者 CosUrl 其中一个。 COS文件需要是 .sql 文件。
                     * 
                     */
                    std::string GetCosUrl() const;

                    /**
                     * 设置腾讯云COS文件链接。 用户需要指定 FileName 或者 CosUrl 其中一个。 COS文件需要是 .sql 文件。
                     * @param _cosUrl 腾讯云COS文件链接。 用户需要指定 FileName 或者 CosUrl 其中一个。 COS文件需要是 .sql 文件。
                     * 
                     */
                    void SetCosUrl(const std::string& _cosUrl);

                    /**
                     * 判断参数 CosUrl 是否已赋值
                     * @return CosUrl 是否已赋值
                     * 
                     */
                    bool CosUrlHasBeenSet() const;

                private:

                    /**
                     * 实例的 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 云数据库的用户名。
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 文件名称。该文件是指用户已上传到腾讯云的文件，仅支持.sql文件。
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 云数据库实例 User 账号的密码。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 导入的目标数据库名，不传表示不指定数据库。
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 腾讯云COS文件链接。 用户需要指定 FileName 或者 CosUrl 其中一个。 COS文件需要是 .sql 文件。
                     */
                    std::string m_cosUrl;
                    bool m_cosUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDBIMPORTJOBREQUEST_H_
