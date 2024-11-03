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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_LOADBALANCERPACKAGENEW_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_LOADBALANCERPACKAGENEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 负载均衡器
                */
                class LoadBalancerPackageNew : public AbstractModel
                {
                public:
                    LoadBalancerPackageNew();
                    ~LoadBalancerPackageNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取监听id
                     * @return ListenerId 监听id
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置监听id
                     * @param _listenerId 监听id
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取监听名
                     * @return ListenerName 监听名
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置监听名
                     * @param _listenerName 监听名
                     * 
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     * 
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取负载均衡id
                     * @return LoadBalancerId 负载均衡id
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡id
                     * @param _loadBalancerId 负载均衡id
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取负载均衡名
                     * @return LoadBalancerName 负载均衡名
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置负载均衡名
                     * @param _loadBalancerName 负载均衡名
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
                     * 获取协议
                     * @return Protocol 协议
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议
                     * @param _protocol 协议
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取地区
"多伦多": "ca",
    "广州": "gz",
    "成都": "cd",
    "福州": "fzec",
    "深圳": "szx",
    "印度": "in",
    "济南": "jnec",
    "重庆": "cq",
    "天津": "tsn",
    "欧洲东北": "ru",
    "南京": "nj",
    "美国硅谷": "usw",
    "泰国": "th",
    "广州Open": "gzopen",
    "深圳金融": "szjr",
    "法兰克福": "de",
    "日本": "jp",
    "弗吉尼亚": "use",
    "北京": "bj",
    "中国香港": "hk",
    "杭州": "hzec",
    "北京金融": "bjjr",
    "上海金融": "shjr",
    "台北": "tpe",
    "首尔": "kr",
    "上海": "sh",
    "新加坡": "sg",
    "清远": "qy"
                     * @return Region 地区
"多伦多": "ca",
    "广州": "gz",
    "成都": "cd",
    "福州": "fzec",
    "深圳": "szx",
    "印度": "in",
    "济南": "jnec",
    "重庆": "cq",
    "天津": "tsn",
    "欧洲东北": "ru",
    "南京": "nj",
    "美国硅谷": "usw",
    "泰国": "th",
    "广州Open": "gzopen",
    "深圳金融": "szjr",
    "法兰克福": "de",
    "日本": "jp",
    "弗吉尼亚": "use",
    "北京": "bj",
    "中国香港": "hk",
    "杭州": "hzec",
    "北京金融": "bjjr",
    "上海金融": "shjr",
    "台北": "tpe",
    "首尔": "kr",
    "上海": "sh",
    "新加坡": "sg",
    "清远": "qy"
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地区
"多伦多": "ca",
    "广州": "gz",
    "成都": "cd",
    "福州": "fzec",
    "深圳": "szx",
    "印度": "in",
    "济南": "jnec",
    "重庆": "cq",
    "天津": "tsn",
    "欧洲东北": "ru",
    "南京": "nj",
    "美国硅谷": "usw",
    "泰国": "th",
    "广州Open": "gzopen",
    "深圳金融": "szjr",
    "法兰克福": "de",
    "日本": "jp",
    "弗吉尼亚": "use",
    "北京": "bj",
    "中国香港": "hk",
    "杭州": "hzec",
    "北京金融": "bjjr",
    "上海金融": "shjr",
    "台北": "tpe",
    "首尔": "kr",
    "上海": "sh",
    "新加坡": "sg",
    "清远": "qy"
                     * @param _region 地区
"多伦多": "ca",
    "广州": "gz",
    "成都": "cd",
    "福州": "fzec",
    "深圳": "szx",
    "印度": "in",
    "济南": "jnec",
    "重庆": "cq",
    "天津": "tsn",
    "欧洲东北": "ru",
    "南京": "nj",
    "美国硅谷": "usw",
    "泰国": "th",
    "广州Open": "gzopen",
    "深圳金融": "szjr",
    "法兰克福": "de",
    "日本": "jp",
    "弗吉尼亚": "use",
    "北京": "bj",
    "中国香港": "hk",
    "杭州": "hzec",
    "北京金融": "bjjr",
    "上海金融": "shjr",
    "台北": "tpe",
    "首尔": "kr",
    "上海": "sh",
    "新加坡": "sg",
    "清远": "qy"
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
                     * 获取接入IP
                     * @return Vip 接入IP
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置接入IP
                     * @param _vip 接入IP
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取接入端口
                     * @return Vport 接入端口
                     * 
                     */
                    uint64_t GetVport() const;

                    /**
                     * 设置接入端口
                     * @param _vport 接入端口
                     * 
                     */
                    void SetVport(const uint64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Zone 地域
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置地域
                     * @param _zone 地域
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取VPCID
                     * @return NumericalVpcId VPCID
                     * 
                     */
                    int64_t GetNumericalVpcId() const;

                    /**
                     * 设置VPCID
                     * @param _numericalVpcId VPCID
                     * 
                     */
                    void SetNumericalVpcId(const int64_t& _numericalVpcId);

                    /**
                     * 判断参数 NumericalVpcId 是否已赋值
                     * @return NumericalVpcId 是否已赋值
                     * 
                     */
                    bool NumericalVpcIdHasBeenSet() const;

                    /**
                     * 获取CLB类型
                     * @return LoadBalancerType CLB类型
                     * 
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置CLB类型
                     * @param _loadBalancerType CLB类型
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
                     * 获取负载均衡器的域名
                     * @return LoadBalancerDomain 负载均衡器的域名
                     * 
                     */
                    std::string GetLoadBalancerDomain() const;

                    /**
                     * 设置负载均衡器的域名
                     * @param _loadBalancerDomain 负载均衡器的域名
                     * 
                     */
                    void SetLoadBalancerDomain(const std::string& _loadBalancerDomain);

                    /**
                     * 判断参数 LoadBalancerDomain 是否已赋值
                     * @return LoadBalancerDomain 是否已赋值
                     * 
                     */
                    bool LoadBalancerDomainHasBeenSet() const;

                private:

                    /**
                     * 监听id
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 监听名
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * 负载均衡id
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 负载均衡名
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * 协议
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 地区
"多伦多": "ca",
    "广州": "gz",
    "成都": "cd",
    "福州": "fzec",
    "深圳": "szx",
    "印度": "in",
    "济南": "jnec",
    "重庆": "cq",
    "天津": "tsn",
    "欧洲东北": "ru",
    "南京": "nj",
    "美国硅谷": "usw",
    "泰国": "th",
    "广州Open": "gzopen",
    "深圳金融": "szjr",
    "法兰克福": "de",
    "日本": "jp",
    "弗吉尼亚": "use",
    "北京": "bj",
    "中国香港": "hk",
    "杭州": "hzec",
    "北京金融": "bjjr",
    "上海金融": "shjr",
    "台北": "tpe",
    "首尔": "kr",
    "上海": "sh",
    "新加坡": "sg",
    "清远": "qy"
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 接入IP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 接入端口
                     */
                    uint64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * VPCID
                     */
                    int64_t m_numericalVpcId;
                    bool m_numericalVpcIdHasBeenSet;

                    /**
                     * CLB类型
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * 负载均衡器的域名
                     */
                    std::string m_loadBalancerDomain;
                    bool m_loadBalancerDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_LOADBALANCERPACKAGENEW_H_
