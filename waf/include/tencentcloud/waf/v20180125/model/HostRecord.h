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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_HOSTRECORD_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_HOSTRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/LoadBalancer.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * clb-waf防护域名
                */
                class HostRecord : public AbstractModel
                {
                public:
                    HostRecord();
                    ~HostRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名
                     * @return Domain 域名
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param Domain 域名
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取域名ID
                     * @return DomainId 域名ID
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置域名ID
                     * @param DomainId 域名ID
                     */
                    void SetDomainId(const std::string& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取主域名，入参时为空
                     * @return MainDomain 主域名，入参时为空
                     */
                    std::string GetMainDomain() const;

                    /**
                     * 设置主域名，入参时为空
                     * @param MainDomain 主域名，入参时为空
                     */
                    void SetMainDomain(const std::string& _mainDomain);

                    /**
                     * 判断参数 MainDomain 是否已赋值
                     * @return MainDomain 是否已赋值
                     */
                    bool MainDomainHasBeenSet() const;

                    /**
                     * 获取waf模式，同saas waf保持一致
                     * @return Mode waf模式，同saas waf保持一致
                     */
                    uint64_t GetMode() const;

                    /**
                     * 设置waf模式，同saas waf保持一致
                     * @param Mode waf模式，同saas waf保持一致
                     */
                    void SetMode(const uint64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取waf和LD的绑定，0：没有绑定，1：绑定
                     * @return Status waf和LD的绑定，0：没有绑定，1：绑定
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置waf和LD的绑定，0：没有绑定，1：绑定
                     * @param Status waf和LD的绑定，0：没有绑定，1：绑定
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取域名状态，0：正常，1：未检测到流量，2：即将过期，3：过期
                     * @return State 域名状态，0：正常，1：未检测到流量，2：即将过期，3：过期
                     */
                    uint64_t GetState() const;

                    /**
                     * 设置域名状态，0：正常，1：未检测到流量，2：即将过期，3：过期
                     * @param State 域名状态，0：正常，1：未检测到流量，2：即将过期，3：过期
                     */
                    void SetState(const uint64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取使用的规则，同saas waf保持一致
                     * @return Engine 使用的规则，同saas waf保持一致
                     */
                    uint64_t GetEngine() const;

                    /**
                     * 设置使用的规则，同saas waf保持一致
                     * @param Engine 使用的规则，同saas waf保持一致
                     */
                    void SetEngine(const uint64_t& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取是否开启代理，0：不开启，1：开启
                     * @return IsCdn 是否开启代理，0：不开启，1：开启
                     */
                    uint64_t GetIsCdn() const;

                    /**
                     * 设置是否开启代理，0：不开启，1：开启
                     * @param IsCdn 是否开启代理，0：不开启，1：开启
                     */
                    void SetIsCdn(const uint64_t& _isCdn);

                    /**
                     * 判断参数 IsCdn 是否已赋值
                     * @return IsCdn 是否已赋值
                     */
                    bool IsCdnHasBeenSet() const;

                    /**
                     * 获取绑定的LB列表
                     * @return LoadBalancerSet 绑定的LB列表
                     */
                    std::vector<LoadBalancer> GetLoadBalancerSet() const;

                    /**
                     * 设置绑定的LB列表
                     * @param LoadBalancerSet 绑定的LB列表
                     */
                    void SetLoadBalancerSet(const std::vector<LoadBalancer>& _loadBalancerSet);

                    /**
                     * 判断参数 LoadBalancerSet 是否已赋值
                     * @return LoadBalancerSet 是否已赋值
                     */
                    bool LoadBalancerSetHasBeenSet() const;

                    /**
                     * 获取域名绑定的LB的地域，以,分割多个地域
                     * @return Region 域名绑定的LB的地域，以,分割多个地域
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置域名绑定的LB的地域，以,分割多个地域
                     * @param Region 域名绑定的LB的地域，以,分割多个地域
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取产品分类，取值为：sparta-waf、clb-waf、cdn-waf
                     * @return Edition 产品分类，取值为：sparta-waf、clb-waf、cdn-waf
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置产品分类，取值为：sparta-waf、clb-waf、cdn-waf
                     * @param Edition 产品分类，取值为：sparta-waf、clb-waf、cdn-waf
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取WAF的流量模式，1：清洗模式，0：镜像模式
                     * @return FlowMode WAF的流量模式，1：清洗模式，0：镜像模式
                     */
                    uint64_t GetFlowMode() const;

                    /**
                     * 设置WAF的流量模式，1：清洗模式，0：镜像模式
                     * @param FlowMode WAF的流量模式，1：清洗模式，0：镜像模式
                     */
                    void SetFlowMode(const uint64_t& _flowMode);

                    /**
                     * 判断参数 FlowMode 是否已赋值
                     * @return FlowMode 是否已赋值
                     */
                    bool FlowModeHasBeenSet() const;

                    /**
                     * 获取是否开启访问日志，1：开启，0：关闭
                     * @return ClsStatus 是否开启访问日志，1：开启，0：关闭
                     */
                    uint64_t GetClsStatus() const;

                    /**
                     * 设置是否开启访问日志，1：开启，0：关闭
                     * @param ClsStatus 是否开启访问日志，1：开启，0：关闭
                     */
                    void SetClsStatus(const uint64_t& _clsStatus);

                    /**
                     * 判断参数 ClsStatus 是否已赋值
                     * @return ClsStatus 是否已赋值
                     */
                    bool ClsStatusHasBeenSet() const;

                    /**
                     * 获取防护等级，可选值100,200,300
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Level 防护等级，可选值100,200,300
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置防护等级，可选值100,200,300
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Level 防护等级，可选值100,200,300
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取域名需要下发到的cdc集群列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CdcClusters 域名需要下发到的cdc集群列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetCdcClusters() const;

                    /**
                     * 设置域名需要下发到的cdc集群列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CdcClusters 域名需要下发到的cdc集群列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCdcClusters(const std::vector<std::string>& _cdcClusters);

                    /**
                     * 判断参数 CdcClusters 是否已赋值
                     * @return CdcClusters 是否已赋值
                     */
                    bool CdcClustersHasBeenSet() const;

                    /**
                     * 获取应用型负载均衡类型: clb或者apisix，默认clb
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlbType 应用型负载均衡类型: clb或者apisix，默认clb
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAlbType() const;

                    /**
                     * 设置应用型负载均衡类型: clb或者apisix，默认clb
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AlbType 应用型负载均衡类型: clb或者apisix，默认clb
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAlbType(const std::string& _albType);

                    /**
                     * 判断参数 AlbType 是否已赋值
                     * @return AlbType 是否已赋值
                     */
                    bool AlbTypeHasBeenSet() const;

                    /**
                     * 获取IsCdn=3时，需要填此参数，表示自定义header
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpHeaders IsCdn=3时，需要填此参数，表示自定义header
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetIpHeaders() const;

                    /**
                     * 设置IsCdn=3时，需要填此参数，表示自定义header
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IpHeaders IsCdn=3时，需要填此参数，表示自定义header
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIpHeaders(const std::vector<std::string>& _ipHeaders);

                    /**
                     * 判断参数 IpHeaders 是否已赋值
                     * @return IpHeaders 是否已赋值
                     */
                    bool IpHeadersHasBeenSet() const;

                    /**
                     * 获取规则引擎类型， 1: menshen,   2:tiga
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineType 规则引擎类型， 1: menshen,   2:tiga
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetEngineType() const;

                    /**
                     * 设置规则引擎类型， 1: menshen,   2:tiga
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EngineType 规则引擎类型， 1: menshen,   2:tiga
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEngineType(const int64_t& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     */
                    bool EngineTypeHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 域名ID
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 主域名，入参时为空
                     */
                    std::string m_mainDomain;
                    bool m_mainDomainHasBeenSet;

                    /**
                     * waf模式，同saas waf保持一致
                     */
                    uint64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * waf和LD的绑定，0：没有绑定，1：绑定
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 域名状态，0：正常，1：未检测到流量，2：即将过期，3：过期
                     */
                    uint64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 使用的规则，同saas waf保持一致
                     */
                    uint64_t m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * 是否开启代理，0：不开启，1：开启
                     */
                    uint64_t m_isCdn;
                    bool m_isCdnHasBeenSet;

                    /**
                     * 绑定的LB列表
                     */
                    std::vector<LoadBalancer> m_loadBalancerSet;
                    bool m_loadBalancerSetHasBeenSet;

                    /**
                     * 域名绑定的LB的地域，以,分割多个地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 产品分类，取值为：sparta-waf、clb-waf、cdn-waf
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * WAF的流量模式，1：清洗模式，0：镜像模式
                     */
                    uint64_t m_flowMode;
                    bool m_flowModeHasBeenSet;

                    /**
                     * 是否开启访问日志，1：开启，0：关闭
                     */
                    uint64_t m_clsStatus;
                    bool m_clsStatusHasBeenSet;

                    /**
                     * 防护等级，可选值100,200,300
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 域名需要下发到的cdc集群列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_cdcClusters;
                    bool m_cdcClustersHasBeenSet;

                    /**
                     * 应用型负载均衡类型: clb或者apisix，默认clb
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_albType;
                    bool m_albTypeHasBeenSet;

                    /**
                     * IsCdn=3时，需要填此参数，表示自定义header
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_ipHeaders;
                    bool m_ipHeadersHasBeenSet;

                    /**
                     * 规则引擎类型， 1: menshen,   2:tiga
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_engineType;
                    bool m_engineTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_HOSTRECORD_H_
