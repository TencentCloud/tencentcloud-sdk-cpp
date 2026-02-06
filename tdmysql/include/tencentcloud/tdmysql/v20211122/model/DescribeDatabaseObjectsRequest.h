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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDATABASEOBJECTSREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDATABASEOBJECTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * DescribeDatabaseObjects请求参数结构体
                */
                class DescribeDatabaseObjectsRequest : public AbstractModel
                {
                public:
                    DescribeDatabaseObjectsRequest();
                    ~DescribeDatabaseObjectsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，形如：tdsql3-42f40429.
                     * @return InstanceId 实例 ID，形如：tdsql3-42f40429.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，形如：tdsql3-42f40429.
                     * @param _instanceId 实例 ID，形如：tdsql3-42f40429.
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

                private:

                    /**
                     * 实例 ID，形如：tdsql3-42f40429.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 数据库名称，通过 DescribeDatabases 接口获取。
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDATABASEOBJECTSREQUEST_H_
