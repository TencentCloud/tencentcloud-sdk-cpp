/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDATABASETABLEREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDATABASETABLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DescribeDatabaseTable请求参数结构体
                */
                class DescribeDatabaseTableRequest : public AbstractModel
                {
                public:
                    DescribeDatabaseTableRequest();
                    ~DescribeDatabaseTableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，形如：dcdbt-ow7t8lmc。
                     * @return InstanceId 实例 ID，形如：dcdbt-ow7t8lmc。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，形如：dcdbt-ow7t8lmc。
                     * @param _instanceId 实例 ID，形如：dcdbt-ow7t8lmc。
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
                     * 获取数据库名称，通过 DescribeDatabases 接口获取。
                     * @return DbName 数据库名称，通过 DescribeDatabases 接口获取。
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置数据库名称，通过 DescribeDatabases 接口获取。
                     * @param _dbName 数据库名称，通过 DescribeDatabases 接口获取。
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
                     * 获取表名称，通过 DescribeDatabaseObjects 接口获取。
                     * @return Table 表名称，通过 DescribeDatabaseObjects 接口获取。
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置表名称，通过 DescribeDatabaseObjects 接口获取。
                     * @param _table 表名称，通过 DescribeDatabaseObjects 接口获取。
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，形如：dcdbt-ow7t8lmc。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 数据库名称，通过 DescribeDatabases 接口获取。
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 表名称，通过 DescribeDatabaseObjects 接口获取。
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDATABASETABLEREQUEST_H_
