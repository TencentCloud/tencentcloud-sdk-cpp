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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBETABLECOLUMNSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBETABLECOLUMNSREQUEST_H_

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
                * DescribeTableColumns请求参数结构体
                */
                class DescribeTableColumnsRequest : public AbstractModel
                {
                public:
                    DescribeTableColumnsRequest();
                    ~DescribeTableColumnsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同，可使用[查询实例列表](https://cloud.tencent.com/document/api/236/15872) 接口获取，其值为输出参数中字段 InstanceId 的值。
                     * @return InstanceId 实例ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同，可使用[查询实例列表](https://cloud.tencent.com/document/api/236/15872) 接口获取，其值为输出参数中字段 InstanceId 的值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同，可使用[查询实例列表](https://cloud.tencent.com/document/api/236/15872) 接口获取，其值为输出参数中字段 InstanceId 的值。
                     * @param _instanceId 实例ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同，可使用[查询实例列表](https://cloud.tencent.com/document/api/236/15872) 接口获取，其值为输出参数中字段 InstanceId 的值。
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
                     * 获取数据库名称，可使用[查询数据库](https://cloud.tencent.com/document/api/236/17493)接口获得。
                     * @return Database 数据库名称，可使用[查询数据库](https://cloud.tencent.com/document/api/236/17493)接口获得。
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置数据库名称，可使用[查询数据库](https://cloud.tencent.com/document/api/236/17493)接口获得。
                     * @param _database 数据库名称，可使用[查询数据库](https://cloud.tencent.com/document/api/236/17493)接口获得。
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
                     * 获取数据库中的表的名称。
                     * @return Table 数据库中的表的名称。
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置数据库中的表的名称。
                     * @param _table 数据库中的表的名称。
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
                     * 实例ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同，可使用[查询实例列表](https://cloud.tencent.com/document/api/236/15872) 接口获取，其值为输出参数中字段 InstanceId 的值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 数据库名称，可使用[查询数据库](https://cloud.tencent.com/document/api/236/17493)接口获得。
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * 数据库中的表的名称。
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBETABLECOLUMNSREQUEST_H_
