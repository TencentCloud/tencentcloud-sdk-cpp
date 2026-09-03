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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEBINDABLEPROMETHEUSRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEBINDABLEPROMETHEUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/PrometheusInstanceItem.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeBindablePrometheus返回参数结构体
                */
                class DescribeBindablePrometheusResponse : public AbstractModel
                {
                public:
                    DescribeBindablePrometheusResponse();
                    ~DescribeBindablePrometheusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>TKE 集群是否已绑定 Prometheus 实例</p>
                     * @return Bound <p>TKE 集群是否已绑定 Prometheus 实例</p>
                     * 
                     */
                    bool GetBound() const;

                    /**
                     * 判断参数 Bound 是否已赋值
                     * @return Bound 是否已赋值
                     * 
                     */
                    bool BoundHasBeenSet() const;

                    /**
                     * 获取<p>Prometheus 实例总数（未分页前）；Bound=false 时有意义</p>
                     * @return TotalCount <p>Prometheus 实例总数（未分页前）；Bound=false 时有意义</p>
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
                     * 获取<p>Prometheus 实例列表；Bound=false 时返回；已按同 VPC 优先稳定排序</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Instances <p>Prometheus 实例列表；Bound=false 时返回；已按同 VPC 优先稳定排序</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PrometheusInstanceItem> GetInstances() const;

                    /**
                     * 判断参数 Instances 是否已赋值
                     * @return Instances 是否已赋值
                     * 
                     */
                    bool InstancesHasBeenSet() const;

                private:

                    /**
                     * <p>TKE 集群是否已绑定 Prometheus 实例</p>
                     */
                    bool m_bound;
                    bool m_boundHasBeenSet;

                    /**
                     * <p>Prometheus 实例总数（未分页前）；Bound=false 时有意义</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>Prometheus 实例列表；Bound=false 时返回；已按同 VPC 优先稳定排序</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PrometheusInstanceItem> m_instances;
                    bool m_instancesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEBINDABLEPROMETHEUSRESPONSE_H_
