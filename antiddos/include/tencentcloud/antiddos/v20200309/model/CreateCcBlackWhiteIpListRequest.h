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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATECCBLACKWHITEIPLISTREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATECCBLACKWHITEIPLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/IpSegment.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * CreateCcBlackWhiteIpList请求参数结构体
                */
                class CreateCcBlackWhiteIpListRequest : public AbstractModel
                {
                public:
                    CreateCcBlackWhiteIpListRequest();
                    ~CreateCcBlackWhiteIpListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源实例ID
                     * @return InstanceId 资源实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置资源实例ID
                     * @param _instanceId 资源实例ID
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
                     * 获取IP列表
                     * @return IpList IP列表
                     * 
                     */
                    std::vector<IpSegment> GetIpList() const;

                    /**
                     * 设置IP列表
                     * @param _ipList IP列表
                     * 
                     */
                    void SetIpList(const std::vector<IpSegment>& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     * 
                     */
                    bool IpListHasBeenSet() const;

                    /**
                     * 获取IP类型，取值[black(黑名单IP), white(白名单IP)]
                     * @return Type IP类型，取值[black(黑名单IP), white(白名单IP)]
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置IP类型，取值[black(黑名单IP), white(白名单IP)]
                     * @param _type IP类型，取值[black(黑名单IP), white(白名单IP)]
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Ip地址
                     * @return Ip Ip地址
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Ip地址
                     * @param _ip Ip地址
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

                private:

                    /**
                     * 资源实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * IP列表
                     */
                    std::vector<IpSegment> m_ipList;
                    bool m_ipListHasBeenSet;

                    /**
                     * IP类型，取值[black(黑名单IP), white(白名单IP)]
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Ip地址
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 协议
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATECCBLACKWHITEIPLISTREQUEST_H_
