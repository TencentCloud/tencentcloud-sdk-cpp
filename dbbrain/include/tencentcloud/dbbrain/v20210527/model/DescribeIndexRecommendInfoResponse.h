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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEINDEXRECOMMENDINFORESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEINDEXRECOMMENDINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/MongoDBIndex.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeIndexRecommendInfo返回参数结构体
                */
                class DescribeIndexRecommendInfoResponse : public AbstractModel
                {
                public:
                    DescribeIndexRecommendInfoResponse();
                    ~DescribeIndexRecommendInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取索引推荐的集合数量。
                     * @return CollectionNum 索引推荐的集合数量。
                     * 
                     */
                    int64_t GetCollectionNum() const;

                    /**
                     * 判断参数 CollectionNum 是否已赋值
                     * @return CollectionNum 是否已赋值
                     * 
                     */
                    bool CollectionNumHasBeenSet() const;

                    /**
                     * 获取索引推荐的索引数量。
                     * @return IndexNum 索引推荐的索引数量。
                     * 
                     */
                    int64_t GetIndexNum() const;

                    /**
                     * 判断参数 IndexNum 是否已赋值
                     * @return IndexNum 是否已赋值
                     * 
                     */
                    bool IndexNumHasBeenSet() const;

                    /**
                     * 获取索引项。
                     * @return Items 索引项。
                     * 
                     */
                    std::vector<MongoDBIndex> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取优化级别，1-4，优先级从高到低。
                     * @return Level 优化级别，1-4，优先级从高到低。
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取历史优化数。
                     * @return Optimized 历史优化数。
                     * 
                     */
                    int64_t GetOptimized() const;

                    /**
                     * 判断参数 Optimized 是否已赋值
                     * @return Optimized 是否已赋值
                     * 
                     */
                    bool OptimizedHasBeenSet() const;

                    /**
                     * 获取累计优化条数。
                     * @return OptimizedCount 累计优化条数。
                     * 
                     */
                    int64_t GetOptimizedCount() const;

                    /**
                     * 判断参数 OptimizedCount 是否已赋值
                     * @return OptimizedCount 是否已赋值
                     * 
                     */
                    bool OptimizedCountHasBeenSet() const;

                private:

                    /**
                     * 索引推荐的集合数量。
                     */
                    int64_t m_collectionNum;
                    bool m_collectionNumHasBeenSet;

                    /**
                     * 索引推荐的索引数量。
                     */
                    int64_t m_indexNum;
                    bool m_indexNumHasBeenSet;

                    /**
                     * 索引项。
                     */
                    std::vector<MongoDBIndex> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 优化级别，1-4，优先级从高到低。
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 历史优化数。
                     */
                    int64_t m_optimized;
                    bool m_optimizedHasBeenSet;

                    /**
                     * 累计优化条数。
                     */
                    int64_t m_optimizedCount;
                    bool m_optimizedCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEINDEXRECOMMENDINFORESPONSE_H_
