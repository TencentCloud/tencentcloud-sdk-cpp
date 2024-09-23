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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEDATABASEREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEDATABASEREQUEST_H_

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
                * CreateDatabase请求参数结构体
                */
                class CreateDatabaseRequest : public AbstractModel
                {
                public:
                    CreateDatabaseRequest();
                    ~CreateDatabaseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，形如postgres-6fego161
                     * @return DBInstanceId 实例ID，形如postgres-6fego161
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例ID，形如postgres-6fego161
                     * @param _dBInstanceId 实例ID，形如postgres-6fego161
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
                     * 获取创建的数据库名
                     * @return DatabaseName 创建的数据库名
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置创建的数据库名
                     * @param _databaseName 创建的数据库名
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
                     * 获取数据库的所有者
                     * @return DatabaseOwner 数据库的所有者
                     * 
                     */
                    std::string GetDatabaseOwner() const;

                    /**
                     * 设置数据库的所有者
                     * @param _databaseOwner 数据库的所有者
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
                     * 获取数据库的字符编码
                     * @return Encoding 数据库的字符编码
                     * 
                     */
                    std::string GetEncoding() const;

                    /**
                     * 设置数据库的字符编码
                     * @param _encoding 数据库的字符编码
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
                     * 获取数据库的排序规则
                     * @return Collate 数据库的排序规则
                     * 
                     */
                    std::string GetCollate() const;

                    /**
                     * 设置数据库的排序规则
                     * @param _collate 数据库的排序规则
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
                     * 获取数据库的字符分类
                     * @return Ctype 数据库的字符分类
                     * 
                     */
                    std::string GetCtype() const;

                    /**
                     * 设置数据库的字符分类
                     * @param _ctype 数据库的字符分类
                     * 
                     */
                    void SetCtype(const std::string& _ctype);

                    /**
                     * 判断参数 Ctype 是否已赋值
                     * @return Ctype 是否已赋值
                     * 
                     */
                    bool CtypeHasBeenSet() const;

                private:

                    /**
                     * 实例ID，形如postgres-6fego161
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 创建的数据库名
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 数据库的所有者
                     */
                    std::string m_databaseOwner;
                    bool m_databaseOwnerHasBeenSet;

                    /**
                     * 数据库的字符编码
                     */
                    std::string m_encoding;
                    bool m_encodingHasBeenSet;

                    /**
                     * 数据库的排序规则
                     */
                    std::string m_collate;
                    bool m_collateHasBeenSet;

                    /**
                     * 数据库的字符分类
                     */
                    std::string m_ctype;
                    bool m_ctypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEDATABASEREQUEST_H_
