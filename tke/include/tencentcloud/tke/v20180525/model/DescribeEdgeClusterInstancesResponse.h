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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEDGECLUSTERINSTANCESRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEDGECLUSTERINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeEdgeClusterInstances返回参数结构体
                */
                class DescribeEdgeClusterInstancesResponse : public AbstractModel
                {
                public:
                    DescribeEdgeClusterInstancesResponse();
                    ~DescribeEdgeClusterInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取该集群总数
                     * @return TotalCount 该集群总数
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取节点信息集合
                     * @return InstanceInfoSet 节点信息集合
                     */
                    std::string GetInstanceInfoSet() const;

                    /**
                     * 判断参数 InstanceInfoSet 是否已赋值
                     * @return InstanceInfoSet 是否已赋值
                     */
                    bool InstanceInfoSetHasBeenSet() const;

                private:

                    /**
                     * 该集群总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 节点信息集合
                     */
                    std::string m_instanceInfoSet;
                    bool m_instanceInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEDGECLUSTERINSTANCESRESPONSE_H_
