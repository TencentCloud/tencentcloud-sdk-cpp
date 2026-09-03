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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEBINDABLEPROMETHEUSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEBINDABLEPROMETHEUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeBindablePrometheus请求参数结构体
                */
                class DescribeBindablePrometheusRequest : public AbstractModel
                {
                public:
                    DescribeBindablePrometheusRequest();
                    ~DescribeBindablePrometheusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>TKE 集群 ID</p>
                     * @return ClusterId <p>TKE 集群 ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>TKE 集群 ID</p>
                     * @param _clusterId <p>TKE 集群 ID</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>Prometheus 实例 ID（用于列表精确搜索）</p>
                     * @return InstanceId <p>Prometheus 实例 ID（用于列表精确搜索）</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Prometheus 实例 ID（用于列表精确搜索）</p>
                     * @param _instanceId <p>Prometheus 实例 ID（用于列表精确搜索）</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>分页大小，默认 20，最大 100</p>
                     * @return Limit <p>分页大小，默认 20，最大 100</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>分页大小，默认 20，最大 100</p>
                     * @param _limit <p>分页大小，默认 20，最大 100</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>分页偏移，默认 0</p>
                     * @return Offset <p>分页偏移，默认 0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移，默认 0</p>
                     * @param _offset <p>分页偏移，默认 0</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <p>TKE 集群 ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Prometheus 实例 ID（用于列表精确搜索）</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>分页大小，默认 20，最大 100</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页偏移，默认 0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEBINDABLEPROMETHEUSREQUEST_H_
