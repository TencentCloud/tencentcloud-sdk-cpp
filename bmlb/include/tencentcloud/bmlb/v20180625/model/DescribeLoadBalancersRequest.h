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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBELOADBALANCERSREQUEST_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBELOADBALANCERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * DescribeLoadBalancers请求参数结构体
                */
                class DescribeLoadBalancersRequest : public AbstractModel
                {
                public:
                    DescribeLoadBalancersRequest();
                    ~DescribeLoadBalancersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡器ID数组
                     * @return LoadBalancerIds 负载均衡器ID数组
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置负载均衡器ID数组
                     * @param _loadBalancerIds 负载均衡器ID数组
                     * 
                     */
                    void SetLoadBalancerIds(const std::vector<std::string>& _loadBalancerIds);

                    /**
                     * 判断参数 LoadBalancerIds 是否已赋值
                     * @return LoadBalancerIds 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdsHasBeenSet() const;

                    /**
                     * 获取负载均衡的类型 : open表示公网LB类型，internal表示内网LB类型
                     * @return LoadBalancerType 负载均衡的类型 : open表示公网LB类型，internal表示内网LB类型
                     * 
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置负载均衡的类型 : open表示公网LB类型，internal表示内网LB类型
                     * @param _loadBalancerType 负载均衡的类型 : open表示公网LB类型，internal表示内网LB类型
                     * 
                     */
                    void SetLoadBalancerType(const std::string& _loadBalancerType);

                    /**
                     * 判断参数 LoadBalancerType 是否已赋值
                     * @return LoadBalancerType 是否已赋值
                     * 
                     */
                    bool LoadBalancerTypeHasBeenSet() const;

                    /**
                     * 获取负载均衡器名称
                     * @return LoadBalancerName 负载均衡器名称
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置负载均衡器名称
                     * @param _loadBalancerName 负载均衡器名称
                     * 
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     * 
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取负载均衡域名。规则：1-60个小写英文字母、数字、点号“.”或连接线“-”。内网类型的负载均衡不能配置该字段
                     * @return Domain 负载均衡域名。规则：1-60个小写英文字母、数字、点号“.”或连接线“-”。内网类型的负载均衡不能配置该字段
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置负载均衡域名。规则：1-60个小写英文字母、数字、点号“.”或连接线“-”。内网类型的负载均衡不能配置该字段
                     * @param _domain 负载均衡域名。规则：1-60个小写英文字母、数字、点号“.”或连接线“-”。内网类型的负载均衡不能配置该字段
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取负载均衡获得的公网IP地址,支持多个
                     * @return LoadBalancerVips 负载均衡获得的公网IP地址,支持多个
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerVips() const;

                    /**
                     * 设置负载均衡获得的公网IP地址,支持多个
                     * @param _loadBalancerVips 负载均衡获得的公网IP地址,支持多个
                     * 
                     */
                    void SetLoadBalancerVips(const std::vector<std::string>& _loadBalancerVips);

                    /**
                     * 判断参数 LoadBalancerVips 是否已赋值
                     * @return LoadBalancerVips 是否已赋值
                     * 
                     */
                    bool LoadBalancerVipsHasBeenSet() const;

                    /**
                     * 获取数据偏移量，默认为0
                     * @return Offset 数据偏移量，默认为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置数据偏移量，默认为0
                     * @param _offset 数据偏移量，默认为0
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
                     * 获取返回数据长度，默认为20
                     * @return Limit 返回数据长度，默认为20
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数据长度，默认为20
                     * @param _limit 返回数据长度，默认为20
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
                     * 获取模糊查找名称、域名、VIP
                     * @return SearchKey 模糊查找名称、域名、VIP
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置模糊查找名称、域名、VIP
                     * @param _searchKey 模糊查找名称、域名、VIP
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取排序字段，支持：loadBalancerName,createTime,domain,loadBalancerType
                     * @return OrderBy 排序字段，支持：loadBalancerName,createTime,domain,loadBalancerType
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段，支持：loadBalancerName,createTime,domain,loadBalancerType
                     * @param _orderBy 排序字段，支持：loadBalancerName,createTime,domain,loadBalancerType
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取1倒序，0顺序，默认顺序
                     * @return OrderType 1倒序，0顺序，默认顺序
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置1倒序，0顺序，默认顺序
                     * @param _orderType 1倒序，0顺序，默认顺序
                     * 
                     */
                    void SetOrderType(const int64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取是否筛选独占集群，0表示非独占集群，1表示四层独占集群，2表示七层独占集群，3表示四层和七层独占集群，4表示共享容灾
                     * @return Exclusive 是否筛选独占集群，0表示非独占集群，1表示四层独占集群，2表示七层独占集群，3表示四层和七层独占集群，4表示共享容灾
                     * 
                     */
                    uint64_t GetExclusive() const;

                    /**
                     * 设置是否筛选独占集群，0表示非独占集群，1表示四层独占集群，2表示七层独占集群，3表示四层和七层独占集群，4表示共享容灾
                     * @param _exclusive 是否筛选独占集群，0表示非独占集群，1表示四层独占集群，2表示七层独占集群，3表示四层和七层独占集群，4表示共享容灾
                     * 
                     */
                    void SetExclusive(const uint64_t& _exclusive);

                    /**
                     * 判断参数 Exclusive 是否已赋值
                     * @return Exclusive 是否已赋值
                     * 
                     */
                    bool ExclusiveHasBeenSet() const;

                    /**
                     * 获取该负载均衡对应的tgw集群（fullnat,tunnel,dnat）
                     * @return TgwSetType 该负载均衡对应的tgw集群（fullnat,tunnel,dnat）
                     * 
                     */
                    std::string GetTgwSetType() const;

                    /**
                     * 设置该负载均衡对应的tgw集群（fullnat,tunnel,dnat）
                     * @param _tgwSetType 该负载均衡对应的tgw集群（fullnat,tunnel,dnat）
                     * 
                     */
                    void SetTgwSetType(const std::string& _tgwSetType);

                    /**
                     * 判断参数 TgwSetType 是否已赋值
                     * @return TgwSetType 是否已赋值
                     * 
                     */
                    bool TgwSetTypeHasBeenSet() const;

                    /**
                     * 获取该负载均衡对应的所在的私有网络ID
                     * @return VpcId 该负载均衡对应的所在的私有网络ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置该负载均衡对应的所在的私有网络ID
                     * @param _vpcId 该负载均衡对应的所在的私有网络ID
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取'CONFLIST' 查询带confId的LB列表，'CONFID' 查询某个confId绑定的LB列表
                     * @return QueryType 'CONFLIST' 查询带confId的LB列表，'CONFID' 查询某个confId绑定的LB列表
                     * 
                     */
                    std::string GetQueryType() const;

                    /**
                     * 设置'CONFLIST' 查询带confId的LB列表，'CONFID' 查询某个confId绑定的LB列表
                     * @param _queryType 'CONFLIST' 查询带confId的LB列表，'CONFID' 查询某个confId绑定的LB列表
                     * 
                     */
                    void SetQueryType(const std::string& _queryType);

                    /**
                     * 判断参数 QueryType 是否已赋值
                     * @return QueryType 是否已赋值
                     * 
                     */
                    bool QueryTypeHasBeenSet() const;

                    /**
                     * 获取个性化配置ID
                     * @return ConfId 个性化配置ID
                     * 
                     */
                    std::string GetConfId() const;

                    /**
                     * 设置个性化配置ID
                     * @param _confId 个性化配置ID
                     * 
                     */
                    void SetConfId(const std::string& _confId);

                    /**
                     * 判断参数 ConfId 是否已赋值
                     * @return ConfId 是否已赋值
                     * 
                     */
                    bool ConfIdHasBeenSet() const;

                private:

                    /**
                     * 负载均衡器ID数组
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                    /**
                     * 负载均衡的类型 : open表示公网LB类型，internal表示内网LB类型
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * 负载均衡器名称
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * 负载均衡域名。规则：1-60个小写英文字母、数字、点号“.”或连接线“-”。内网类型的负载均衡不能配置该字段
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 负载均衡获得的公网IP地址,支持多个
                     */
                    std::vector<std::string> m_loadBalancerVips;
                    bool m_loadBalancerVipsHasBeenSet;

                    /**
                     * 数据偏移量，默认为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数据长度，默认为20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 模糊查找名称、域名、VIP
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * 排序字段，支持：loadBalancerName,createTime,domain,loadBalancerType
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 1倒序，0顺序，默认顺序
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 项目ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 是否筛选独占集群，0表示非独占集群，1表示四层独占集群，2表示七层独占集群，3表示四层和七层独占集群，4表示共享容灾
                     */
                    uint64_t m_exclusive;
                    bool m_exclusiveHasBeenSet;

                    /**
                     * 该负载均衡对应的tgw集群（fullnat,tunnel,dnat）
                     */
                    std::string m_tgwSetType;
                    bool m_tgwSetTypeHasBeenSet;

                    /**
                     * 该负载均衡对应的所在的私有网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 'CONFLIST' 查询带confId的LB列表，'CONFID' 查询某个confId绑定的LB列表
                     */
                    std::string m_queryType;
                    bool m_queryTypeHasBeenSet;

                    /**
                     * 个性化配置ID
                     */
                    std::string m_confId;
                    bool m_confIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBELOADBALANCERSREQUEST_H_
