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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_GETMETATABLEREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_GETMETATABLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * GetMetaTable请求参数结构体
                */
                class GetMetaTableRequest : public AbstractModel
                {
                public:
                    GetMetaTableRequest();
                    ~GetMetaTableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Catalog名
                     * @return Catalog Catalog名
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置Catalog名
                     * @param _catalog Catalog名
                     * 
                     */
                    void SetCatalog(const std::string& _catalog);

                    /**
                     * 判断参数 Catalog 是否已赋值
                     * @return Catalog 是否已赋值
                     * 
                     */
                    bool CatalogHasBeenSet() const;

                    /**
                     * 获取Database名
                     * @return Database Database名
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置Database名
                     * @param _database Database名
                     * 
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取Table名
                     * @return Table Table名
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置Table名
                     * @param _table Table名
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取空间唯一标识
                     * @return WorkSpaceId 空间唯一标识
                     * 
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 设置空间唯一标识
                     * @param _workSpaceId 空间唯一标识
                     * 
                     */
                    void SetWorkSpaceId(const std::string& _workSpaceId);

                    /**
                     * 判断参数 WorkSpaceId 是否已赋值
                     * @return WorkSpaceId 是否已赋值
                     * 
                     */
                    bool WorkSpaceIdHasBeenSet() const;

                private:

                    /**
                     * Catalog名
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * Database名
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * Table名
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * 空间唯一标识
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_GETMETATABLEREQUEST_H_
