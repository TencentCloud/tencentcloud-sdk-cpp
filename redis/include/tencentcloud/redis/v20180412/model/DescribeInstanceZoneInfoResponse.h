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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEZONEINFORESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEZONEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/ReplicaGroup.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeInstanceZoneInfo返回参数结构体
                */
                class DescribeInstanceZoneInfoResponse : public AbstractModel
                {
                public:
                    DescribeInstanceZoneInfoResponse();
                    ~DescribeInstanceZoneInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例节点组的个数。
                     * @return TotalCount 实例节点组的个数。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取实例节点组列表。
                     * @return ReplicaGroups 实例节点组列表。
                     * 
                     */
                    std::vector<ReplicaGroup> GetReplicaGroups() const;

                    /**
                     * 判断参数 ReplicaGroups 是否已赋值
                     * @return ReplicaGroups 是否已赋值
                     * 
                     */
                    bool ReplicaGroupsHasBeenSet() const;

                private:

                    /**
                     * 实例节点组的个数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 实例节点组列表。
                     */
                    std::vector<ReplicaGroup> m_replicaGroups;
                    bool m_replicaGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEZONEINFORESPONSE_H_
