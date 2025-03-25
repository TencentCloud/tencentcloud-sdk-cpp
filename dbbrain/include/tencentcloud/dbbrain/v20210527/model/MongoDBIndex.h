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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MONGODBINDEX_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MONGODBINDEX_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/IndexesToBuild.h>
#include <tencentcloud/dbbrain/v20210527/model/IndexesToDrop.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * Mongodb索引项
                */
                class MongoDBIndex : public AbstractModel
                {
                public:
                    MongoDBIndex();
                    ~MongoDBIndex() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例id。
                     * @return ClusterId 实例id。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置实例id。
                     * @param _clusterId 实例id。
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
                     * 获取表名。
                     * @return Collection 表名。
                     * 
                     */
                    std::string GetCollection() const;

                    /**
                     * 设置表名。
                     * @param _collection 表名。
                     * 
                     */
                    void SetCollection(const std::string& _collection);

                    /**
                     * 判断参数 Collection 是否已赋值
                     * @return Collection 是否已赋值
                     * 
                     */
                    bool CollectionHasBeenSet() const;

                    /**
                     * 获取库名。
                     * @return Db 库名。
                     * 
                     */
                    std::string GetDb() const;

                    /**
                     * 设置库名。
                     * @param _db 库名。
                     * 
                     */
                    void SetDb(const std::string& _db);

                    /**
                     * 判断参数 Db 是否已赋值
                     * @return Db 是否已赋值
                     * 
                     */
                    bool DbHasBeenSet() const;

                    /**
                     * 获取优化级别，1-4，优先级从高到低。
                     * @return Level 优化级别，1-4，优先级从高到低。
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置优化级别，1-4，优先级从高到低。
                     * @param _level 优化级别，1-4，优先级从高到低。
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取得分。
                     * @return Score 得分。
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置得分。
                     * @param _score 得分。
                     * 
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取推荐索引列表。
                     * @return IndexesToBuild 推荐索引列表。
                     * 
                     */
                    std::vector<IndexesToBuild> GetIndexesToBuild() const;

                    /**
                     * 设置推荐索引列表。
                     * @param _indexesToBuild 推荐索引列表。
                     * 
                     */
                    void SetIndexesToBuild(const std::vector<IndexesToBuild>& _indexesToBuild);

                    /**
                     * 判断参数 IndexesToBuild 是否已赋值
                     * @return IndexesToBuild 是否已赋值
                     * 
                     */
                    bool IndexesToBuildHasBeenSet() const;

                    /**
                     * 获取无效索引列表。
                     * @return IndexesToDrop 无效索引列表。
                     * 
                     */
                    std::vector<IndexesToDrop> GetIndexesToDrop() const;

                    /**
                     * 设置无效索引列表。
                     * @param _indexesToDrop 无效索引列表。
                     * 
                     */
                    void SetIndexesToDrop(const std::vector<IndexesToDrop>& _indexesToDrop);

                    /**
                     * 判断参数 IndexesToDrop 是否已赋值
                     * @return IndexesToDrop 是否已赋值
                     * 
                     */
                    bool IndexesToDropHasBeenSet() const;

                private:

                    /**
                     * 实例id。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 表名。
                     */
                    std::string m_collection;
                    bool m_collectionHasBeenSet;

                    /**
                     * 库名。
                     */
                    std::string m_db;
                    bool m_dbHasBeenSet;

                    /**
                     * 优化级别，1-4，优先级从高到低。
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 得分。
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 推荐索引列表。
                     */
                    std::vector<IndexesToBuild> m_indexesToBuild;
                    bool m_indexesToBuildHasBeenSet;

                    /**
                     * 无效索引列表。
                     */
                    std::vector<IndexesToDrop> m_indexesToDrop;
                    bool m_indexesToDropHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MONGODBINDEX_H_
