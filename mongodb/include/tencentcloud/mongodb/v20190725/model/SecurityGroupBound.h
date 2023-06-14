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
                     * 获取执行规则。ACCEPT或DROP
                     * @return Action 执行规则。ACCEPT或DROP
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置执行规则。ACCEPT或DROP
                     * @param _action 执行规则。ACCEPT或DROP
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
                     * 获取ip段。
                     * @return CidrIp ip段。
                     * 
                     */
                    std::string GetCidrIp() const;

                    /**
                     * 设置ip段。
                     * @param _cidrIp ip段。
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
                     * 获取端口范围
                     * @return PortRange 端口范围
                     * 
                     */
                    std::string GetPortRange() const;

                    /**
                     * 设置端口范围
                     * @param _portRange 端口范围
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
                     * 获取传输层协议。tcp，udp或ALL
                     * @return IpProtocol 传输层协议。tcp，udp或ALL
                     * 
                     */
                    std::string GetIpProtocol() const;

                    /**
                     * 设置传输层协议。tcp，udp或ALL
                     * @param _ipProtocol 传输层协议。tcp，udp或ALL
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
                     * 获取安全组id代表的地址集合
                     * @return Id 安全组id代表的地址集合
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置安全组id代表的地址集合
                     * @param _id 安全组id代表的地址集合
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
                     * 获取地址组id代表的地址集合
                     * @return AddressModule 地址组id代表的地址集合
                     * 
                     */
                    std::string GetAddressModule() const;

                    /**
                     * 设置地址组id代表的地址集合
                     * @param _addressModule 地址组id代表的地址集合
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
                     * 获取服务组id代表的协议和端口集合
                     * @return ServiceModule 服务组id代表的协议和端口集合
                     * 
                     */
                    std::string GetServiceModule() const;

                    /**
                     * 设置服务组id代表的协议和端口集合
                     * @param _serviceModule 服务组id代表的协议和端口集合
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
                     * 执行规则。ACCEPT或DROP
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * ip段。
                     */
                    std::string m_cidrIp;
                    bool m_cidrIpHasBeenSet;

                    /**
                     * 端口范围
                     */
                    std::string m_portRange;
                    bool m_portRangeHasBeenSet;

                    /**
                     * 传输层协议。tcp，udp或ALL
                     */
                    std::string m_ipProtocol;
                    bool m_ipProtocolHasBeenSet;

                    /**
                     * 安全组id代表的地址集合
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 地址组id代表的地址集合
                     */
                    std::string m_addressModule;
                    bool m_addressModuleHasBeenSet;

                    /**
                     * 服务组id代表的协议和端口集合
                     */
                    std::string m_serviceModule;
                    bool m_serviceModuleHasBeenSet;

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

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_SECURITYGROUPBOUND_H_
