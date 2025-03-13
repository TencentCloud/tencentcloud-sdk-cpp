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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCENAMESPACERESPONSE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCENAMESPACERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeDBInstanceNamespace返回参数结构体
                */
                class DescribeDBInstanceNamespaceResponse : public AbstractModel
                {
                public:
                    DescribeDBInstanceNamespaceResponse();
                    ~DescribeDBInstanceNamespaceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询实例的数据库列表。若未使用 DbName 指定具体查询的数据库，则仅返回查询实例所有的数据库列表，而不返回 Collections 集合信息。
                     * @return Databases 查询实例的数据库列表。若未使用 DbName 指定具体查询的数据库，则仅返回查询实例所有的数据库列表，而不返回 Collections 集合信息。
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
                     * 获取查询的集合信息。指定 DbName 时，则仅返回该数据库下的集合列表。
                     * @return Collections 查询的集合信息。指定 DbName 时，则仅返回该数据库下的集合列表。
                     * 
                     */
                    std::vector<std::string> GetCollections() const;

                    /**
                     * 判断参数 Collections 是否已赋值
                     * @return Collections 是否已赋值
                     * 
                     */
                    bool CollectionsHasBeenSet() const;

                private:

                    /**
                     * 查询实例的数据库列表。若未使用 DbName 指定具体查询的数据库，则仅返回查询实例所有的数据库列表，而不返回 Collections 集合信息。
                     */
                    std::vector<std::string> m_databases;
                    bool m_databasesHasBeenSet;

                    /**
                     * 查询的集合信息。指定 DbName 时，则仅返回该数据库下的集合列表。
                     */
                    std::vector<std::string> m_collections;
                    bool m_collectionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCENAMESPACERESPONSE_H_
