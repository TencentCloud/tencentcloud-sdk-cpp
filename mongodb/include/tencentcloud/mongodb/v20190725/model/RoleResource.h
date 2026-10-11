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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_ROLERESOURCE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_ROLERESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 角色资源
                */
                class RoleResource : public AbstractModel
                {
                public:
                    RoleResource();
                    ~RoleResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否集群级资源</p>
                     * @return Cluster <p>是否集群级资源</p>
                     * 
                     */
                    bool GetCluster() const;

                    /**
                     * 设置<p>是否集群级资源</p>
                     * @param _cluster <p>是否集群级资源</p>
                     * 
                     */
                    void SetCluster(const bool& _cluster);

                    /**
                     * 判断参数 Cluster 是否已赋值
                     * @return Cluster 是否已赋值
                     * 
                     */
                    bool ClusterHasBeenSet() const;

                    /**
                     * 获取<p>db名</p>
                     * @return Database <p>db名</p>
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置<p>db名</p>
                     * @param _database <p>db名</p>
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
                     * 获取<p>collection名</p>
                     * @return Collection <p>collection名</p>
                     * 
                     */
                    std::string GetCollection() const;

                    /**
                     * 设置<p>collection名</p>
                     * @param _collection <p>collection名</p>
                     * 
                     */
                    void SetCollection(const std::string& _collection);

                    /**
                     * 判断参数 Collection 是否已赋值
                     * @return Collection 是否已赋值
                     * 
                     */
                    bool CollectionHasBeenSet() const;

                private:

                    /**
                     * <p>是否集群级资源</p>
                     */
                    bool m_cluster;
                    bool m_clusterHasBeenSet;

                    /**
                     * <p>db名</p>
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * <p>collection名</p>
                     */
                    std::string m_collection;
                    bool m_collectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_ROLERESOURCE_H_
