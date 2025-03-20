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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DATABASE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DATABASE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 描述数据库详细信息，包括所有者、字符编码等
                */
                class Database : public AbstractModel
                {
                public:
                    Database();
                    ~Database() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库名
                     * @return DatabaseName 数据库名
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名
                     * @param _databaseName 数据库名
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取数据库所有者
                     * @return DatabaseOwner 数据库所有者
                     * 
                     */
                    std::string GetDatabaseOwner() const;

                    /**
                     * 设置数据库所有者
                     * @param _databaseOwner 数据库所有者
                     * 
                     */
                    void SetDatabaseOwner(const std::string& _databaseOwner);

                    /**
                     * 判断参数 DatabaseOwner 是否已赋值
                     * @return DatabaseOwner 是否已赋值
                     * 
                     */
                    bool DatabaseOwnerHasBeenSet() const;

                    /**
                     * 获取数据库字符编码
                     * @return Encoding 数据库字符编码
                     * 
                     */
                    std::string GetEncoding() const;

                    /**
                     * 设置数据库字符编码
                     * @param _encoding 数据库字符编码
                     * 
                     */
                    void SetEncoding(const std::string& _encoding);

                    /**
                     * 判断参数 Encoding 是否已赋值
                     * @return Encoding 是否已赋值
                     * 
                     */
                    bool EncodingHasBeenSet() const;

                    /**
                     * 获取数据库排序规则
                     * @return Collate 数据库排序规则
                     * 
                     */
                    std::string GetCollate() const;

                    /**
                     * 设置数据库排序规则
                     * @param _collate 数据库排序规则
                     * 
                     */
                    void SetCollate(const std::string& _collate);

                    /**
                     * 判断参数 Collate 是否已赋值
                     * @return Collate 是否已赋值
                     * 
                     */
                    bool CollateHasBeenSet() const;

                    /**
                     * 获取数据库字符分类
                     * @return Ctype 数据库字符分类
                     * 
                     */
                    std::string GetCtype() const;

                    /**
                     * 设置数据库字符分类
                     * @param _ctype 数据库字符分类
                     * 
                     */
                    void SetCtype(const std::string& _ctype);

                    /**
                     * 判断参数 Ctype 是否已赋值
                     * @return Ctype 是否已赋值
                     * 
                     */
                    bool CtypeHasBeenSet() const;

                    /**
                     * 获取数据库是否允许连接
                     * @return AllowConn 数据库是否允许连接
                     * 
                     */
                    bool GetAllowConn() const;

                    /**
                     * 设置数据库是否允许连接
                     * @param _allowConn 数据库是否允许连接
                     * 
                     */
                    void SetAllowConn(const bool& _allowConn);

                    /**
                     * 判断参数 AllowConn 是否已赋值
                     * @return AllowConn 是否已赋值
                     * 
                     */
                    bool AllowConnHasBeenSet() const;

                    /**
                     * 获取数据库最大连接数，-1表示无限制
                     * @return ConnLimit 数据库最大连接数，-1表示无限制
                     * 
                     */
                    int64_t GetConnLimit() const;

                    /**
                     * 设置数据库最大连接数，-1表示无限制
                     * @param _connLimit 数据库最大连接数，-1表示无限制
                     * 
                     */
                    void SetConnLimit(const int64_t& _connLimit);

                    /**
                     * 判断参数 ConnLimit 是否已赋值
                     * @return ConnLimit 是否已赋值
                     * 
                     */
                    bool ConnLimitHasBeenSet() const;

                    /**
                     * 获取数据库权限列表
                     * @return Privileges 数据库权限列表
                     * 
                     */
                    std::string GetPrivileges() const;

                    /**
                     * 设置数据库权限列表
                     * @param _privileges 数据库权限列表
                     * 
                     */
                    void SetPrivileges(const std::string& _privileges);

                    /**
                     * 判断参数 Privileges 是否已赋值
                     * @return Privileges 是否已赋值
                     * 
                     */
                    bool PrivilegesHasBeenSet() const;

                private:

                    /**
                     * 数据库名
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 数据库所有者
                     */
                    std::string m_databaseOwner;
                    bool m_databaseOwnerHasBeenSet;

                    /**
                     * 数据库字符编码
                     */
                    std::string m_encoding;
                    bool m_encodingHasBeenSet;

                    /**
                     * 数据库排序规则
                     */
                    std::string m_collate;
                    bool m_collateHasBeenSet;

                    /**
                     * 数据库字符分类
                     */
                    std::string m_ctype;
                    bool m_ctypeHasBeenSet;

                    /**
                     * 数据库是否允许连接
                     */
                    bool m_allowConn;
                    bool m_allowConnHasBeenSet;

                    /**
                     * 数据库最大连接数，-1表示无限制
                     */
                    int64_t m_connLimit;
                    bool m_connLimitHasBeenSet;

                    /**
                     * 数据库权限列表
                     */
                    std::string m_privileges;
                    bool m_privilegesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DATABASE_H_
