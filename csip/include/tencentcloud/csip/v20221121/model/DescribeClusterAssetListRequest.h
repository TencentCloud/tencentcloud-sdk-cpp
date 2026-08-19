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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERASSETLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERASSETLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeClusterAssetList请求参数结构体
                */
                class DescribeClusterAssetListRequest : public AbstractModel
                {
                public:
                    DescribeClusterAssetListRequest();
                    ~DescribeClusterAssetListRequest() = default;
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
                     * 获取<p>通用过滤条件列表。支持的过滤字段：<br>ClusterId：集群ID，精确匹配。<br>ClusterName：集群名称，模糊匹配。<br>ClusterType：集群类型，精确匹配。取值：TKE_MANAGED_CLUSTER（腾讯云标准集群）、TKE_INDEPENDENT_CLUSTER（标准集群Master自维护）、TKE_SERVERLESS_CLUSTER（Serverless集群）、TKE_EDGE_CLUSTER（边缘集群）、SELF_BUILT（腾讯云内自建）、SELF_BUILT_OTHER（非腾讯云自建/混合云）。<br>RunStatus：集群运行状态，精确匹配。取值：Running（运行中）、Exception（异常）、Unknown（未知）。<br>AccessedStatus：接入状态，精确匹配。取值：AccessedNone（未接入）、AccessedInstalling（接入中）、AccessedException（接入异常）、AccessedInstalled（已接入）。<br>DefendStatus：防护状态，精确匹配。取值：Enabled（已防护）、Partial（部分防护）、Disabled（未防护）。<br>RiskStatus：风险检查状态，精确匹配。<br>RiskLevel：风险等级，精确匹配。取值：CRITICAL、HIGH、MEDIUM、LOW、NONE（无风险）。<br>HasHighRisk：仅筛选含高危及以上风险的集群，无需填入 value，传入 HasHighRisk 即生效。<br>Region：地域，精确匹配。<br>OwnerName：负责人，模糊匹配。<br>ClusterAssetIds：集群资产ID，精确匹配。<br>ExcludeClusterAssetIds：排除的集群资产ID，精确排除。</p>
                     * @return Filter <p>通用过滤条件列表。支持的过滤字段：<br>ClusterId：集群ID，精确匹配。<br>ClusterName：集群名称，模糊匹配。<br>ClusterType：集群类型，精确匹配。取值：TKE_MANAGED_CLUSTER（腾讯云标准集群）、TKE_INDEPENDENT_CLUSTER（标准集群Master自维护）、TKE_SERVERLESS_CLUSTER（Serverless集群）、TKE_EDGE_CLUSTER（边缘集群）、SELF_BUILT（腾讯云内自建）、SELF_BUILT_OTHER（非腾讯云自建/混合云）。<br>RunStatus：集群运行状态，精确匹配。取值：Running（运行中）、Exception（异常）、Unknown（未知）。<br>AccessedStatus：接入状态，精确匹配。取值：AccessedNone（未接入）、AccessedInstalling（接入中）、AccessedException（接入异常）、AccessedInstalled（已接入）。<br>DefendStatus：防护状态，精确匹配。取值：Enabled（已防护）、Partial（部分防护）、Disabled（未防护）。<br>RiskStatus：风险检查状态，精确匹配。<br>RiskLevel：风险等级，精确匹配。取值：CRITICAL、HIGH、MEDIUM、LOW、NONE（无风险）。<br>HasHighRisk：仅筛选含高危及以上风险的集群，无需填入 value，传入 HasHighRisk 即生效。<br>Region：地域，精确匹配。<br>OwnerName：负责人，模糊匹配。<br>ClusterAssetIds：集群资产ID，精确匹配。<br>ExcludeClusterAssetIds：排除的集群资产ID，精确排除。</p>
                     * 
                     */
                    Filter GetFilter() const;

                    /**
                     * 设置<p>通用过滤条件列表。支持的过滤字段：<br>ClusterId：集群ID，精确匹配。<br>ClusterName：集群名称，模糊匹配。<br>ClusterType：集群类型，精确匹配。取值：TKE_MANAGED_CLUSTER（腾讯云标准集群）、TKE_INDEPENDENT_CLUSTER（标准集群Master自维护）、TKE_SERVERLESS_CLUSTER（Serverless集群）、TKE_EDGE_CLUSTER（边缘集群）、SELF_BUILT（腾讯云内自建）、SELF_BUILT_OTHER（非腾讯云自建/混合云）。<br>RunStatus：集群运行状态，精确匹配。取值：Running（运行中）、Exception（异常）、Unknown（未知）。<br>AccessedStatus：接入状态，精确匹配。取值：AccessedNone（未接入）、AccessedInstalling（接入中）、AccessedException（接入异常）、AccessedInstalled（已接入）。<br>DefendStatus：防护状态，精确匹配。取值：Enabled（已防护）、Partial（部分防护）、Disabled（未防护）。<br>RiskStatus：风险检查状态，精确匹配。<br>RiskLevel：风险等级，精确匹配。取值：CRITICAL、HIGH、MEDIUM、LOW、NONE（无风险）。<br>HasHighRisk：仅筛选含高危及以上风险的集群，无需填入 value，传入 HasHighRisk 即生效。<br>Region：地域，精确匹配。<br>OwnerName：负责人，模糊匹配。<br>ClusterAssetIds：集群资产ID，精确匹配。<br>ExcludeClusterAssetIds：排除的集群资产ID，精确排除。</p>
                     * @param _filter <p>通用过滤条件列表。支持的过滤字段：<br>ClusterId：集群ID，精确匹配。<br>ClusterName：集群名称，模糊匹配。<br>ClusterType：集群类型，精确匹配。取值：TKE_MANAGED_CLUSTER（腾讯云标准集群）、TKE_INDEPENDENT_CLUSTER（标准集群Master自维护）、TKE_SERVERLESS_CLUSTER（Serverless集群）、TKE_EDGE_CLUSTER（边缘集群）、SELF_BUILT（腾讯云内自建）、SELF_BUILT_OTHER（非腾讯云自建/混合云）。<br>RunStatus：集群运行状态，精确匹配。取值：Running（运行中）、Exception（异常）、Unknown（未知）。<br>AccessedStatus：接入状态，精确匹配。取值：AccessedNone（未接入）、AccessedInstalling（接入中）、AccessedException（接入异常）、AccessedInstalled（已接入）。<br>DefendStatus：防护状态，精确匹配。取值：Enabled（已防护）、Partial（部分防护）、Disabled（未防护）。<br>RiskStatus：风险检查状态，精确匹配。<br>RiskLevel：风险等级，精确匹配。取值：CRITICAL、HIGH、MEDIUM、LOW、NONE（无风险）。<br>HasHighRisk：仅筛选含高危及以上风险的集群，无需填入 value，传入 HasHighRisk 即生效。<br>Region：地域，精确匹配。<br>OwnerName：负责人，模糊匹配。<br>ClusterAssetIds：集群资产ID，精确匹配。<br>ExcludeClusterAssetIds：排除的集群资产ID，精确排除。</p>
                     * 
                     */
                    void SetFilter(const Filter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>通用过滤条件列表。支持的过滤字段：<br>ClusterId：集群ID，精确匹配。<br>ClusterName：集群名称，模糊匹配。<br>ClusterType：集群类型，精确匹配。取值：TKE_MANAGED_CLUSTER（腾讯云标准集群）、TKE_INDEPENDENT_CLUSTER（标准集群Master自维护）、TKE_SERVERLESS_CLUSTER（Serverless集群）、TKE_EDGE_CLUSTER（边缘集群）、SELF_BUILT（腾讯云内自建）、SELF_BUILT_OTHER（非腾讯云自建/混合云）。<br>RunStatus：集群运行状态，精确匹配。取值：Running（运行中）、Exception（异常）、Unknown（未知）。<br>AccessedStatus：接入状态，精确匹配。取值：AccessedNone（未接入）、AccessedInstalling（接入中）、AccessedException（接入异常）、AccessedInstalled（已接入）。<br>DefendStatus：防护状态，精确匹配。取值：Enabled（已防护）、Partial（部分防护）、Disabled（未防护）。<br>RiskStatus：风险检查状态，精确匹配。<br>RiskLevel：风险等级，精确匹配。取值：CRITICAL、HIGH、MEDIUM、LOW、NONE（无风险）。<br>HasHighRisk：仅筛选含高危及以上风险的集群，无需填入 value，传入 HasHighRisk 即生效。<br>Region：地域，精确匹配。<br>OwnerName：负责人，模糊匹配。<br>ClusterAssetIds：集群资产ID，精确匹配。<br>ExcludeClusterAssetIds：排除的集群资产ID，精确排除。</p>
                     */
                    Filter m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERASSETLISTREQUEST_H_
