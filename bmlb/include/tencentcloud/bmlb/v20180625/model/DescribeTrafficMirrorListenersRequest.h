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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBETRAFFICMIRRORLISTENERSREQUEST_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBETRAFFICMIRRORLISTENERSREQUEST_H_

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
                * DescribeTrafficMirrorListeners请求参数结构体
                */
                class DescribeTrafficMirrorListenersRequest : public AbstractModel
                {
                public:
                    DescribeTrafficMirrorListenersRequest();
                    ~DescribeTrafficMirrorListenersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取流量镜像实例ID。
                     * @return TrafficMirrorId 流量镜像实例ID。
                     * 
                     */
                    std::string GetTrafficMirrorId() const;

                    /**
                     * 设置流量镜像实例ID。
                     * @param _trafficMirrorId 流量镜像实例ID。
                     * 
                     */
                    void SetTrafficMirrorId(const std::string& _trafficMirrorId);

                    /**
                     * 判断参数 TrafficMirrorId 是否已赋值
                     * @return TrafficMirrorId 是否已赋值
                     * 
                     */
                    bool TrafficMirrorIdHasBeenSet() const;

                    /**
                     * 获取分页的偏移量，也即从第几条记录开始查询
                     * @return Offset 分页的偏移量，也即从第几条记录开始查询
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页的偏移量，也即从第几条记录开始查询
                     * @param _offset 分页的偏移量，也即从第几条记录开始查询
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取单次查询返回的条目数，默认值：500。
                     * @return Limit 单次查询返回的条目数，默认值：500。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单次查询返回的条目数，默认值：500。
                     * @param _limit 单次查询返回的条目数，默认值：500。
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
                     * 获取待搜索的负载均衡Id。
                     * @return SearchLoadBalancerIds 待搜索的负载均衡Id。
                     * 
                     */
                    std::vector<std::string> GetSearchLoadBalancerIds() const;

                    /**
                     * 设置待搜索的负载均衡Id。
                     * @param _searchLoadBalancerIds 待搜索的负载均衡Id。
                     * 
                     */
                    void SetSearchLoadBalancerIds(const std::vector<std::string>& _searchLoadBalancerIds);

                    /**
                     * 判断参数 SearchLoadBalancerIds 是否已赋值
                     * @return SearchLoadBalancerIds 是否已赋值
                     * 
                     */
                    bool SearchLoadBalancerIdsHasBeenSet() const;

                    /**
                     * 获取待搜索的负载均衡名称。
                     * @return SearchLoadBalancerNames 待搜索的负载均衡名称。
                     * 
                     */
                    std::vector<std::string> GetSearchLoadBalancerNames() const;

                    /**
                     * 设置待搜索的负载均衡名称。
                     * @param _searchLoadBalancerNames 待搜索的负载均衡名称。
                     * 
                     */
                    void SetSearchLoadBalancerNames(const std::vector<std::string>& _searchLoadBalancerNames);

                    /**
                     * 判断参数 SearchLoadBalancerNames 是否已赋值
                     * @return SearchLoadBalancerNames 是否已赋值
                     * 
                     */
                    bool SearchLoadBalancerNamesHasBeenSet() const;

                    /**
                     * 获取待搜索的Vip。
                     * @return SearchVips 待搜索的Vip。
                     * 
                     */
                    std::vector<std::string> GetSearchVips() const;

                    /**
                     * 设置待搜索的Vip。
                     * @param _searchVips 待搜索的Vip。
                     * 
                     */
                    void SetSearchVips(const std::vector<std::string>& _searchVips);

                    /**
                     * 判断参数 SearchVips 是否已赋值
                     * @return SearchVips 是否已赋值
                     * 
                     */
                    bool SearchVipsHasBeenSet() const;

                    /**
                     * 获取待搜索的监听器ID。
                     * @return SearchListenerIds 待搜索的监听器ID。
                     * 
                     */
                    std::vector<std::string> GetSearchListenerIds() const;

                    /**
                     * 设置待搜索的监听器ID。
                     * @param _searchListenerIds 待搜索的监听器ID。
                     * 
                     */
                    void SetSearchListenerIds(const std::vector<std::string>& _searchListenerIds);

                    /**
                     * 判断参数 SearchListenerIds 是否已赋值
                     * @return SearchListenerIds 是否已赋值
                     * 
                     */
                    bool SearchListenerIdsHasBeenSet() const;

                    /**
                     * 获取待搜索的监听器名称。
                     * @return SearchListenerNames 待搜索的监听器名称。
                     * 
                     */
                    std::vector<std::string> GetSearchListenerNames() const;

                    /**
                     * 设置待搜索的监听器名称。
                     * @param _searchListenerNames 待搜索的监听器名称。
                     * 
                     */
                    void SetSearchListenerNames(const std::vector<std::string>& _searchListenerNames);

                    /**
                     * 判断参数 SearchListenerNames 是否已赋值
                     * @return SearchListenerNames 是否已赋值
                     * 
                     */
                    bool SearchListenerNamesHasBeenSet() const;

                    /**
                     * 获取待搜索的协议名称。
                     * @return SearchProtocols 待搜索的协议名称。
                     * 
                     */
                    std::vector<std::string> GetSearchProtocols() const;

                    /**
                     * 设置待搜索的协议名称。
                     * @param _searchProtocols 待搜索的协议名称。
                     * 
                     */
                    void SetSearchProtocols(const std::vector<std::string>& _searchProtocols);

                    /**
                     * 判断参数 SearchProtocols 是否已赋值
                     * @return SearchProtocols 是否已赋值
                     * 
                     */
                    bool SearchProtocolsHasBeenSet() const;

                    /**
                     * 获取待搜索的端口。
                     * @return SearchLoadBalancerPorts 待搜索的端口。
                     * 
                     */
                    std::vector<uint64_t> GetSearchLoadBalancerPorts() const;

                    /**
                     * 设置待搜索的端口。
                     * @param _searchLoadBalancerPorts 待搜索的端口。
                     * 
                     */
                    void SetSearchLoadBalancerPorts(const std::vector<uint64_t>& _searchLoadBalancerPorts);

                    /**
                     * 判断参数 SearchLoadBalancerPorts 是否已赋值
                     * @return SearchLoadBalancerPorts 是否已赋值
                     * 
                     */
                    bool SearchLoadBalancerPortsHasBeenSet() const;

                private:

                    /**
                     * 流量镜像实例ID。
                     */
                    std::string m_trafficMirrorId;
                    bool m_trafficMirrorIdHasBeenSet;

                    /**
                     * 分页的偏移量，也即从第几条记录开始查询
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 单次查询返回的条目数，默认值：500。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 待搜索的负载均衡Id。
                     */
                    std::vector<std::string> m_searchLoadBalancerIds;
                    bool m_searchLoadBalancerIdsHasBeenSet;

                    /**
                     * 待搜索的负载均衡名称。
                     */
                    std::vector<std::string> m_searchLoadBalancerNames;
                    bool m_searchLoadBalancerNamesHasBeenSet;

                    /**
                     * 待搜索的Vip。
                     */
                    std::vector<std::string> m_searchVips;
                    bool m_searchVipsHasBeenSet;

                    /**
                     * 待搜索的监听器ID。
                     */
                    std::vector<std::string> m_searchListenerIds;
                    bool m_searchListenerIdsHasBeenSet;

                    /**
                     * 待搜索的监听器名称。
                     */
                    std::vector<std::string> m_searchListenerNames;
                    bool m_searchListenerNamesHasBeenSet;

                    /**
                     * 待搜索的协议名称。
                     */
                    std::vector<std::string> m_searchProtocols;
                    bool m_searchProtocolsHasBeenSet;

                    /**
                     * 待搜索的端口。
                     */
                    std::vector<uint64_t> m_searchLoadBalancerPorts;
                    bool m_searchLoadBalancerPortsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBETRAFFICMIRRORLISTENERSREQUEST_H_
