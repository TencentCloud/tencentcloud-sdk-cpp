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
                * 负载均衡型WAF域名信息
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
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
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
                     * 获取域名唯一ID
                     * @return DomainId 域名唯一ID
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置域名唯一ID
                     * @param _domainId 域名唯一ID
                     * 
                     */
                    void SetDomainId(const std::string& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取主域名，入参时为空
                     * @return MainDomain 主域名，入参时为空
                     * 
                     */
                    std::string GetMainDomain() const;

                    /**
                     * 设置主域名，入参时为空
                     * @param _mainDomain 主域名，入参时为空
                     * 
                     */
                    void SetMainDomain(const std::string& _mainDomain);

                    /**
                     * 判断参数 MainDomain 是否已赋值
                     * @return MainDomain 是否已赋值
                     * 
                     */
                    bool MainDomainHasBeenSet() const;

                    /**
                     * 获取规则引擎防护模式。
0：观察模式
1：拦截模式
                     * @return Mode 规则引擎防护模式。
0：观察模式
1：拦截模式
                     * 
                     */
                    uint64_t GetMode() const;

                    /**
                     * 设置规则引擎防护模式。
0：观察模式
1：拦截模式
                     * @param _mode 规则引擎防护模式。
0：观察模式
1：拦截模式
                     * 
                     */
                    void SetMode(const uint64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取waf和负载均衡器的绑定关系。
0：未绑定
1：已绑定
                     * @return Status waf和负载均衡器的绑定关系。
0：未绑定
1：已绑定
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置waf和负载均衡器的绑定关系。
0：未绑定
1：已绑定
                     * @param _status waf和负载均衡器的绑定关系。
0：未绑定
1：已绑定
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取clbwaf域名监听器状态。
0：操作成功
4：正在绑定LB
6：正在解绑LB 
7：解绑LB失败 
8：绑定LB失败 
10：内部错误
                     * @return State clbwaf域名监听器状态。
0：操作成功
4：正在绑定LB
6：正在解绑LB 
7：解绑LB失败 
8：绑定LB失败 
10：内部错误
                     * 
                     */
                    uint64_t GetState() const;

                    /**
                     * 设置clbwaf域名监听器状态。
0：操作成功
4：正在绑定LB
6：正在解绑LB 
7：解绑LB失败 
8：绑定LB失败 
10：内部错误
                     * @param _state clbwaf域名监听器状态。
0：操作成功
4：正在绑定LB
6：正在解绑LB 
7：解绑LB失败 
8：绑定LB失败 
10：内部错误
                     * 
                     */
                    void SetState(const uint64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取规则引擎和AI引擎防护模式联合状态。
1:初始状态,规则引擎拦截&&AI引擎未操作开关状态
10：规则引擎观察&&AI引擎关闭模式 
11：规则引擎观察&&AI引擎观察模式 
12：规则引擎观察&&AI引擎拦截模式 
20：规则引擎拦截&&AI引擎关闭模式 
21：规则引擎拦截&&AI引擎观察模式 
22：规则引擎拦截&&AI引擎拦截模式
                     * @return Engine 规则引擎和AI引擎防护模式联合状态。
1:初始状态,规则引擎拦截&&AI引擎未操作开关状态
10：规则引擎观察&&AI引擎关闭模式 
11：规则引擎观察&&AI引擎观察模式 
12：规则引擎观察&&AI引擎拦截模式 
20：规则引擎拦截&&AI引擎关闭模式 
21：规则引擎拦截&&AI引擎观察模式 
22：规则引擎拦截&&AI引擎拦截模式
                     * 
                     */
                    uint64_t GetEngine() const;

                    /**
                     * 设置规则引擎和AI引擎防护模式联合状态。
1:初始状态,规则引擎拦截&&AI引擎未操作开关状态
10：规则引擎观察&&AI引擎关闭模式 
11：规则引擎观察&&AI引擎观察模式 
12：规则引擎观察&&AI引擎拦截模式 
20：规则引擎拦截&&AI引擎关闭模式 
21：规则引擎拦截&&AI引擎观察模式 
22：规则引擎拦截&&AI引擎拦截模式
                     * @param _engine 规则引擎和AI引擎防护模式联合状态。
1:初始状态,规则引擎拦截&&AI引擎未操作开关状态
10：规则引擎观察&&AI引擎关闭模式 
11：规则引擎观察&&AI引擎观察模式 
12：规则引擎观察&&AI引擎拦截模式 
20：规则引擎拦截&&AI引擎关闭模式 
21：规则引擎拦截&&AI引擎观察模式 
22：规则引擎拦截&&AI引擎拦截模式
                     * 
                     */
                    void SetEngine(const uint64_t& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     * 
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取waf前是否部署有七层代理服务。 0：没有部署代理服务 1：有部署代理服务，waf将使用XFF获取客户端IP 2：有部署代理服务，waf将使用remote_addr获取客户端IP 3：有部署代理服务，waf将使用ip_headers中的自定义header获取客户端IP
                     * @return IsCdn waf前是否部署有七层代理服务。 0：没有部署代理服务 1：有部署代理服务，waf将使用XFF获取客户端IP 2：有部署代理服务，waf将使用remote_addr获取客户端IP 3：有部署代理服务，waf将使用ip_headers中的自定义header获取客户端IP
                     * 
                     */
                    uint64_t GetIsCdn() const;

                    /**
                     * 设置waf前是否部署有七层代理服务。 0：没有部署代理服务 1：有部署代理服务，waf将使用XFF获取客户端IP 2：有部署代理服务，waf将使用remote_addr获取客户端IP 3：有部署代理服务，waf将使用ip_headers中的自定义header获取客户端IP
                     * @param _isCdn waf前是否部署有七层代理服务。 0：没有部署代理服务 1：有部署代理服务，waf将使用XFF获取客户端IP 2：有部署代理服务，waf将使用remote_addr获取客户端IP 3：有部署代理服务，waf将使用ip_headers中的自定义header获取客户端IP
                     * 
                     */
                    void SetIsCdn(const uint64_t& _isCdn);

                    /**
                     * 判断参数 IsCdn 是否已赋值
                     * @return IsCdn 是否已赋值
                     * 
                     */
                    bool IsCdnHasBeenSet() const;

                    /**
                     * 获取绑定的负载均衡器信息列表
                     * @return LoadBalancerSet 绑定的负载均衡器信息列表
                     * 
                     */
                    std::vector<LoadBalancer> GetLoadBalancerSet() const;

                    /**
                     * 设置绑定的负载均衡器信息列表
                     * @param _loadBalancerSet 绑定的负载均衡器信息列表
                     * 
                     */
                    void SetLoadBalancerSet(const std::vector<LoadBalancer>& _loadBalancerSet);

                    /**
                     * 判断参数 LoadBalancerSet 是否已赋值
                     * @return LoadBalancerSet 是否已赋值
                     * 
                     */
                    bool LoadBalancerSetHasBeenSet() const;

                    /**
                     * 获取域名绑定的LB的地域，以逗号分割多个地域
                     * @return Region 域名绑定的LB的地域，以逗号分割多个地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置域名绑定的LB的地域，以逗号分割多个地域
                     * @param _region 域名绑定的LB的地域，以逗号分割多个地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取域名所属实例类型。负载均衡型WAF为"clb-waf"
                     * @return Edition 域名所属实例类型。负载均衡型WAF为"clb-waf"
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置域名所属实例类型。负载均衡型WAF为"clb-waf"
                     * @param _edition 域名所属实例类型。负载均衡型WAF为"clb-waf"
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取负载均衡型WAF域名的流量模式。
1：清洗模式
0：镜像模式
                     * @return FlowMode 负载均衡型WAF域名的流量模式。
1：清洗模式
0：镜像模式
                     * 
                     */
                    uint64_t GetFlowMode() const;

                    /**
                     * 设置负载均衡型WAF域名的流量模式。
1：清洗模式
0：镜像模式
                     * @param _flowMode 负载均衡型WAF域名的流量模式。
1：清洗模式
0：镜像模式
                     * 
                     */
                    void SetFlowMode(const uint64_t& _flowMode);

                    /**
                     * 判断参数 FlowMode 是否已赋值
                     * @return FlowMode 是否已赋值
                     * 
                     */
                    bool FlowModeHasBeenSet() const;

                    /**
                     * 获取是否开启访问日志。
1：开启
0：关闭
                     * @return ClsStatus 是否开启访问日志。
1：开启
0：关闭
                     * 
                     */
                    uint64_t GetClsStatus() const;

                    /**
                     * 设置是否开启访问日志。
1：开启
0：关闭
                     * @param _clsStatus 是否开启访问日志。
1：开启
0：关闭
                     * 
                     */
                    void SetClsStatus(const uint64_t& _clsStatus);

                    /**
                     * 判断参数 ClsStatus 是否已赋值
                     * @return ClsStatus 是否已赋值
                     * 
                     */
                    bool ClsStatusHasBeenSet() const;

                    /**
                     * 获取防护等级，可选值100,200,300
                     * @return Level 防护等级，可选值100,200,300
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置防护等级，可选值100,200,300
                     * @param _level 防护等级，可选值100,200,300
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取域名需要下发到的cdc集群列表。仅CDC场景下填充
                     * @return CdcClusters 域名需要下发到的cdc集群列表。仅CDC场景下填充
                     * 
                     */
                    std::vector<std::string> GetCdcClusters() const;

                    /**
                     * 设置域名需要下发到的cdc集群列表。仅CDC场景下填充
                     * @param _cdcClusters 域名需要下发到的cdc集群列表。仅CDC场景下填充
                     * 
                     */
                    void SetCdcClusters(const std::vector<std::string>& _cdcClusters);

                    /**
                     * 判断参数 CdcClusters 是否已赋值
                     * @return CdcClusters 是否已赋值
                     * 
                     */
                    bool CdcClustersHasBeenSet() const;

                    /**
                     * 获取应用型负载均衡类型，默认clb。 
clb：七层负载均衡器类型 
apisix：apisix网关型
tsegw：云原生API网关
scf：云函数
                     * @return AlbType 应用型负载均衡类型，默认clb。 
clb：七层负载均衡器类型 
apisix：apisix网关型
tsegw：云原生API网关
scf：云函数
                     * 
                     */
                    std::string GetAlbType() const;

                    /**
                     * 设置应用型负载均衡类型，默认clb。 
clb：七层负载均衡器类型 
apisix：apisix网关型
tsegw：云原生API网关
scf：云函数
                     * @param _albType 应用型负载均衡类型，默认clb。 
clb：七层负载均衡器类型 
apisix：apisix网关型
tsegw：云原生API网关
scf：云函数
                     * 
                     */
                    void SetAlbType(const std::string& _albType);

                    /**
                     * 判断参数 AlbType 是否已赋值
                     * @return AlbType 是否已赋值
                     * 
                     */
                    bool AlbTypeHasBeenSet() const;

                    /**
                     * 获取IsCdn=3时，需要填此参数，表示自定义header
                     * @return IpHeaders IsCdn=3时，需要填此参数，表示自定义header
                     * 
                     */
                    std::vector<std::string> GetIpHeaders() const;

                    /**
                     * 设置IsCdn=3时，需要填此参数，表示自定义header
                     * @param _ipHeaders IsCdn=3时，需要填此参数，表示自定义header
                     * 
                     */
                    void SetIpHeaders(const std::vector<std::string>& _ipHeaders);

                    /**
                     * 判断参数 IpHeaders 是否已赋值
                     * @return IpHeaders 是否已赋值
                     * 
                     */
                    bool IpHeadersHasBeenSet() const;

                    /**
                     * 获取规则引擎类型。
1: menshen
2: tiga
                     * @return EngineType 规则引擎类型。
1: menshen
2: tiga
                     * 
                     */
                    int64_t GetEngineType() const;

                    /**
                     * 设置规则引擎类型。
1: menshen
2: tiga
                     * @param _engineType 规则引擎类型。
1: menshen
2: tiga
                     * 
                     */
                    void SetEngineType(const int64_t& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取云类型。
public:公有云
private:私有云
hybrid:混合云
                     * @return CloudType 云类型。
public:公有云
private:私有云
hybrid:混合云
                     * 
                     */
                    std::string GetCloudType() const;

                    /**
                     * 设置云类型。
public:公有云
private:私有云
hybrid:混合云
                     * @param _cloudType 云类型。
public:公有云
private:私有云
hybrid:混合云
                     * 
                     */
                    void SetCloudType(const std::string& _cloudType);

                    /**
                     * 判断参数 CloudType 是否已赋值
                     * @return CloudType 是否已赋值
                     * 
                     */
                    bool CloudTypeHasBeenSet() const;

                    /**
                     * 获取域名备注信息
                     * @return Note 域名备注信息
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置域名备注信息
                     * @param _note 域名备注信息
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 域名唯一ID
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 主域名，入参时为空
                     */
                    std::string m_mainDomain;
                    bool m_mainDomainHasBeenSet;

                    /**
                     * 规则引擎防护模式。
0：观察模式
1：拦截模式
                     */
                    uint64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * waf和负载均衡器的绑定关系。
0：未绑定
1：已绑定
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * clbwaf域名监听器状态。
0：操作成功
4：正在绑定LB
6：正在解绑LB 
7：解绑LB失败 
8：绑定LB失败 
10：内部错误
                     */
                    uint64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 规则引擎和AI引擎防护模式联合状态。
1:初始状态,规则引擎拦截&&AI引擎未操作开关状态
10：规则引擎观察&&AI引擎关闭模式 
11：规则引擎观察&&AI引擎观察模式 
12：规则引擎观察&&AI引擎拦截模式 
20：规则引擎拦截&&AI引擎关闭模式 
21：规则引擎拦截&&AI引擎观察模式 
22：规则引擎拦截&&AI引擎拦截模式
                     */
                    uint64_t m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * waf前是否部署有七层代理服务。 0：没有部署代理服务 1：有部署代理服务，waf将使用XFF获取客户端IP 2：有部署代理服务，waf将使用remote_addr获取客户端IP 3：有部署代理服务，waf将使用ip_headers中的自定义header获取客户端IP
                     */
                    uint64_t m_isCdn;
                    bool m_isCdnHasBeenSet;

                    /**
                     * 绑定的负载均衡器信息列表
                     */
                    std::vector<LoadBalancer> m_loadBalancerSet;
                    bool m_loadBalancerSetHasBeenSet;

                    /**
                     * 域名绑定的LB的地域，以逗号分割多个地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 域名所属实例类型。负载均衡型WAF为"clb-waf"
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * 负载均衡型WAF域名的流量模式。
1：清洗模式
0：镜像模式
                     */
                    uint64_t m_flowMode;
                    bool m_flowModeHasBeenSet;

                    /**
                     * 是否开启访问日志。
1：开启
0：关闭
                     */
                    uint64_t m_clsStatus;
                    bool m_clsStatusHasBeenSet;

                    /**
                     * 防护等级，可选值100,200,300
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 域名需要下发到的cdc集群列表。仅CDC场景下填充
                     */
                    std::vector<std::string> m_cdcClusters;
                    bool m_cdcClustersHasBeenSet;

                    /**
                     * 应用型负载均衡类型，默认clb。 
clb：七层负载均衡器类型 
apisix：apisix网关型
tsegw：云原生API网关
scf：云函数
                     */
                    std::string m_albType;
                    bool m_albTypeHasBeenSet;

                    /**
                     * IsCdn=3时，需要填此参数，表示自定义header
                     */
                    std::vector<std::string> m_ipHeaders;
                    bool m_ipHeadersHasBeenSet;

                    /**
                     * 规则引擎类型。
1: menshen
2: tiga
                     */
                    int64_t m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * 云类型。
public:公有云
private:私有云
hybrid:混合云
                     */
                    std::string m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * 域名备注信息
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_HOSTRECORD_H_
