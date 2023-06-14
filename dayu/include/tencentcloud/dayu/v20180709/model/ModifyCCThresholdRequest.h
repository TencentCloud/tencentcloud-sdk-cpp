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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYCCTHRESHOLDREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYCCTHRESHOLDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * ModifyCCThreshold请求参数结构体
                */
                class ModifyCCThresholdRequest : public AbstractModel
                {
                public:
                    ModifyCCThresholdRequest();
                    ~ModifyCCThresholdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版；basic表示基础防护）
                     * @return Business 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版；basic表示基础防护）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版；basic表示基础防护）
                     * @param _business 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版；basic表示基础防护）
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取CC防护阈值，取值(0 100 150 240 350 480 550 700 850 1000 1500 2000 3000 5000 10000 20000);
当Business为高防IP、高防IP专业版时，其CC防护最大阈值跟资源的保底防护带宽有关，对应关系如下：
  保底带宽: 最大C防护阈值
  10:  20000,
  20:  40000,
  30:  70000,
  40:  100000,
  50:  150000,
  60:  200000,
  80:  250000,
  100: 300000,
                     * @return Threshold CC防护阈值，取值(0 100 150 240 350 480 550 700 850 1000 1500 2000 3000 5000 10000 20000);
当Business为高防IP、高防IP专业版时，其CC防护最大阈值跟资源的保底防护带宽有关，对应关系如下：
  保底带宽: 最大C防护阈值
  10:  20000,
  20:  40000,
  30:  70000,
  40:  100000,
  50:  150000,
  60:  200000,
  80:  250000,
  100: 300000,
                     * 
                     */
                    uint64_t GetThreshold() const;

                    /**
                     * 设置CC防护阈值，取值(0 100 150 240 350 480 550 700 850 1000 1500 2000 3000 5000 10000 20000);
当Business为高防IP、高防IP专业版时，其CC防护最大阈值跟资源的保底防护带宽有关，对应关系如下：
  保底带宽: 最大C防护阈值
  10:  20000,
  20:  40000,
  30:  70000,
  40:  100000,
  50:  150000,
  60:  200000,
  80:  250000,
  100: 300000,
                     * @param _threshold CC防护阈值，取值(0 100 150 240 350 480 550 700 850 1000 1500 2000 3000 5000 10000 20000);
当Business为高防IP、高防IP专业版时，其CC防护最大阈值跟资源的保底防护带宽有关，对应关系如下：
  保底带宽: 最大C防护阈值
  10:  20000,
  20:  40000,
  30:  70000,
  40:  100000,
  50:  150000,
  60:  200000,
  80:  250000,
  100: 300000,
                     * 
                     */
                    void SetThreshold(const uint64_t& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     * 
                     */
                    bool ThresholdHasBeenSet() const;

                    /**
                     * 获取资源ID
                     * @return Id 资源ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源ID
                     * @param _id 资源ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取可选字段，代表CC防护类型，取值[http（HTTP协议的CC防护），https（HTTPS协议的CC防护）]；当不填时，默认为HTTP协议的CC防护；当填写https时还需要填写RuleId字段；
                     * @return Protocol 可选字段，代表CC防护类型，取值[http（HTTP协议的CC防护），https（HTTPS协议的CC防护）]；当不填时，默认为HTTP协议的CC防护；当填写https时还需要填写RuleId字段；
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置可选字段，代表CC防护类型，取值[http（HTTP协议的CC防护），https（HTTPS协议的CC防护）]；当不填时，默认为HTTP协议的CC防护；当填写https时还需要填写RuleId字段；
                     * @param _protocol 可选字段，代表CC防护类型，取值[http（HTTP协议的CC防护），https（HTTPS协议的CC防护）]；当不填时，默认为HTTP协议的CC防护；当填写https时还需要填写RuleId字段；
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
                     * 获取可选字段，表示HTTPS协议的7层转发规则ID（通过获取7层转发规则接口可以获取规则ID）；
当Protocol=https时必须填写；
                     * @return RuleId 可选字段，表示HTTPS协议的7层转发规则ID（通过获取7层转发规则接口可以获取规则ID）；
当Protocol=https时必须填写；
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置可选字段，表示HTTPS协议的7层转发规则ID（通过获取7层转发规则接口可以获取规则ID）；
当Protocol=https时必须填写；
                     * @param _ruleId 可选字段，表示HTTPS协议的7层转发规则ID（通过获取7层转发规则接口可以获取规则ID）；
当Protocol=https时必须填写；
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取查询的IP地址（仅基础防护提供），取值如：1.1.1.1
                     * @return BasicIp 查询的IP地址（仅基础防护提供），取值如：1.1.1.1
                     * 
                     */
                    std::string GetBasicIp() const;

                    /**
                     * 设置查询的IP地址（仅基础防护提供），取值如：1.1.1.1
                     * @param _basicIp 查询的IP地址（仅基础防护提供），取值如：1.1.1.1
                     * 
                     */
                    void SetBasicIp(const std::string& _basicIp);

                    /**
                     * 判断参数 BasicIp 是否已赋值
                     * @return BasicIp 是否已赋值
                     * 
                     */
                    bool BasicIpHasBeenSet() const;

                    /**
                     * 获取查询IP所属地域（仅基础防护提供），取值如：gz、bj、sh、hk等地域缩写
                     * @return BasicRegion 查询IP所属地域（仅基础防护提供），取值如：gz、bj、sh、hk等地域缩写
                     * 
                     */
                    std::string GetBasicRegion() const;

                    /**
                     * 设置查询IP所属地域（仅基础防护提供），取值如：gz、bj、sh、hk等地域缩写
                     * @param _basicRegion 查询IP所属地域（仅基础防护提供），取值如：gz、bj、sh、hk等地域缩写
                     * 
                     */
                    void SetBasicRegion(const std::string& _basicRegion);

                    /**
                     * 判断参数 BasicRegion 是否已赋值
                     * @return BasicRegion 是否已赋值
                     * 
                     */
                    bool BasicRegionHasBeenSet() const;

                    /**
                     * 获取专区类型（仅基础防护提供），取值如：公有云专区：public，黑石专区：bm, NAT服务器专区：nat，互联网通道：channel。
                     * @return BasicBizType 专区类型（仅基础防护提供），取值如：公有云专区：public，黑石专区：bm, NAT服务器专区：nat，互联网通道：channel。
                     * 
                     */
                    std::string GetBasicBizType() const;

                    /**
                     * 设置专区类型（仅基础防护提供），取值如：公有云专区：public，黑石专区：bm, NAT服务器专区：nat，互联网通道：channel。
                     * @param _basicBizType 专区类型（仅基础防护提供），取值如：公有云专区：public，黑石专区：bm, NAT服务器专区：nat，互联网通道：channel。
                     * 
                     */
                    void SetBasicBizType(const std::string& _basicBizType);

                    /**
                     * 判断参数 BasicBizType 是否已赋值
                     * @return BasicBizType 是否已赋值
                     * 
                     */
                    bool BasicBizTypeHasBeenSet() const;

                    /**
                     * 获取设备类型（仅基础防护提供），取值如：服务器：cvm，公有云负载均衡：clb，黑石负载均衡：lb，NAT服务器：nat，互联网通道：channel.
                     * @return BasicDeviceType 设备类型（仅基础防护提供），取值如：服务器：cvm，公有云负载均衡：clb，黑石负载均衡：lb，NAT服务器：nat，互联网通道：channel.
                     * 
                     */
                    std::string GetBasicDeviceType() const;

                    /**
                     * 设置设备类型（仅基础防护提供），取值如：服务器：cvm，公有云负载均衡：clb，黑石负载均衡：lb，NAT服务器：nat，互联网通道：channel.
                     * @param _basicDeviceType 设备类型（仅基础防护提供），取值如：服务器：cvm，公有云负载均衡：clb，黑石负载均衡：lb，NAT服务器：nat，互联网通道：channel.
                     * 
                     */
                    void SetBasicDeviceType(const std::string& _basicDeviceType);

                    /**
                     * 判断参数 BasicDeviceType 是否已赋值
                     * @return BasicDeviceType 是否已赋值
                     * 
                     */
                    bool BasicDeviceTypeHasBeenSet() const;

                    /**
                     * 获取仅基础防护提供。可选，IPInstance Nat 网关（如果查询的设备类型是NAT服务器，需要传此参数，通过nat资源查询接口获取）
                     * @return BasicIpInstance 仅基础防护提供。可选，IPInstance Nat 网关（如果查询的设备类型是NAT服务器，需要传此参数，通过nat资源查询接口获取）
                     * 
                     */
                    std::string GetBasicIpInstance() const;

                    /**
                     * 设置仅基础防护提供。可选，IPInstance Nat 网关（如果查询的设备类型是NAT服务器，需要传此参数，通过nat资源查询接口获取）
                     * @param _basicIpInstance 仅基础防护提供。可选，IPInstance Nat 网关（如果查询的设备类型是NAT服务器，需要传此参数，通过nat资源查询接口获取）
                     * 
                     */
                    void SetBasicIpInstance(const std::string& _basicIpInstance);

                    /**
                     * 判断参数 BasicIpInstance 是否已赋值
                     * @return BasicIpInstance 是否已赋值
                     * 
                     */
                    bool BasicIpInstanceHasBeenSet() const;

                    /**
                     * 获取仅基础防护提供。可选，运营商线路（如果查询的设备类型是NAT服务器，需要传此参数为5）
                     * @return BasicIspCode 仅基础防护提供。可选，运营商线路（如果查询的设备类型是NAT服务器，需要传此参数为5）
                     * 
                     */
                    uint64_t GetBasicIspCode() const;

                    /**
                     * 设置仅基础防护提供。可选，运营商线路（如果查询的设备类型是NAT服务器，需要传此参数为5）
                     * @param _basicIspCode 仅基础防护提供。可选，运营商线路（如果查询的设备类型是NAT服务器，需要传此参数为5）
                     * 
                     */
                    void SetBasicIspCode(const uint64_t& _basicIspCode);

                    /**
                     * 判断参数 BasicIspCode 是否已赋值
                     * @return BasicIspCode 是否已赋值
                     * 
                     */
                    bool BasicIspCodeHasBeenSet() const;

                    /**
                     * 获取可选字段，当协议取值HTTPS时，必填
                     * @return Domain 可选字段，当协议取值HTTPS时，必填
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置可选字段，当协议取值HTTPS时，必填
                     * @param _domain 可选字段，当协议取值HTTPS时，必填
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版；basic表示基础防护）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * CC防护阈值，取值(0 100 150 240 350 480 550 700 850 1000 1500 2000 3000 5000 10000 20000);
当Business为高防IP、高防IP专业版时，其CC防护最大阈值跟资源的保底防护带宽有关，对应关系如下：
  保底带宽: 最大C防护阈值
  10:  20000,
  20:  40000,
  30:  70000,
  40:  100000,
  50:  150000,
  60:  200000,
  80:  250000,
  100: 300000,
                     */
                    uint64_t m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * 资源ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 可选字段，代表CC防护类型，取值[http（HTTP协议的CC防护），https（HTTPS协议的CC防护）]；当不填时，默认为HTTP协议的CC防护；当填写https时还需要填写RuleId字段；
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 可选字段，表示HTTPS协议的7层转发规则ID（通过获取7层转发规则接口可以获取规则ID）；
当Protocol=https时必须填写；
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 查询的IP地址（仅基础防护提供），取值如：1.1.1.1
                     */
                    std::string m_basicIp;
                    bool m_basicIpHasBeenSet;

                    /**
                     * 查询IP所属地域（仅基础防护提供），取值如：gz、bj、sh、hk等地域缩写
                     */
                    std::string m_basicRegion;
                    bool m_basicRegionHasBeenSet;

                    /**
                     * 专区类型（仅基础防护提供），取值如：公有云专区：public，黑石专区：bm, NAT服务器专区：nat，互联网通道：channel。
                     */
                    std::string m_basicBizType;
                    bool m_basicBizTypeHasBeenSet;

                    /**
                     * 设备类型（仅基础防护提供），取值如：服务器：cvm，公有云负载均衡：clb，黑石负载均衡：lb，NAT服务器：nat，互联网通道：channel.
                     */
                    std::string m_basicDeviceType;
                    bool m_basicDeviceTypeHasBeenSet;

                    /**
                     * 仅基础防护提供。可选，IPInstance Nat 网关（如果查询的设备类型是NAT服务器，需要传此参数，通过nat资源查询接口获取）
                     */
                    std::string m_basicIpInstance;
                    bool m_basicIpInstanceHasBeenSet;

                    /**
                     * 仅基础防护提供。可选，运营商线路（如果查询的设备类型是NAT服务器，需要传此参数为5）
                     */
                    uint64_t m_basicIspCode;
                    bool m_basicIspCodeHasBeenSet;

                    /**
                     * 可选字段，当协议取值HTTPS时，必填
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYCCTHRESHOLDREQUEST_H_
