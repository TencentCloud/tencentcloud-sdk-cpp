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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEDATABASEAUDITRESOURCERESPONSE_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEDATABASEAUDITRESOURCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeDatabaseAuditResource返回参数结构体
                */
                class DescribeDatabaseAuditResourceResponse : public AbstractModel
                {
                public:
                    DescribeDatabaseAuditResourceResponse();
                    ~DescribeDatabaseAuditResourceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据库列表
                     * @return Databases 数据库列表
                     * 
                     */
                    std::vector<std::string> GetDatabases() const;

                    /**
                     * 判断参数 Databases 是否已赋值
                     * @return Databases 是否已赋值
                     * 
                     */
                    bool DatabasesHasBeenSet() const;

                    /**
                     * 获取用户列表
                     * @return Users 用户列表
                     * 
                     */
                    std::vector<std::string> GetUsers() const;

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     * 
                     */
                    bool UsersHasBeenSet() const;

                    /**
                     * 获取sql类型列表
                     * @return SqlTypes sql类型列表
                     * 
                     */
                    std::vector<std::string> GetSqlTypes() const;

                    /**
                     * 判断参数 SqlTypes 是否已赋值
                     * @return SqlTypes 是否已赋值
                     * 
                     */
                    bool SqlTypesHasBeenSet() const;

                    /**
                     * 获取catalog字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Catalogs catalog字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCatalogs() const;

                    /**
                     * 判断参数 Catalogs 是否已赋值
                     * @return Catalogs 是否已赋值
                     * 
                     */
                    bool CatalogsHasBeenSet() const;

                private:

                    /**
                     * 数据库列表
                     */
                    std::vector<std::string> m_databases;
                    bool m_databasesHasBeenSet;

                    /**
                     * 用户列表
                     */
                    std::vector<std::string> m_users;
                    bool m_usersHasBeenSet;

                    /**
                     * sql类型列表
                     */
                    std::vector<std::string> m_sqlTypes;
                    bool m_sqlTypesHasBeenSet;

                    /**
                     * catalog字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_catalogs;
                    bool m_catalogsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEDATABASEAUDITRESOURCERESPONSE_H_
