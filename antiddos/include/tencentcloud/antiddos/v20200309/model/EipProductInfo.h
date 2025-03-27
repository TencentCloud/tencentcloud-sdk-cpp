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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_EIPPRODUCTINFO_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_EIPPRODUCTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * EIP所属的云产品信息
                */
                class EipProductInfo : public AbstractModel
                {
                public:
                    EipProductInfo();
                    ~EipProductInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP地址
                     * @return Ip IP地址
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP地址
                     * @param _ip IP地址
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取云产品类型，取值[
public（CVM产品），
bm（黑石产品），
eni（弹性网卡），
vpngw（VPN网关），
 natgw（NAT网关），
waf（Web应用安全产品），
fpc（金融产品），
gaap（GAAP产品）, 
other(托管IP)
]
                     * @return BizType 云产品类型，取值[
public（CVM产品），
bm（黑石产品），
eni（弹性网卡），
vpngw（VPN网关），
 natgw（NAT网关），
waf（Web应用安全产品），
fpc（金融产品），
gaap（GAAP产品）, 
other(托管IP)
]
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置云产品类型，取值[
public（CVM产品），
bm（黑石产品），
eni（弹性网卡），
vpngw（VPN网关），
 natgw（NAT网关），
waf（Web应用安全产品），
fpc（金融产品），
gaap（GAAP产品）, 
other(托管IP)
]
                     * @param _bizType 云产品类型，取值[
public（CVM产品），
bm（黑石产品），
eni（弹性网卡），
vpngw（VPN网关），
 natgw（NAT网关），
waf（Web应用安全产品），
fpc（金融产品），
gaap（GAAP产品）, 
other(托管IP)
]
                     * 
                     */
                    void SetBizType(const std::string& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取云产品子类型，取值[cvm（CVM），lb（负载均衡器），eni（弹性网卡），vpngw（VPN），natgw（NAT），waf（WAF），fpc（金融），gaap（GAAP），other（托管IP），eip（黑石弹性IP）]
                     * @return DeviceType 云产品子类型，取值[cvm（CVM），lb（负载均衡器），eni（弹性网卡），vpngw（VPN），natgw（NAT），waf（WAF），fpc（金融），gaap（GAAP），other（托管IP），eip（黑石弹性IP）]
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置云产品子类型，取值[cvm（CVM），lb（负载均衡器），eni（弹性网卡），vpngw（VPN），natgw（NAT），waf（WAF），fpc（金融），gaap（GAAP），other（托管IP），eip（黑石弹性IP）]
                     * @param _deviceType 云产品子类型，取值[cvm（CVM），lb（负载均衡器），eni（弹性网卡），vpngw（VPN），natgw（NAT），waf（WAF），fpc（金融），gaap（GAAP），other（托管IP），eip（黑石弹性IP）]
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取IP所属的云产品实例ID，例如是弹性网卡的IP，InstanceId为弹性网卡的ID(eni-*); 如果是托管IP没有对应的资源实例ID,InstanceId为""
                     * @return InstanceId IP所属的云产品实例ID，例如是弹性网卡的IP，InstanceId为弹性网卡的ID(eni-*); 如果是托管IP没有对应的资源实例ID,InstanceId为""
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置IP所属的云产品实例ID，例如是弹性网卡的IP，InstanceId为弹性网卡的ID(eni-*); 如果是托管IP没有对应的资源实例ID,InstanceId为""
                     * @param _instanceId IP所属的云产品实例ID，例如是弹性网卡的IP，InstanceId为弹性网卡的ID(eni-*); 如果是托管IP没有对应的资源实例ID,InstanceId为""
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取域名化资产对应的域名
                     * @return Domain 域名化资产对应的域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名化资产对应的域名
                     * @param _domain 域名化资产对应的域名
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
                     * IP地址
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 云产品类型，取值[
public（CVM产品），
bm（黑石产品），
eni（弹性网卡），
vpngw（VPN网关），
 natgw（NAT网关），
waf（Web应用安全产品），
fpc（金融产品），
gaap（GAAP产品）, 
other(托管IP)
]
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * 云产品子类型，取值[cvm（CVM），lb（负载均衡器），eni（弹性网卡），vpngw（VPN），natgw（NAT），waf（WAF），fpc（金融），gaap（GAAP），other（托管IP），eip（黑石弹性IP）]
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * IP所属的云产品实例ID，例如是弹性网卡的IP，InstanceId为弹性网卡的ID(eni-*); 如果是托管IP没有对应的资源实例ID,InstanceId为""
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 域名化资产对应的域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_EIPPRODUCTINFO_H_
