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

#ifndef TENCENTCLOUD_CIS_V20180408_MODEL_DESCRIBECONTAINERINSTANCESRESPONSE_H_
#define TENCENTCLOUD_CIS_V20180408_MODEL_DESCRIBECONTAINERINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cis/v20180408/model/ContainerInstance.h>


namespace TencentCloud
{
    namespace Cis
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * DescribeContainerInstances返回参数结构体
                */
                class DescribeContainerInstancesResponse : public AbstractModel
                {
                public:
                    DescribeContainerInstancesResponse();
                    ~DescribeContainerInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取容器实例列表
                     * @return ContainerInstanceList 容器实例列表
                     * 
                     */
                    std::vector<ContainerInstance> GetContainerInstanceList() const;

                    /**
                     * 判断参数 ContainerInstanceList 是否已赋值
                     * @return ContainerInstanceList 是否已赋值
                     * 
                     */
                    bool ContainerInstanceListHasBeenSet() const;

                    /**
                     * 获取容器实例总数
                     * @return TotalCount 容器实例总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 容器实例列表
                     */
                    std::vector<ContainerInstance> m_containerInstanceList;
                    bool m_containerInstanceListHasBeenSet;

                    /**
                     * 容器实例总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIS_V20180408_MODEL_DESCRIBECONTAINERINSTANCESRESPONSE_H_
