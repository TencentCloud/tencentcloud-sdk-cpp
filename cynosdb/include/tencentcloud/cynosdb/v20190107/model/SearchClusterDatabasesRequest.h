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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SEARCHCLUSTERDATABASESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SEARCHCLUSTERDATABASESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * SearchClusterDatabases请求参数结构体
                */
                class SearchClusterDatabasesRequest : public AbstractModel
                {
                public:
                    SearchClusterDatabasesRequest();
                    ~SearchClusterDatabasesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id
                     * @return ClusterId 集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
                     * @param _clusterId 集群id
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取数据库名
                     * @return Database 数据库名
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置数据库名
                     * @param _database 数据库名
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
                     * 获取是否精确搜索。
0: 模糊搜索 1:精确搜索 
默认为0
                     * @return MatchType 是否精确搜索。
0: 模糊搜索 1:精确搜索 
默认为0
                     * 
                     */
                    int64_t GetMatchType() const;

                    /**
                     * 设置是否精确搜索。
0: 模糊搜索 1:精确搜索 
默认为0
                     * @param _matchType 是否精确搜索。
0: 模糊搜索 1:精确搜索 
默认为0
                     * 
                     */
                    void SetMatchType(const int64_t& _matchType);

                    /**
                     * 判断参数 MatchType 是否已赋值
                     * @return MatchType 是否已赋值
                     * 
                     */
                    bool MatchTypeHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 数据库名
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * 是否精确搜索。
0: 模糊搜索 1:精确搜索 
默认为0
                     */
                    int64_t m_matchType;
                    bool m_matchTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SEARCHCLUSTERDATABASESREQUEST_H_
