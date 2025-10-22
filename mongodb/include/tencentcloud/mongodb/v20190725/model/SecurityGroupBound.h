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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_SECURITYGROUPBOUND_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_SECURITYGROUPBOUND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 安全组规则
                */
                class SecurityGroupBound : public AbstractModel
                {
                public:
                    SecurityGroupBound();
                    ~SecurityGroupBound() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取执行策略。
- ACCEPT：允许，放行该端口相应的访问请求。
- DROP：拒绝，直接丢弃数据包，不返回任何回应信息。
                     * @return Action 执行策略。
- ACCEPT：允许，放行该端口相应的访问请求。
- DROP：拒绝，直接丢弃数据包，不返回任何回应信息。
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置执行策略。
- ACCEPT：允许，放行该端口相应的访问请求。
- DROP：拒绝，直接丢弃数据包，不返回任何回应信息。
                     * @param _action 执行策略。
- ACCEPT：允许，放行该端口相应的访问请求。
- DROP：拒绝，直接丢弃数据包，不返回任何回应信息。
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取访问数据库的入站 IP 或 IP 段。
                     * @return CidrIp 访问数据库的入站 IP 或 IP 段。
                     * 
                     */
                    std::string GetCidrIp() const;

                    /**
                     * 设置访问数据库的入站 IP 或 IP 段。
                     * @param _cidrIp 访问数据库的入站 IP 或 IP 段。
                     * 
                     */
                    void SetCidrIp(const std::string& _cidrIp);

                    /**
                     * 判断参数 CidrIp 是否已赋值
                     * @return CidrIp 是否已赋值
                     * 
                     */
                    bool CidrIpHasBeenSet() const;

                    /**
                     * 获取访问数据库的端口。
                     * @return PortRange 访问数据库的端口。
                     * 
                     */
                    std::string GetPortRange() const;

                    /**
                     * 设置访问数据库的端口。
                     * @param _portRange 访问数据库的端口。
                     * 
                     */
                    void SetPortRange(const std::string& _portRange);

                    /**
                     * 判断参数 PortRange 是否已赋值
                     * @return PortRange 是否已赋值
                     * 
                     */
                    bool PortRangeHasBeenSet() const;

                    /**
                     * 获取传输层协议：tcp。
                     * @return IpProtocol 传输层协议：tcp。
                     * 
                     */
                    std::string GetIpProtocol() const;

                    /**
                     * 设置传输层协议：tcp。
                     * @param _ipProtocol 传输层协议：tcp。
                     * 
                     */
                    void SetIpProtocol(const std::string& _ipProtocol);

                    /**
                     * 判断参数 IpProtocol 是否已赋值
                     * @return IpProtocol 是否已赋值
                     * 
                     */
                    bool IpProtocolHasBeenSet() const;

                    /**
                     * 获取安全组 ID。
                     * @return Id 安全组 ID。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置安全组 ID。
                     * @param _id 安全组 ID。
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
                     * 获取IP 地址或 IP 地址组参数模板 ID。请登录[参数模板控制台](https://console.cloud.tencent.com/vpc/template/ip)获取参数模板 IP 地址详情。
                     * @return AddressModule IP 地址或 IP 地址组参数模板 ID。请登录[参数模板控制台](https://console.cloud.tencent.com/vpc/template/ip)获取参数模板 IP 地址详情。
                     * 
                     */
                    std::string GetAddressModule() const;

                    /**
                     * 设置IP 地址或 IP 地址组参数模板 ID。请登录[参数模板控制台](https://console.cloud.tencent.com/vpc/template/ip)获取参数模板 IP 地址详情。
                     * @param _addressModule IP 地址或 IP 地址组参数模板 ID。请登录[参数模板控制台](https://console.cloud.tencent.com/vpc/template/ip)获取参数模板 IP 地址详情。
                     * 
                     */
                    void SetAddressModule(const std::string& _addressModule);

                    /**
                     * 判断参数 AddressModule 是否已赋值
                     * @return AddressModule 是否已赋值
                     * 
                     */
                    bool AddressModuleHasBeenSet() const;

                    /**
                     * 获取协议端口或协议端口组参数模板 ID。请登录[参数模板控制台](https://console.cloud.tencent.com/vpc/template/protoport)获取参数模板协议端口详情。
                     * @return ServiceModule 协议端口或协议端口组参数模板 ID。请登录[参数模板控制台](https://console.cloud.tencent.com/vpc/template/protoport)获取参数模板协议端口详情。
                     * 
                     */
                    std::string GetServiceModule() const;

                    /**
                     * 设置协议端口或协议端口组参数模板 ID。请登录[参数模板控制台](https://console.cloud.tencent.com/vpc/template/protoport)获取参数模板协议端口详情。
                     * @param _serviceModule 协议端口或协议端口组参数模板 ID。请登录[参数模板控制台](https://console.cloud.tencent.com/vpc/template/protoport)获取参数模板协议端口详情。
                     * 
                     */
                    void SetServiceModule(const std::string& _serviceModule);

                    /**
                     * 判断参数 ServiceModule 是否已赋值
                     * @return ServiceModule 是否已赋值
                     * 
                     */
                    bool ServiceModuleHasBeenSet() const;

                    /**
                     * 获取安全组描述信息。
                     * @return Desc 安全组描述信息。
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置安全组描述信息。
                     * @param _desc 安全组描述信息。
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                private:

                    /**
                     * 执行策略。
- ACCEPT：允许，放行该端口相应的访问请求。
- DROP：拒绝，直接丢弃数据包，不返回任何回应信息。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 访问数据库的入站 IP 或 IP 段。
                     */
                    std::string m_cidrIp;
                    bool m_cidrIpHasBeenSet;

                    /**
                     * 访问数据库的端口。
                     */
                    std::string m_portRange;
                    bool m_portRangeHasBeenSet;

                    /**
                     * 传输层协议：tcp。
                     */
                    std::string m_ipProtocol;
                    bool m_ipProtocolHasBeenSet;

                    /**
                     * 安全组 ID。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * IP 地址或 IP 地址组参数模板 ID。请登录[参数模板控制台](https://console.cloud.tencent.com/vpc/template/ip)获取参数模板 IP 地址详情。
                     */
                    std::string m_addressModule;
                    bool m_addressModuleHasBeenSet;

                    /**
                     * 协议端口或协议端口组参数模板 ID。请登录[参数模板控制台](https://console.cloud.tencent.com/vpc/template/protoport)获取参数模板协议端口详情。
                     */
                    std::string m_serviceModule;
                    bool m_serviceModuleHasBeenSet;

                    /**
                     * 安全组描述信息。
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_SECURITYGROUPBOUND_H_
