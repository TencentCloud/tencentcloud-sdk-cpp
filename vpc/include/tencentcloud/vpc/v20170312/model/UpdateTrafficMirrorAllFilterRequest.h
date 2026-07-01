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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_UPDATETRAFFICMIRRORALLFILTERREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_UPDATETRAFFICMIRRORALLFILTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/TrafficMirrorFilter.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * UpdateTrafficMirrorAllFilter请求参数结构体
                */
                class UpdateTrafficMirrorAllFilterRequest : public AbstractModel
                {
                public:
                    UpdateTrafficMirrorAllFilterRequest();
                    ~UpdateTrafficMirrorAllFilterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>流量镜像实例ID</p>
                     * @return TrafficMirrorId <p>流量镜像实例ID</p>
                     * 
                     */
                    std::string GetTrafficMirrorId() const;

                    /**
                     * 设置<p>流量镜像实例ID</p>
                     * @param _trafficMirrorId <p>流量镜像实例ID</p>
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
                     * 获取<p>流量镜像采集方向</p>
                     * @return Direction <p>流量镜像采集方向</p>
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置<p>流量镜像采集方向</p>
                     * @param _direction <p>流量镜像采集方向</p>
                     * 
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取<p>流量镜像采集对象</p>
                     * @return CollectorSrcs <p>流量镜像采集对象</p>
                     * 
                     */
                    std::vector<std::string> GetCollectorSrcs() const;

                    /**
                     * 设置<p>流量镜像采集对象</p>
                     * @param _collectorSrcs <p>流量镜像采集对象</p>
                     * 
                     */
                    void SetCollectorSrcs(const std::vector<std::string>& _collectorSrcs);

                    /**
                     * 判断参数 CollectorSrcs 是否已赋值
                     * @return CollectorSrcs 是否已赋值
                     * 
                     */
                    bool CollectorSrcsHasBeenSet() const;

                    /**
                     * 获取<p>流量镜像需要过滤的natgw实例</p>
                     * @return NatId <p>流量镜像需要过滤的natgw实例</p>
                     * 
                     */
                    std::string GetNatId() const;

                    /**
                     * 设置<p>流量镜像需要过滤的natgw实例</p>
                     * @param _natId <p>流量镜像需要过滤的natgw实例</p>
                     * 
                     */
                    void SetNatId(const std::string& _natId);

                    /**
                     * 判断参数 NatId 是否已赋值
                     * @return NatId 是否已赋值
                     * 
                     */
                    bool NatIdHasBeenSet() const;

                    /**
                     * 获取<p>流量镜像需要过滤的五元组规则</p>
                     * @return CollectorNormalFilters <p>流量镜像需要过滤的五元组规则</p>
                     * 
                     */
                    std::vector<TrafficMirrorFilter> GetCollectorNormalFilters() const;

                    /**
                     * 设置<p>流量镜像需要过滤的五元组规则</p>
                     * @param _collectorNormalFilters <p>流量镜像需要过滤的五元组规则</p>
                     * 
                     */
                    void SetCollectorNormalFilters(const std::vector<TrafficMirrorFilter>& _collectorNormalFilters);

                    /**
                     * 判断参数 CollectorNormalFilters 是否已赋值
                     * @return CollectorNormalFilters 是否已赋值
                     * 
                     */
                    bool CollectorNormalFiltersHasBeenSet() const;

                    /**
                     * 获取<p>流量镜像入站过滤规则。</p>
                     * @return IngressFilterRules <p>流量镜像入站过滤规则。</p>
                     * 
                     */
                    std::vector<TrafficMirrorFilter> GetIngressFilterRules() const;

                    /**
                     * 设置<p>流量镜像入站过滤规则。</p>
                     * @param _ingressFilterRules <p>流量镜像入站过滤规则。</p>
                     * 
                     */
                    void SetIngressFilterRules(const std::vector<TrafficMirrorFilter>& _ingressFilterRules);

                    /**
                     * 判断参数 IngressFilterRules 是否已赋值
                     * @return IngressFilterRules 是否已赋值
                     * 
                     */
                    bool IngressFilterRulesHasBeenSet() const;

                    /**
                     * 获取<p>流量镜像出站过滤规则。</p>
                     * @return EgressFilterRules <p>流量镜像出站过滤规则。</p>
                     * 
                     */
                    std::vector<TrafficMirrorFilter> GetEgressFilterRules() const;

                    /**
                     * 设置<p>流量镜像出站过滤规则。</p>
                     * @param _egressFilterRules <p>流量镜像出站过滤规则。</p>
                     * 
                     */
                    void SetEgressFilterRules(const std::vector<TrafficMirrorFilter>& _egressFilterRules);

                    /**
                     * 判断参数 EgressFilterRules 是否已赋值
                     * @return EgressFilterRules 是否已赋值
                     * 
                     */
                    bool EgressFilterRulesHasBeenSet() const;

                private:

                    /**
                     * <p>流量镜像实例ID</p>
                     */
                    std::string m_trafficMirrorId;
                    bool m_trafficMirrorIdHasBeenSet;

                    /**
                     * <p>流量镜像采集方向</p>
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * <p>流量镜像采集对象</p>
                     */
                    std::vector<std::string> m_collectorSrcs;
                    bool m_collectorSrcsHasBeenSet;

                    /**
                     * <p>流量镜像需要过滤的natgw实例</p>
                     */
                    std::string m_natId;
                    bool m_natIdHasBeenSet;

                    /**
                     * <p>流量镜像需要过滤的五元组规则</p>
                     */
                    std::vector<TrafficMirrorFilter> m_collectorNormalFilters;
                    bool m_collectorNormalFiltersHasBeenSet;

                    /**
                     * <p>流量镜像入站过滤规则。</p>
                     */
                    std::vector<TrafficMirrorFilter> m_ingressFilterRules;
                    bool m_ingressFilterRulesHasBeenSet;

                    /**
                     * <p>流量镜像出站过滤规则。</p>
                     */
                    std::vector<TrafficMirrorFilter> m_egressFilterRules;
                    bool m_egressFilterRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_UPDATETRAFFICMIRRORALLFILTERREQUEST_H_
