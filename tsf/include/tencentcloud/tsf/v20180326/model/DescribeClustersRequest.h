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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBECLUSTERSREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBECLUSTERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeClusters请求参数结构体
                */
                class DescribeClustersRequest : public AbstractModel
                {
                public:
                    DescribeClustersRequest();
                    ~DescribeClustersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取搜索词
                     * @return SearchWord 搜索词
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置搜索词
                     * @param _searchWord 搜索词
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取排序字段
                     * @return OrderBy 排序字段
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段
                     * @param _orderBy 排序字段
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取排序方式
                     * @return OrderType 排序方式
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置排序方式
                     * @param _orderType 排序方式
                     * 
                     */
                    void SetOrderType(const int64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
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
                     * 获取分页个数
                     * @return Limit 分页个数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页个数
                     * @param _limit 分页个数
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
                     * 获取集群类型
                     * @return ClusterType 集群类型
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置集群类型
                     * @param _clusterType 集群类型
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取idList
                     * @return ClusterIdList idList
                     * 
                     */
                    std::vector<std::string> GetClusterIdList() const;

                    /**
                     * 设置idList
                     * @param _clusterIdList idList
                     * 
                     */
                    void SetClusterIdList(const std::vector<std::string>& _clusterIdList);

                    /**
                     * 判断参数 ClusterIdList 是否已赋值
                     * @return ClusterIdList 是否已赋值
                     * 
                     */
                    bool ClusterIdListHasBeenSet() const;

                private:

                    /**
                     * 搜索词
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序方式
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页个数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 集群类型
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * idList
                     */
                    std::vector<std::string> m_clusterIdList;
                    bool m_clusterIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBECLUSTERSREQUEST_H_
