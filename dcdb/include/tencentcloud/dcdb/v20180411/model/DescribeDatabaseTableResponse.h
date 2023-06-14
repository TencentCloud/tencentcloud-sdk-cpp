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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDATABASETABLERESPONSE_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDATABASETABLERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dcdb/v20180411/model/TableColumn.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DescribeDatabaseTable返回参数结构体
                */
                class DescribeDatabaseTableResponse : public AbstractModel
                {
                public:
                    DescribeDatabaseTableResponse();
                    ~DescribeDatabaseTableResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例名称。
                     * @return InstanceId 实例名称。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取数据库名称。
                     * @return DbName 数据库名称。
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取表名称。
                     * @return Table 表名称。
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取列信息。
                     * @return Cols 列信息。
                     * 
                     */
                    std::vector<TableColumn> GetCols() const;

                    /**
                     * 判断参数 Cols 是否已赋值
                     * @return Cols 是否已赋值
                     * 
                     */
                    bool ColsHasBeenSet() const;

                private:

                    /**
                     * 实例名称。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 数据库名称。
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 表名称。
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * 列信息。
                     */
                    std::vector<TableColumn> m_cols;
                    bool m_colsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDATABASETABLERESPONSE_H_
