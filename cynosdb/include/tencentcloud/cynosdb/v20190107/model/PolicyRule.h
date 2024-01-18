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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_POLICYRULE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_POLICYRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 安全组规则
                */
                class PolicyRule : public AbstractModel
                {
                public:
                    PolicyRule();
                    ~PolicyRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略，ACCEPT或者DROP
                     * @return Action 策略，ACCEPT或者DROP
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置策略，ACCEPT或者DROP
                     * @param _action 策略，ACCEPT或者DROP
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
                     * 获取来源Ip或Ip段，例如192.168.0.0/16
                     * @return CidrIp 来源Ip或Ip段，例如192.168.0.0/16
                     * 
                     */
                    std::string GetCidrIp() const;

                    /**
                     * 设置来源Ip或Ip段，例如192.168.0.0/16
                     * @param _cidrIp 来源Ip或Ip段，例如192.168.0.0/16
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
                     * 获取端口
                     * @return PortRange 端口
                     * 
                     */
                    std::string GetPortRange() const;

                    /**
                     * 设置端口
                     * @param _portRange 端口
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
                     * 获取网络协议，支持udp、tcp等
                     * @return IpProtocol 网络协议，支持udp、tcp等
                     * 
                     */
                    std::string GetIpProtocol() const;

                    /**
                     * 设置网络协议，支持udp、tcp等
                     * @param _ipProtocol 网络协议，支持udp、tcp等
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
                     * 获取协议端口ID或者协议端口组ID。
                     * @return ServiceModule 协议端口ID或者协议端口组ID。
                     * 
                     */
                    std::string GetServiceModule() const;

                    /**
                     * 设置协议端口ID或者协议端口组ID。
                     * @param _serviceModule 协议端口ID或者协议端口组ID。
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
                     * 获取IP地址ID或者ID地址组ID。
                     * @return AddressModule IP地址ID或者ID地址组ID。
                     * 
                     */
                    std::string GetAddressModule() const;

                    /**
                     * 设置IP地址ID或者ID地址组ID。
                     * @param _addressModule IP地址ID或者ID地址组ID。
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
                     * 获取id
                     * @return Id id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置id
                     * @param _id id
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
                     * 获取描述
                     * @return Desc 描述
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置描述
                     * @param _desc 描述
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
                     * 策略，ACCEPT或者DROP
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 来源Ip或Ip段，例如192.168.0.0/16
                     */
                    std::string m_cidrIp;
                    bool m_cidrIpHasBeenSet;

                    /**
                     * 端口
                     */
                    std::string m_portRange;
                    bool m_portRangeHasBeenSet;

                    /**
                     * 网络协议，支持udp、tcp等
                     */
                    std::string m_ipProtocol;
                    bool m_ipProtocolHasBeenSet;

                    /**
                     * 协议端口ID或者协议端口组ID。
                     */
                    std::string m_serviceModule;
                    bool m_serviceModuleHasBeenSet;

                    /**
                     * IP地址ID或者ID地址组ID。
                     */
                    std::string m_addressModule;
                    bool m_addressModuleHasBeenSet;

                    /**
                     * id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_POLICYRULE_H_
