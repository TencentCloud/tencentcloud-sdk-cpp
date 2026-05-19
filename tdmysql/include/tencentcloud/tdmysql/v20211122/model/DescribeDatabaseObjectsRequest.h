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
                     * 获取<p>实例 ID，形如：tdsql3-42f40429.</p>
                     * @return InstanceId <p>实例 ID，形如：tdsql3-42f40429.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID，形如：tdsql3-42f40429.</p>
                     * @param _instanceId <p>实例 ID，形如：tdsql3-42f40429.</p>
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
                     * 获取<p>数据库名称，通过 DescribeDatabases 接口获取。</p>
                     * @return DbName <p>数据库名称，通过 DescribeDatabases 接口获取。</p>
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置<p>数据库名称，通过 DescribeDatabases 接口获取。</p>
                     * @param _dbName <p>数据库名称，通过 DescribeDatabases 接口获取。</p>
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
                     * 获取<p>分页索引</p>
                     * @return Offset <p>分页索引</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页索引</p>
                     * @param _offset <p>分页索引</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>每页数量</p>
                     * @return Limit <p>每页数量</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页数量</p>
                     * @param _limit <p>每页数量</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>数据表名称匹配表达式</p>
                     * @return TableRegexp <p>数据表名称匹配表达式</p>
                     * 
                     */
                    std::string GetTableRegexp() const;

                    /**
                     * 设置<p>数据表名称匹配表达式</p>
                     * @param _tableRegexp <p>数据表名称匹配表达式</p>
                     * 
                     */
                    void SetTableRegexp(const std::string& _tableRegexp);

                    /**
                     * 判断参数 TableRegexp 是否已赋值
                     * @return TableRegexp 是否已赋值
                     * 
                     */
                    bool TableRegexpHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID，形如：tdsql3-42f40429.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>数据库名称，通过 DescribeDatabases 接口获取。</p>
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * <p>分页索引</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>每页数量</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>数据表名称匹配表达式</p>
                     */
                    std::string m_tableRegexp;
                    bool m_tableRegexpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDATABASEOBJECTSREQUEST_H_
