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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEGRAFANAINSTANCESRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEGRAFANAINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/GrafanaInstanceInfo.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeGrafanaInstances返回参数结构体
                */
                class DescribeGrafanaInstancesResponse : public AbstractModel
                {
                public:
                    DescribeGrafanaInstancesResponse();
                    ~DescribeGrafanaInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取已废弃，请使用 Instances
                     * @return InstanceSet 已废弃，请使用 Instances
                     * 
                     */
                    std::vector<GrafanaInstanceInfo> GetInstanceSet() const;

                    /**
                     * 判断参数 InstanceSet 是否已赋值
                     * @return InstanceSet 是否已赋值
                     * 
                     */
                    bool InstanceSetHasBeenSet() const;

                    /**
                     * 获取符合查询条件的实例总数
                     * @return TotalCount 符合查询条件的实例总数
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
                     * 获取实例列表
                     * @return Instances 实例列表
                     * 
                     */
                    std::vector<GrafanaInstanceInfo> GetInstances() const;

                    /**
                     * 判断参数 Instances 是否已赋值
                     * @return Instances 是否已赋值
                     * 
                     */
                    bool InstancesHasBeenSet() const;

                private:

                    /**
                     * 已废弃，请使用 Instances
                     */
                    std::vector<GrafanaInstanceInfo> m_instanceSet;
                    bool m_instanceSetHasBeenSet;

                    /**
                     * 符合查询条件的实例总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 实例列表
                     */
                    std::vector<GrafanaInstanceInfo> m_instances;
                    bool m_instancesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEGRAFANAINSTANCESRESPONSE_H_
