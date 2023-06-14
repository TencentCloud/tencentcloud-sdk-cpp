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

#ifndef TENCENTCLOUD_TIA_V20180226_MODEL_LISTJOBSREQUEST_H_
#define TENCENTCLOUD_TIA_V20180226_MODEL_LISTJOBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tia
    {
        namespace V20180226
        {
            namespace Model
            {
                /**
                * ListJobs请求参数结构体
                */
                class ListJobsRequest : public AbstractModel
                {
                public:
                    ListJobsRequest();
                    ~ListJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取运行任务的集群
                     * @return Cluster 运行任务的集群
                     * 
                     */
                    std::string GetCluster() const;

                    /**
                     * 设置运行任务的集群
                     * @param _cluster 运行任务的集群
                     * 
                     */
                    void SetCluster(const std::string& _cluster);

                    /**
                     * 判断参数 Cluster 是否已赋值
                     * @return Cluster 是否已赋值
                     * 
                     */
                    bool ClusterHasBeenSet() const;

                    /**
                     * 获取分页参数，返回数量
                     * @return Limit 分页参数，返回数量
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页参数，返回数量
                     * @param _limit 分页参数，返回数量
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页参数，起始位置
                     * @return Offset 分页参数，起始位置
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页参数，起始位置
                     * @param _offset 分页参数，起始位置
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 运行任务的集群
                     */
                    std::string m_cluster;
                    bool m_clusterHasBeenSet;

                    /**
                     * 分页参数，返回数量
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页参数，起始位置
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIA_V20180226_MODEL_LISTJOBSREQUEST_H_
