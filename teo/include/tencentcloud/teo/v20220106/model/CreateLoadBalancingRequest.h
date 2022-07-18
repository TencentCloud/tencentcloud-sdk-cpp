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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_CREATELOADBALANCINGREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_CREATELOADBALANCINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * CreateLoadBalancing请求参数结构体
                */
                class CreateLoadBalancingRequest : public AbstractModel
                {
                public:
                    CreateLoadBalancingRequest();
                    ~CreateLoadBalancingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点ID
                     * @return ZoneId 站点ID
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点ID
                     * @param ZoneId 站点ID
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取子域名
                     * @return Host 子域名
                     */
                    std::string GetHost() const;

                    /**
                     * 设置子域名
                     * @param Host 子域名
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取代理模式：
dns_only: 仅DNS
proxied: 开启代理
                     * @return Type 代理模式：
dns_only: 仅DNS
proxied: 开启代理
                     */
                    std::string GetType() const;

                    /**
                     * 设置代理模式：
dns_only: 仅DNS
proxied: 开启代理
                     * @param Type 代理模式：
dns_only: 仅DNS
proxied: 开启代理
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取使用的源站组ID
                     * @return OriginId 使用的源站组ID
                     */
                    std::vector<std::string> GetOriginId() const;

                    /**
                     * 设置使用的源站组ID
                     * @param OriginId 使用的源站组ID
                     */
                    void SetOriginId(const std::vector<std::string>& _originId);

                    /**
                     * 判断参数 OriginId 是否已赋值
                     * @return OriginId 是否已赋值
                     */
                    bool OriginIdHasBeenSet() const;

                    /**
                     * 获取当Type=dns_only表示DNS的TTL时间
                     * @return TTL 当Type=dns_only表示DNS的TTL时间
                     */
                    uint64_t GetTTL() const;

                    /**
                     * 设置当Type=dns_only表示DNS的TTL时间
                     * @param TTL 当Type=dns_only表示DNS的TTL时间
                     */
                    void SetTTL(const uint64_t& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     */
                    bool TTLHasBeenSet() const;

                private:

                    /**
                     * 站点ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 子域名
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 代理模式：
dns_only: 仅DNS
proxied: 开启代理
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 使用的源站组ID
                     */
                    std::vector<std::string> m_originId;
                    bool m_originIdHasBeenSet;

                    /**
                     * 当Type=dns_only表示DNS的TTL时间
                     */
                    uint64_t m_tTL;
                    bool m_tTLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_CREATELOADBALANCINGREQUEST_H_
