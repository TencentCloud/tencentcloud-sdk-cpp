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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBECLUSTERACTIVITIESRESPONSE_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBECLUSTERACTIVITIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/thpc/v20230321/model/ClusterActivity.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * DescribeClusterActivities返回参数结构体
                */
                class DescribeClusterActivitiesResponse : public AbstractModel
                {
                public:
                    DescribeClusterActivitiesResponse();
                    ~DescribeClusterActivitiesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群活动历史记录列表。
                     * @return ClusterActivitySet 集群活动历史记录列表。
                     * 
                     */
                    std::vector<ClusterActivity> GetClusterActivitySet() const;

                    /**
                     * 判断参数 ClusterActivitySet 是否已赋值
                     * @return ClusterActivitySet 是否已赋值
                     * 
                     */
                    bool ClusterActivitySetHasBeenSet() const;

                    /**
                     * 获取集群活动历史记录数量。
                     * @return TotalCount 集群活动历史记录数量。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 集群活动历史记录列表。
                     */
                    std::vector<ClusterActivity> m_clusterActivitySet;
                    bool m_clusterActivitySetHasBeenSet;

                    /**
                     * 集群活动历史记录数量。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBECLUSTERACTIVITIESRESPONSE_H_
