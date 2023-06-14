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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESUBNETRESOURCEDASHBOARDRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESUBNETRESOURCEDASHBOARDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/ResourceStatistics.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeSubnetResourceDashboard返回参数结构体
                */
                class DescribeSubnetResourceDashboardResponse : public AbstractModel
                {
                public:
                    DescribeSubnetResourceDashboardResponse();
                    ~DescribeSubnetResourceDashboardResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资源统计结果。
                     * @return ResourceStatisticsSet 资源统计结果。
                     * 
                     */
                    std::vector<ResourceStatistics> GetResourceStatisticsSet() const;

                    /**
                     * 判断参数 ResourceStatisticsSet 是否已赋值
                     * @return ResourceStatisticsSet 是否已赋值
                     * 
                     */
                    bool ResourceStatisticsSetHasBeenSet() const;

                private:

                    /**
                     * 资源统计结果。
                     */
                    std::vector<ResourceStatistics> m_resourceStatisticsSet;
                    bool m_resourceStatisticsSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESUBNETRESOURCEDASHBOARDRESPONSE_H_
