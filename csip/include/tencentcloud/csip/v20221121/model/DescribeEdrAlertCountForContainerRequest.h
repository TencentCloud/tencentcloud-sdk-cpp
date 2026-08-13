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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDRALERTCOUNTFORCONTAINERREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDRALERTCOUNTFORCONTAINERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/EDRFilter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeEdrAlertCountForContainer请求参数结构体
                */
                class DescribeEdrAlertCountForContainerRequest : public AbstractModel
                {
                public:
                    DescribeEdrAlertCountForContainerRequest();
                    ~DescribeEdrAlertCountForContainerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>集群 ID 列表（≤500）；非空且 ContainerIds 为空时按集群分组统计</p>
                     * @return ClusterIds <p>集群 ID 列表（≤500）；非空且 ContainerIds 为空时按集群分组统计</p>
                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 设置<p>集群 ID 列表（≤500）；非空且 ContainerIds 为空时按集群分组统计</p>
                     * @param _clusterIds <p>集群 ID 列表（≤500）；非空且 ContainerIds 为空时按集群分组统计</p>
                     * 
                     */
                    void SetClusterIds(const std::vector<std::string>& _clusterIds);

                    /**
                     * 判断参数 ClusterIds 是否已赋值
                     * @return ClusterIds 是否已赋值
                     * 
                     */
                    bool ClusterIdsHasBeenSet() const;

                    /**
                     * 获取<p>容器 ID 列表（≤500）；非空时按容器分组统计（优先级高于 ClusterIds）</p>
                     * @return ContainerIds <p>容器 ID 列表（≤500）；非空时按容器分组统计（优先级高于 ClusterIds）</p>
                     * 
                     */
                    std::vector<std::string> GetContainerIds() const;

                    /**
                     * 设置<p>容器 ID 列表（≤500）；非空时按容器分组统计（优先级高于 ClusterIds）</p>
                     * @param _containerIds <p>容器 ID 列表（≤500）；非空时按容器分组统计（优先级高于 ClusterIds）</p>
                     * 
                     */
                    void SetContainerIds(const std::vector<std::string>& _containerIds);

                    /**
                     * 判断参数 ContainerIds 是否已赋值
                     * @return ContainerIds 是否已赋值
                     * 
                     */
                    bool ContainerIdsHasBeenSet() const;

                    /**
                     * 获取<li>PolicyType - int - 是否必填：否 - 策略类型</li><li>PolicyName - string - 是否必填：否 - 策略名称</li><li>Domain - string - 是否必填：否 - 域名(先对域名做urlencode,再base64)</li><li>PolicyAction- int - 是否必填：否 - 策略动作</li><li>IsEnabled - int - 是否必填：否 - 是否生效</li><li>ContainerId - string - 是否必填：否 - 容器ID（精确/IN，容器维度筛选）</li><li>ClusterId - string - 是否必填：否 - 集群ID（精确/IN，容器维度筛选）</li><li>ClusterName - string - 是否必填：否 - 集群名称（前缀模糊）</li><li>ContainerName - string - 是否必填：否 - 容器名称（前缀模糊）</li><li>AlertSource - string - 是否必填：否 - 告警来源：HOST-主机告警 / CONTAINER-容器告警，不传返回全部</li>
                     * @return Filters <li>PolicyType - int - 是否必填：否 - 策略类型</li><li>PolicyName - string - 是否必填：否 - 策略名称</li><li>Domain - string - 是否必填：否 - 域名(先对域名做urlencode,再base64)</li><li>PolicyAction- int - 是否必填：否 - 策略动作</li><li>IsEnabled - int - 是否必填：否 - 是否生效</li><li>ContainerId - string - 是否必填：否 - 容器ID（精确/IN，容器维度筛选）</li><li>ClusterId - string - 是否必填：否 - 集群ID（精确/IN，容器维度筛选）</li><li>ClusterName - string - 是否必填：否 - 集群名称（前缀模糊）</li><li>ContainerName - string - 是否必填：否 - 容器名称（前缀模糊）</li><li>AlertSource - string - 是否必填：否 - 告警来源：HOST-主机告警 / CONTAINER-容器告警，不传返回全部</li>
                     * 
                     */
                    std::vector<EDRFilter> GetFilters() const;

                    /**
                     * 设置<li>PolicyType - int - 是否必填：否 - 策略类型</li><li>PolicyName - string - 是否必填：否 - 策略名称</li><li>Domain - string - 是否必填：否 - 域名(先对域名做urlencode,再base64)</li><li>PolicyAction- int - 是否必填：否 - 策略动作</li><li>IsEnabled - int - 是否必填：否 - 是否生效</li><li>ContainerId - string - 是否必填：否 - 容器ID（精确/IN，容器维度筛选）</li><li>ClusterId - string - 是否必填：否 - 集群ID（精确/IN，容器维度筛选）</li><li>ClusterName - string - 是否必填：否 - 集群名称（前缀模糊）</li><li>ContainerName - string - 是否必填：否 - 容器名称（前缀模糊）</li><li>AlertSource - string - 是否必填：否 - 告警来源：HOST-主机告警 / CONTAINER-容器告警，不传返回全部</li>
                     * @param _filters <li>PolicyType - int - 是否必填：否 - 策略类型</li><li>PolicyName - string - 是否必填：否 - 策略名称</li><li>Domain - string - 是否必填：否 - 域名(先对域名做urlencode,再base64)</li><li>PolicyAction- int - 是否必填：否 - 策略动作</li><li>IsEnabled - int - 是否必填：否 - 是否生效</li><li>ContainerId - string - 是否必填：否 - 容器ID（精确/IN，容器维度筛选）</li><li>ClusterId - string - 是否必填：否 - 集群ID（精确/IN，容器维度筛选）</li><li>ClusterName - string - 是否必填：否 - 集群名称（前缀模糊）</li><li>ContainerName - string - 是否必填：否 - 容器名称（前缀模糊）</li><li>AlertSource - string - 是否必填：否 - 告警来源：HOST-主机告警 / CONTAINER-容器告警，不传返回全部</li>
                     * 
                     */
                    void SetFilters(const std::vector<EDRFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>集群 ID 列表（≤500）；非空且 ContainerIds 为空时按集群分组统计</p>
                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                    /**
                     * <p>容器 ID 列表（≤500）；非空时按容器分组统计（优先级高于 ClusterIds）</p>
                     */
                    std::vector<std::string> m_containerIds;
                    bool m_containerIdsHasBeenSet;

                    /**
                     * <li>PolicyType - int - 是否必填：否 - 策略类型</li><li>PolicyName - string - 是否必填：否 - 策略名称</li><li>Domain - string - 是否必填：否 - 域名(先对域名做urlencode,再base64)</li><li>PolicyAction- int - 是否必填：否 - 策略动作</li><li>IsEnabled - int - 是否必填：否 - 是否生效</li><li>ContainerId - string - 是否必填：否 - 容器ID（精确/IN，容器维度筛选）</li><li>ClusterId - string - 是否必填：否 - 集群ID（精确/IN，容器维度筛选）</li><li>ClusterName - string - 是否必填：否 - 集群名称（前缀模糊）</li><li>ContainerName - string - 是否必填：否 - 容器名称（前缀模糊）</li><li>AlertSource - string - 是否必填：否 - 告警来源：HOST-主机告警 / CONTAINER-容器告警，不传返回全部</li>
                     */
                    std::vector<EDRFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDRALERTCOUNTFORCONTAINERREQUEST_H_
