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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBESIMPLECLUSTERSREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBESIMPLECLUSTERSREQUEST_H_

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
                * DescribeSimpleClusters请求参数结构体
                */
                class DescribeSimpleClustersRequest : public AbstractModel
                {
                public:
                    DescribeSimpleClustersRequest();
                    ~DescribeSimpleClustersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要查询的集群ID列表，不填或不传入时查询所有内容
                     * @return ClusterIdList 需要查询的集群ID列表，不填或不传入时查询所有内容
                     */
                    std::vector<std::string> GetClusterIdList() const;

                    /**
                     * 设置需要查询的集群ID列表，不填或不传入时查询所有内容
                     * @param ClusterIdList 需要查询的集群ID列表，不填或不传入时查询所有内容
                     */
                    void SetClusterIdList(const std::vector<std::string>& _clusterIdList);

                    /**
                     * 判断参数 ClusterIdList 是否已赋值
                     * @return ClusterIdList 是否已赋值
                     */
                    bool ClusterIdListHasBeenSet() const;

                    /**
                     * 获取需要查询的集群类型，不填或不传入时查询所有内容
                     * @return ClusterType 需要查询的集群类型，不填或不传入时查询所有内容
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置需要查询的集群类型，不填或不传入时查询所有内容
                     * @param ClusterType 需要查询的集群类型，不填或不传入时查询所有内容
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取查询偏移量，默认为0
                     * @return Offset 查询偏移量，默认为0
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置查询偏移量，默认为0
                     * @param Offset 查询偏移量，默认为0
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页个数，默认为20， 取值应为1~50
                     * @return Limit 分页个数，默认为20， 取值应为1~50
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页个数，默认为20， 取值应为1~50
                     * @param Limit 分页个数，默认为20， 取值应为1~50
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 需要查询的集群ID列表，不填或不传入时查询所有内容
                     */
                    std::vector<std::string> m_clusterIdList;
                    bool m_clusterIdListHasBeenSet;

                    /**
                     * 需要查询的集群类型，不填或不传入时查询所有内容
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 查询偏移量，默认为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页个数，默认为20， 取值应为1~50
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBESIMPLECLUSTERSREQUEST_H_
