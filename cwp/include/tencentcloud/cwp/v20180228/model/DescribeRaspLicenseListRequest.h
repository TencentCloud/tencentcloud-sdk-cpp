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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERASPLICENSELISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERASPLICENSELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeRaspLicenseList请求参数结构体
                */
                class DescribeRaspLicenseListRequest : public AbstractModel
                {
                public:
                    DescribeRaspLicenseListRequest();
                    ~DescribeRaspLicenseListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件
- AssetType 资产类型(CWP 主机安全资产, TCSS_HOST 容器主机节点,TCSS_EKS 容器超级节点)
- PluginStatus 插件状态(Normal 使用正常,Abnormal 存在异常,Unused 未使用)
- ProtectionSwitch 防护开关(Enable 开启,Disable 未开启)
- ProtectionVersion 防护版本(Rasp 重保授权包,Unauthorized 未授权)
- InstanceID 实例ID
- InstanceName 实例名称
- InstanceIP 实例IP(内网IP/外网IP)
- NodeID 容器节点ID
- NodeName 容器节点名称
- ClusterID 容器集群ID
- ClusterName 容器集群名称
                     * @return Filters 过滤条件
- AssetType 资产类型(CWP 主机安全资产, TCSS_HOST 容器主机节点,TCSS_EKS 容器超级节点)
- PluginStatus 插件状态(Normal 使用正常,Abnormal 存在异常,Unused 未使用)
- ProtectionSwitch 防护开关(Enable 开启,Disable 未开启)
- ProtectionVersion 防护版本(Rasp 重保授权包,Unauthorized 未授权)
- InstanceID 实例ID
- InstanceName 实例名称
- InstanceIP 实例IP(内网IP/外网IP)
- NodeID 容器节点ID
- NodeName 容器节点名称
- ClusterID 容器集群ID
- ClusterName 容器集群名称
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置过滤条件
- AssetType 资产类型(CWP 主机安全资产, TCSS_HOST 容器主机节点,TCSS_EKS 容器超级节点)
- PluginStatus 插件状态(Normal 使用正常,Abnormal 存在异常,Unused 未使用)
- ProtectionSwitch 防护开关(Enable 开启,Disable 未开启)
- ProtectionVersion 防护版本(Rasp 重保授权包,Unauthorized 未授权)
- InstanceID 实例ID
- InstanceName 实例名称
- InstanceIP 实例IP(内网IP/外网IP)
- NodeID 容器节点ID
- NodeName 容器节点名称
- ClusterID 容器集群ID
- ClusterName 容器集群名称
                     * @param _filters 过滤条件
- AssetType 资产类型(CWP 主机安全资产, TCSS_HOST 容器主机节点,TCSS_EKS 容器超级节点)
- PluginStatus 插件状态(Normal 使用正常,Abnormal 存在异常,Unused 未使用)
- ProtectionSwitch 防护开关(Enable 开启,Disable 未开启)
- ProtectionVersion 防护版本(Rasp 重保授权包,Unauthorized 未授权)
- InstanceID 实例ID
- InstanceName 实例名称
- InstanceIP 实例IP(内网IP/外网IP)
- NodeID 容器节点ID
- NodeName 容器节点名称
- ClusterID 容器集群ID
- ClusterName 容器集群名称
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取限制条数,默认10
                     * @return Limit 限制条数,默认10
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制条数,默认10
                     * @param _limit 限制条数,默认10
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量,默认0
                     * @return Offset 偏移量,默认0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量,默认0
                     * @param _offset 偏移量,默认0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取排序方式,ASC 正序,DESC 倒序
                     * @return Order 排序方式,ASC 正序,DESC 倒序
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式,ASC 正序,DESC 倒序
                     * @param _order 排序方式,ASC 正序,DESC 倒序
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取排序值
- LatestUpdateTime 最近更新时间
                     * @return By 排序值
- LatestUpdateTime 最近更新时间
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序值
- LatestUpdateTime 最近更新时间
                     * @param _by 排序值
- LatestUpdateTime 最近更新时间
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * 过滤条件
- AssetType 资产类型(CWP 主机安全资产, TCSS_HOST 容器主机节点,TCSS_EKS 容器超级节点)
- PluginStatus 插件状态(Normal 使用正常,Abnormal 存在异常,Unused 未使用)
- ProtectionSwitch 防护开关(Enable 开启,Disable 未开启)
- ProtectionVersion 防护版本(Rasp 重保授权包,Unauthorized 未授权)
- InstanceID 实例ID
- InstanceName 实例名称
- InstanceIP 实例IP(内网IP/外网IP)
- NodeID 容器节点ID
- NodeName 容器节点名称
- ClusterID 容器集群ID
- ClusterName 容器集群名称
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 限制条数,默认10
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量,默认0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 排序方式,ASC 正序,DESC 倒序
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序值
- LatestUpdateTime 最近更新时间
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERASPLICENSELISTREQUEST_H_
