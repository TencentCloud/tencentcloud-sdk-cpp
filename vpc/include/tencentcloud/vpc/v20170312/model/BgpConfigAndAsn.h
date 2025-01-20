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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_BGPCONFIGANDASN_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_BGPCONFIGANDASN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * VPN通道BGP配置
                */
                class BgpConfigAndAsn : public AbstractModel
                {
                public:
                    BgpConfigAndAsn();
                    ~BgpConfigAndAsn() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取BGP通道CIDR
                     * @return TunnelCidr BGP通道CIDR
                     * 
                     */
                    std::string GetTunnelCidr() const;

                    /**
                     * 设置BGP通道CIDR
                     * @param _tunnelCidr BGP通道CIDR
                     * 
                     */
                    void SetTunnelCidr(const std::string& _tunnelCidr);

                    /**
                     * 判断参数 TunnelCidr 是否已赋值
                     * @return TunnelCidr 是否已赋值
                     * 
                     */
                    bool TunnelCidrHasBeenSet() const;

                    /**
                     * 获取本端BGP IP
                     * @return LocalBgpIp 本端BGP IP
                     * 
                     */
                    std::string GetLocalBgpIp() const;

                    /**
                     * 设置本端BGP IP
                     * @param _localBgpIp 本端BGP IP
                     * 
                     */
                    void SetLocalBgpIp(const std::string& _localBgpIp);

                    /**
                     * 判断参数 LocalBgpIp 是否已赋值
                     * @return LocalBgpIp 是否已赋值
                     * 
                     */
                    bool LocalBgpIpHasBeenSet() const;

                    /**
                     * 获取对端BGP IP
                     * @return RemoteBgpIp 对端BGP IP
                     * 
                     */
                    std::string GetRemoteBgpIp() const;

                    /**
                     * 设置对端BGP IP
                     * @param _remoteBgpIp 对端BGP IP
                     * 
                     */
                    void SetRemoteBgpIp(const std::string& _remoteBgpIp);

                    /**
                     * 判断参数 RemoteBgpIp 是否已赋值
                     * @return RemoteBgpIp 是否已赋值
                     * 
                     */
                    bool RemoteBgpIpHasBeenSet() const;

                    /**
                     * 获取本端BGP ASN号
                     * @return LocalBgpAsn 本端BGP ASN号
                     * 
                     */
                    std::string GetLocalBgpAsn() const;

                    /**
                     * 设置本端BGP ASN号
                     * @param _localBgpAsn 本端BGP ASN号
                     * 
                     */
                    void SetLocalBgpAsn(const std::string& _localBgpAsn);

                    /**
                     * 判断参数 LocalBgpAsn 是否已赋值
                     * @return LocalBgpAsn 是否已赋值
                     * 
                     */
                    bool LocalBgpAsnHasBeenSet() const;

                    /**
                     * 获取对端BGP ASN号
                     * @return RemoteBgpAsn 对端BGP ASN号
                     * 
                     */
                    std::string GetRemoteBgpAsn() const;

                    /**
                     * 设置对端BGP ASN号
                     * @param _remoteBgpAsn 对端BGP ASN号
                     * 
                     */
                    void SetRemoteBgpAsn(const std::string& _remoteBgpAsn);

                    /**
                     * 判断参数 RemoteBgpAsn 是否已赋值
                     * @return RemoteBgpAsn 是否已赋值
                     * 
                     */
                    bool RemoteBgpAsnHasBeenSet() const;

                private:

                    /**
                     * BGP通道CIDR
                     */
                    std::string m_tunnelCidr;
                    bool m_tunnelCidrHasBeenSet;

                    /**
                     * 本端BGP IP
                     */
                    std::string m_localBgpIp;
                    bool m_localBgpIpHasBeenSet;

                    /**
                     * 对端BGP IP
                     */
                    std::string m_remoteBgpIp;
                    bool m_remoteBgpIpHasBeenSet;

                    /**
                     * 本端BGP ASN号
                     */
                    std::string m_localBgpAsn;
                    bool m_localBgpAsnHasBeenSet;

                    /**
                     * 对端BGP ASN号
                     */
                    std::string m_remoteBgpAsn;
                    bool m_remoteBgpAsnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_BGPCONFIGANDASN_H_
