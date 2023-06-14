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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERPARAMLOGSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERPARAMLOGSREQUEST_H_

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
                * DescribeClusterParamLogs请求参数结构体
                */
                class DescribeClusterParamLogsRequest : public AbstractModel
                {
                public:
                    DescribeClusterParamLogsRequest();
                    ~DescribeClusterParamLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
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
                     * 获取实例ID列表，用来记录具体操作哪些实例
                     * @return InstanceIds 实例ID列表，用来记录具体操作哪些实例
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例ID列表，用来记录具体操作哪些实例
                     * @param _instanceIds 实例ID列表，用来记录具体操作哪些实例
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取排序字段，定义在回返结果的基于哪个字段进行排序
                     * @return OrderBy 排序字段，定义在回返结果的基于哪个字段进行排序
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段，定义在回返结果的基于哪个字段进行排序
                     * @param _orderBy 排序字段，定义在回返结果的基于哪个字段进行排序
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
                     * 获取定义具体的排序规则，限定为desc,asc,DESC,ASC其中之一
                     * @return OrderByType 定义具体的排序规则，限定为desc,asc,DESC,ASC其中之一
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置定义具体的排序规则，限定为desc,asc,DESC,ASC其中之一
                     * @param _orderByType 定义具体的排序规则，限定为desc,asc,DESC,ASC其中之一
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为 20，取值范围为(0,100]
                     * @return Limit 返回数量，默认为 20，取值范围为(0,100]
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为 20，取值范围为(0,100]
                     * @param _limit 返回数量，默认为 20，取值范围为(0,100]
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
                     * 获取记录偏移量，默认值为0，取值范围为[0,INF)
                     * @return Offset 记录偏移量，默认值为0，取值范围为[0,INF)
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置记录偏移量，默认值为0，取值范围为[0,INF)
                     * @param _offset 记录偏移量，默认值为0，取值范围为[0,INF)
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 实例ID列表，用来记录具体操作哪些实例
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 排序字段，定义在回返结果的基于哪个字段进行排序
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 定义具体的排序规则，限定为desc,asc,DESC,ASC其中之一
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * 返回数量，默认为 20，取值范围为(0,100]
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 记录偏移量，默认值为0，取值范围为[0,INF)
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERPARAMLOGSREQUEST_H_
