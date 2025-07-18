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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEINSTANCEJUMBOREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEINSTANCEJUMBOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeInstanceJumbo请求参数结构体
                */
                class DescribeInstanceJumboRequest : public AbstractModel
                {
                public:
                    DescribeInstanceJumboRequest();
                    ~DescribeInstanceJumboRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CVM实例ID列表。限制每次i最多查询10个实例。
                     * @return InstanceIds CVM实例ID列表。限制每次i最多查询10个实例。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置CVM实例ID列表。限制每次i最多查询10个实例。
                     * @param _instanceIds CVM实例ID列表。限制每次i最多查询10个实例。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * CVM实例ID列表。限制每次i最多查询10个实例。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEINSTANCEJUMBOREQUEST_H_
