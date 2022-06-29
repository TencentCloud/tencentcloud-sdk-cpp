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

#ifndef TENCENTCLOUD_TDCPG_V20211118_MODEL_DESCRIBECLUSTERINSTANCESRESPONSE_H_
#define TENCENTCLOUD_TDCPG_V20211118_MODEL_DESCRIBECLUSTERINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdcpg/v20211118/model/Instance.h>


namespace TencentCloud
{
    namespace Tdcpg
    {
        namespace V20211118
        {
            namespace Model
            {
                /**
                * DescribeClusterInstances返回参数结构体
                */
                class DescribeClusterInstancesResponse : public AbstractModel
                {
                public:
                    DescribeClusterInstancesResponse();
                    ~DescribeClusterInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总条数
                     * @return TotalCount 总条数
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取实例列表信息
                     * @return InstanceSet 实例列表信息
                     */
                    std::vector<Instance> GetInstanceSet() const;

                    /**
                     * 判断参数 InstanceSet 是否已赋值
                     * @return InstanceSet 是否已赋值
                     */
                    bool InstanceSetHasBeenSet() const;

                private:

                    /**
                     * 总条数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 实例列表信息
                     */
                    std::vector<Instance> m_instanceSet;
                    bool m_instanceSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDCPG_V20211118_MODEL_DESCRIBECLUSTERINSTANCESRESPONSE_H_
