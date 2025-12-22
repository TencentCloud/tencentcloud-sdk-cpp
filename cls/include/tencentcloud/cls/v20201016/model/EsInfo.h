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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ESINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ESINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * es集群配置信息
                */
                class EsInfo : public AbstractModel
                {
                public:
                    EsInfo();
                    ~EsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取es类型。 1:云es, 2:自建es
                     * @return EsType es类型。 1:云es, 2:自建es
                     * 
                     */
                    uint64_t GetEsType() const;

                    /**
                     * 设置es类型。 1:云es, 2:自建es
                     * @param _esType es类型。 1:云es, 2:自建es
                     * 
                     */
                    void SetEsType(const uint64_t& _esType);

                    /**
                     * 判断参数 EsType 是否已赋值
                     * @return EsType 是否已赋值
                     * 
                     */
                    bool EsTypeHasBeenSet() const;

                    /**
                     * 获取访问方式 1:内网, 2:外网。自建es必填
                     * @return AccessMode 访问方式 1:内网, 2:外网。自建es必填
                     * 
                     */
                    uint64_t GetAccessMode() const;

                    /**
                     * 设置访问方式 1:内网, 2:外网。自建es必填
                     * @param _accessMode 访问方式 1:内网, 2:外网。自建es必填
                     * 
                     */
                    void SetAccessMode(const uint64_t& _accessMode);

                    /**
                     * 判断参数 AccessMode 是否已赋值
                     * @return AccessMode 是否已赋值
                     * 
                     */
                    bool AccessModeHasBeenSet() const;

                    /**
                     * 获取实例id。云es实例必填
                     * @return InstanceId 实例id。云es实例必填
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id。云es实例必填
                     * @param _instanceId 实例id。云es实例必填
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
                     * 获取用户名。
                     * @return User 用户名。
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置用户名。
                     * @param _user 用户名。
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取访问地址。自建es必填
                     * @return Address 访问地址。自建es必填
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置访问地址。自建es必填
                     * @param _address 访问地址。自建es必填
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取访问端口。自建es必填
                     * @return Port 访问端口。自建es必填
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置访问端口。自建es必填
                     * @param _port 访问端口。自建es必填
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取所属网络。自建es且访问方式为内网访问时必填
                     * @return VpcId 所属网络。自建es且访问方式为内网访问时必填
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置所属网络。自建es且访问方式为内网访问时必填
                     * @param _vpcId 所属网络。自建es且访问方式为内网访问时必填
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取网络服务类型。自建es且访问方式为内网访问时必填。
负载均衡 CLB:1025 云服务器CVM:0
                     * @return VirtualGatewayType 网络服务类型。自建es且访问方式为内网访问时必填。
负载均衡 CLB:1025 云服务器CVM:0
                     * 
                     */
                    uint64_t GetVirtualGatewayType() const;

                    /**
                     * 设置网络服务类型。自建es且访问方式为内网访问时必填。
负载均衡 CLB:1025 云服务器CVM:0
                     * @param _virtualGatewayType 网络服务类型。自建es且访问方式为内网访问时必填。
负载均衡 CLB:1025 云服务器CVM:0
                     * 
                     */
                    void SetVirtualGatewayType(const uint64_t& _virtualGatewayType);

                    /**
                     * 判断参数 VirtualGatewayType 是否已赋值
                     * @return VirtualGatewayType 是否已赋值
                     * 
                     */
                    bool VirtualGatewayTypeHasBeenSet() const;

                    /**
                     * 获取密码。
                     * @return Password 密码。
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置密码。
                     * @param _password 密码。
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * es类型。 1:云es, 2:自建es
                     */
                    uint64_t m_esType;
                    bool m_esTypeHasBeenSet;

                    /**
                     * 访问方式 1:内网, 2:外网。自建es必填
                     */
                    uint64_t m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * 实例id。云es实例必填
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 用户名。
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 访问地址。自建es必填
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 访问端口。自建es必填
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 所属网络。自建es且访问方式为内网访问时必填
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 网络服务类型。自建es且访问方式为内网访问时必填。
负载均衡 CLB:1025 云服务器CVM:0
                     */
                    uint64_t m_virtualGatewayType;
                    bool m_virtualGatewayTypeHasBeenSet;

                    /**
                     * 密码。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ESINFO_H_
