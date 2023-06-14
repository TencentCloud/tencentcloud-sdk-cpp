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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATECCGEOIPBLOCKCONFIGREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATECCGEOIPBLOCKCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/CcGeoIPBlockConfig.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * CreateCcGeoIPBlockConfig请求参数结构体
                */
                class CreateCcGeoIPBlockConfigRequest : public AbstractModel
                {
                public:
                    CreateCcGeoIPBlockConfigRequest();
                    ~CreateCcGeoIPBlockConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
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
                     * 获取ip地址
                     * @return IP ip地址
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置ip地址
                     * @param _iP ip地址
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

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
                     * 获取协议类型
                     * @return Protocol 协议类型
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议类型
                     * @param _protocol 协议类型
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
                     * 获取CC区域封禁配置
                     * @return CcGeoIPBlockConfig CC区域封禁配置
                     * 
                     */
                    CcGeoIPBlockConfig GetCcGeoIPBlockConfig() const;

                    /**
                     * 设置CC区域封禁配置
                     * @param _ccGeoIPBlockConfig CC区域封禁配置
                     * 
                     */
                    void SetCcGeoIPBlockConfig(const CcGeoIPBlockConfig& _ccGeoIPBlockConfig);

                    /**
                     * 判断参数 CcGeoIPBlockConfig 是否已赋值
                     * @return CcGeoIPBlockConfig 是否已赋值
                     * 
                     */
                    bool CcGeoIPBlockConfigHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * ip地址
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 协议类型
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * CC区域封禁配置
                     */
                    CcGeoIPBlockConfig m_ccGeoIPBlockConfig;
                    bool m_ccGeoIPBlockConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATECCGEOIPBLOCKCONFIGREQUEST_H_
