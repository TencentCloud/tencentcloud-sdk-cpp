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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETKECLUSTERIMPORTINFORESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETKECLUSTERIMPORTINFORESPONSE_H_

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
                * DescribeTkeClusterImportInfo返回参数结构体
                */
                class DescribeTkeClusterImportInfoResponse : public AbstractModel
                {
                public:
                    DescribeTkeClusterImportInfoResponse();
                    ~DescribeTkeClusterImportInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>分区名称。</p>
                     * @return PartitionName <p>分区名称。</p>
                     * 
                     */
                    std::string GetPartitionName() const;

                    /**
                     * 判断参数 PartitionName 是否已赋值
                     * @return PartitionName 是否已赋值
                     * 
                     */
                    bool PartitionNameHasBeenSet() const;

                    /**
                     * 获取<p>EMR 集群 ID。</p>
                     * @return EmrClusterId <p>EMR 集群 ID。</p>
                     * 
                     */
                    std::string GetEmrClusterId() const;

                    /**
                     * 判断参数 EmrClusterId 是否已赋值
                     * @return EmrClusterId 是否已赋值
                     * 
                     */
                    bool EmrClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>COS Bucket 名称。</p>
                     * @return CosBucketId <p>COS Bucket 名称。</p>
                     * 
                     */
                    std::string GetCosBucketId() const;

                    /**
                     * 判断参数 CosBucketId 是否已赋值
                     * @return CosBucketId 是否已赋值
                     * 
                     */
                    bool CosBucketIdHasBeenSet() const;

                    /**
                     * 获取<p>Prometheus 托管实例 ID。</p>
                     * @return PrometheusInstanceId <p>Prometheus 托管实例 ID。</p>
                     * 
                     */
                    std::string GetPrometheusInstanceId() const;

                    /**
                     * 判断参数 PrometheusInstanceId 是否已赋值
                     * @return PrometheusInstanceId 是否已赋值
                     * 
                     */
                    bool PrometheusInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Prometheus 托管实例名称；查询失败或未命中返回空字符串。</p>
                     * @return PrometheusInstanceName <p>Prometheus 托管实例名称；查询失败或未命中返回空字符串。</p>
                     * 
                     */
                    std::string GetPrometheusInstanceName() const;

                    /**
                     * 判断参数 PrometheusInstanceName 是否已赋值
                     * @return PrometheusInstanceName 是否已赋值
                     * 
                     */
                    bool PrometheusInstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>负载均衡实例 ID。</p>
                     * @return LoadBalancerId <p>负载均衡实例 ID。</p>
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取<p>负载均衡实例名称；查询失败或未命中返回空字符串。</p>
                     * @return LoadBalancerName <p>负载均衡实例名称；查询失败或未命中返回空字符串。</p>
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     * 
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取<p>容器日志 CLS 日志主题 ID。</p>
                     * @return ContainerLogTopicId <p>容器日志 CLS 日志主题 ID。</p>
                     * 
                     */
                    std::string GetContainerLogTopicId() const;

                    /**
                     * 判断参数 ContainerLogTopicId 是否已赋值
                     * @return ContainerLogTopicId 是否已赋值
                     * 
                     */
                    bool ContainerLogTopicIdHasBeenSet() const;

                    /**
                     * 获取<p>容器日志 CLS 日志主题名称；查询失败或未命中返回空字符串。</p>
                     * @return ContainerLogTopicName <p>容器日志 CLS 日志主题名称；查询失败或未命中返回空字符串。</p>
                     * 
                     */
                    std::string GetContainerLogTopicName() const;

                    /**
                     * 判断参数 ContainerLogTopicName 是否已赋值
                     * @return ContainerLogTopicName 是否已赋值
                     * 
                     */
                    bool ContainerLogTopicNameHasBeenSet() const;

                private:

                    /**
                     * <p>分区名称。</p>
                     */
                    std::string m_partitionName;
                    bool m_partitionNameHasBeenSet;

                    /**
                     * <p>EMR 集群 ID。</p>
                     */
                    std::string m_emrClusterId;
                    bool m_emrClusterIdHasBeenSet;

                    /**
                     * <p>COS Bucket 名称。</p>
                     */
                    std::string m_cosBucketId;
                    bool m_cosBucketIdHasBeenSet;

                    /**
                     * <p>Prometheus 托管实例 ID。</p>
                     */
                    std::string m_prometheusInstanceId;
                    bool m_prometheusInstanceIdHasBeenSet;

                    /**
                     * <p>Prometheus 托管实例名称；查询失败或未命中返回空字符串。</p>
                     */
                    std::string m_prometheusInstanceName;
                    bool m_prometheusInstanceNameHasBeenSet;

                    /**
                     * <p>负载均衡实例 ID。</p>
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * <p>负载均衡实例名称；查询失败或未命中返回空字符串。</p>
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * <p>容器日志 CLS 日志主题 ID。</p>
                     */
                    std::string m_containerLogTopicId;
                    bool m_containerLogTopicIdHasBeenSet;

                    /**
                     * <p>容器日志 CLS 日志主题名称；查询失败或未命中返回空字符串。</p>
                     */
                    std::string m_containerLogTopicName;
                    bool m_containerLogTopicNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETKECLUSTERIMPORTINFORESPONSE_H_
