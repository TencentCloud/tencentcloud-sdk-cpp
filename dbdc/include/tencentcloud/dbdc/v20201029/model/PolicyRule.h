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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_POLICYRULE_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_POLICYRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
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
                     * 获取<p>规则动作，</p><p>枚举值：</p><ul><li>ACCEPT： 允许</li><li>DROP： 拒绝</li></ul>
                     * @return Action <p>规则动作，</p><p>枚举值：</p><ul><li>ACCEPT： 允许</li><li>DROP： 拒绝</li></ul>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置<p>规则动作，</p><p>枚举值：</p><ul><li>ACCEPT： 允许</li><li>DROP： 拒绝</li></ul>
                     * @param _action <p>规则动作，</p><p>枚举值：</p><ul><li>ACCEPT： 允许</li><li>DROP： 拒绝</li></ul>
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
                     * 获取<p>来源/目标 IP 或 CIDR，如 0.0.0.0/0</p>
                     * @return CidrIp <p>来源/目标 IP 或 CIDR，如 0.0.0.0/0</p>
                     * 
                     */
                    std::string GetCidrIp() const;

                    /**
                     * 设置<p>来源/目标 IP 或 CIDR，如 0.0.0.0/0</p>
                     * @param _cidrIp <p>来源/目标 IP 或 CIDR，如 0.0.0.0/0</p>
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
                     * 获取<p>端口范围，如 80、8080-8090、ALL</p>
                     * @return PortRange <p>端口范围，如 80、8080-8090、ALL</p>
                     * 
                     */
                    std::string GetPortRange() const;

                    /**
                     * 设置<p>端口范围，如 80、8080-8090、ALL</p>
                     * @param _portRange <p>端口范围，如 80、8080-8090、ALL</p>
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
                     * 获取<p>协议类型，如 tcp、udp、icmp、ALL</p>
                     * @return IpProtocol <p>协议类型，如 tcp、udp、icmp、ALL</p>
                     * 
                     */
                    std::string GetIpProtocol() const;

                    /**
                     * 设置<p>协议类型，如 tcp、udp、icmp、ALL</p>
                     * @param _ipProtocol <p>协议类型，如 tcp、udp、icmp、ALL</p>
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
                     * 获取<p>协议端口模板 ID</p>
                     * @return ServiceModule <p>协议端口模板 ID</p>
                     * 
                     */
                    std::string GetServiceModule() const;

                    /**
                     * 设置<p>协议端口模板 ID</p>
                     * @param _serviceModule <p>协议端口模板 ID</p>
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
                     * 获取<p>IP 地址模板 ID</p>
                     * @return AddressModule <p>IP 地址模板 ID</p>
                     * 
                     */
                    std::string GetAddressModule() const;

                    /**
                     * 设置<p>IP 地址模板 ID</p>
                     * @param _addressModule <p>IP 地址模板 ID</p>
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
                     * 获取<p>规则 ID</p>
                     * @return Id <p>规则 ID</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>规则 ID</p>
                     * @param _id <p>规则 ID</p>
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
                     * 获取<p>规则备注描述</p>
                     * @return Desc <p>规则备注描述</p>
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置<p>规则备注描述</p>
                     * @param _desc <p>规则备注描述</p>
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
                     * <p>规则动作，</p><p>枚举值：</p><ul><li>ACCEPT： 允许</li><li>DROP： 拒绝</li></ul>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>来源/目标 IP 或 CIDR，如 0.0.0.0/0</p>
                     */
                    std::string m_cidrIp;
                    bool m_cidrIpHasBeenSet;

                    /**
                     * <p>端口范围，如 80、8080-8090、ALL</p>
                     */
                    std::string m_portRange;
                    bool m_portRangeHasBeenSet;

                    /**
                     * <p>协议类型，如 tcp、udp、icmp、ALL</p>
                     */
                    std::string m_ipProtocol;
                    bool m_ipProtocolHasBeenSet;

                    /**
                     * <p>协议端口模板 ID</p>
                     */
                    std::string m_serviceModule;
                    bool m_serviceModuleHasBeenSet;

                    /**
                     * <p>IP 地址模板 ID</p>
                     */
                    std::string m_addressModule;
                    bool m_addressModuleHasBeenSet;

                    /**
                     * <p>规则 ID</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>规则备注描述</p>
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_POLICYRULE_H_
