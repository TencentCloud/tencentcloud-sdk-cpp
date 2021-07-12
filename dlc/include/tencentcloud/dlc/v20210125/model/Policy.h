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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_POLICY_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_POLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 权限对象
                */
                class Policy : public AbstractModel
                {
                public:
                    Policy();
                    ~Policy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取需要授权的数据源名称，*代表拥有全部数据源权限
                     * @return Catalog 需要授权的数据源名称，*代表拥有全部数据源权限
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置需要授权的数据源名称，*代表拥有全部数据源权限
                     * @param Catalog 需要授权的数据源名称，*代表拥有全部数据源权限
                     */
                    void SetCatalog(const std::string& _catalog);

                    /**
                     * 判断参数 Catalog 是否已赋值
                     * @return Catalog 是否已赋值
                     */
                    bool CatalogHasBeenSet() const;

                    /**
                     * 获取需要授权的数据库名称，*代表拥有全部数据库名称
                     * @return Database 需要授权的数据库名称，*代表拥有全部数据库名称
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置需要授权的数据库名称，*代表拥有全部数据库名称
                     * @param Database 需要授权的数据库名称，*代表拥有全部数据库名称
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取需要授权的表名称，*代表拥有全部表权限
                     * @return Table 需要授权的表名称，*代表拥有全部表权限
                     */
                    std::string GetTable() const;

                    /**
                     * 设置需要授权的表名称，*代表拥有全部表权限
                     * @param Table 需要授权的表名称，*代表拥有全部表权限
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取授权的操作，当前只支持“ALL”
                     * @return Operation 授权的操作，当前只支持“ALL”
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置授权的操作，当前只支持“ALL”
                     * @param Operation 授权的操作，当前只支持“ALL”
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     */
                    bool OperationHasBeenSet() const;

                private:

                    /**
                     * 需要授权的数据源名称，*代表拥有全部数据源权限
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * 需要授权的数据库名称，*代表拥有全部数据库名称
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * 需要授权的表名称，*代表拥有全部表权限
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * 授权的操作，当前只支持“ALL”
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_POLICY_H_
