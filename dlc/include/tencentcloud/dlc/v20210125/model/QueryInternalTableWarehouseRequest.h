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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_QUERYINTERNALTABLEWAREHOUSEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_QUERYINTERNALTABLEWAREHOUSEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * QueryInternalTableWarehouse请求参数结构体
                */
                class QueryInternalTableWarehouseRequest : public AbstractModel
                {
                public:
                    QueryInternalTableWarehouseRequest();
                    ~QueryInternalTableWarehouseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取库名
                     * @return DatabaseName 库名
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置库名
                     * @param _databaseName 库名
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
                     * 获取表名
                     * @return TableName 表名
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名
                     * @param _tableName 表名
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                private:

                    /**
                     * 库名
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 表名
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_QUERYINTERNALTABLEWAREHOUSEREQUEST_H_
