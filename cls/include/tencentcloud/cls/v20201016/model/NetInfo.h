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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_NETINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_NETINFO_H_

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
                * Splunk投递任务-目标配置网络信息相关
                */
                class NetInfo : public AbstractModel
                {
                public:
                    NetInfo();
                    ~NetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网络地址
                     * @return Host 网络地址
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置网络地址
                     * @param _host 网络地址
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取端口
                     * @return Port 端口
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置端口
                     * @param _port 端口
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
                     * 获取认证token
                     * @return Token 认证token
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置认证token
                     * @param _token 认证token
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取网络类型;1：内网；2:外网
                     * @return NetType 网络类型;1：内网；2:外网
                     * 
                     */
                    uint64_t GetNetType() const;

                    /**
                     * 设置网络类型;1：内网；2:外网
                     * @param _netType 网络类型;1：内网；2:外网
                     * 
                     */
                    void SetNetType(const uint64_t& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取所属网络；如果网络类型为内网，该字段必填
                     * @return VpcId 所属网络；如果网络类型为内网，该字段必填
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置所属网络；如果网络类型为内网，该字段必填
                     * @param _vpcId 所属网络；如果网络类型为内网，该字段必填
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
                     * 获取网络服务类型；如果网络类型为内网，该字段必填
- 0:云上cvm
- 3:云上专线网关
- 11:云联网
- 1025:云上clb
                     * @return VirtualGatewayType 网络服务类型；如果网络类型为内网，该字段必填
- 0:云上cvm
- 3:云上专线网关
- 11:云联网
- 1025:云上clb
                     * 
                     */
                    uint64_t GetVirtualGatewayType() const;

                    /**
                     * 设置网络服务类型；如果网络类型为内网，该字段必填
- 0:云上cvm
- 3:云上专线网关
- 11:云联网
- 1025:云上clb
                     * @param _virtualGatewayType 网络服务类型；如果网络类型为内网，该字段必填
- 0:云上cvm
- 3:云上专线网关
- 11:云联网
- 1025:云上clb
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
                     * 获取认证机制，是否使用SSL，默认不使用
                     * @return IsSSL 认证机制，是否使用SSL，默认不使用
                     * 
                     */
                    bool GetIsSSL() const;

                    /**
                     * 设置认证机制，是否使用SSL，默认不使用
                     * @param _isSSL 认证机制，是否使用SSL，默认不使用
                     * 
                     */
                    void SetIsSSL(const bool& _isSSL);

                    /**
                     * 判断参数 IsSSL 是否已赋值
                     * @return IsSSL 是否已赋值
                     * 
                     */
                    bool IsSSLHasBeenSet() const;

                private:

                    /**
                     * 网络地址
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 端口
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 认证token
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * 网络类型;1：内网；2:外网
                     */
                    uint64_t m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * 所属网络；如果网络类型为内网，该字段必填
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 网络服务类型；如果网络类型为内网，该字段必填
- 0:云上cvm
- 3:云上专线网关
- 11:云联网
- 1025:云上clb
                     */
                    uint64_t m_virtualGatewayType;
                    bool m_virtualGatewayTypeHasBeenSet;

                    /**
                     * 认证机制，是否使用SSL，默认不使用
                     */
                    bool m_isSSL;
                    bool m_isSSLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_NETINFO_H_
