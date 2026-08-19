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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPEXPOSEPATHREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPEXPOSEPATHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCWPExposePath请求参数结构体
                */
                class DescribeCWPExposePathRequest : public AbstractModel
                {
                public:
                    DescribeCWPExposePathRequest();
                    ~DescribeCWPExposePathRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>主机资产ID</p>
                     * @return AssetID <p>主机资产ID</p>
                     * 
                     */
                    std::string GetAssetID() const;

                    /**
                     * 设置<p>主机资产ID</p>
                     * @param _assetID <p>主机资产ID</p>
                     * 
                     */
                    void SetAssetID(const std::string& _assetID);

                    /**
                     * 判断参数 AssetID 是否已赋值
                     * @return AssetID 是否已赋值
                     * 
                     */
                    bool AssetIDHasBeenSet() const;

                    /**
                     * 获取<p>资产归属用户AppID</p>
                     * @return AssetAppID <p>资产归属用户AppID</p>
                     * 
                     */
                    uint64_t GetAssetAppID() const;

                    /**
                     * 设置<p>资产归属用户AppID</p>
                     * @param _assetAppID <p>资产归属用户AppID</p>
                     * 
                     */
                    void SetAssetAppID(const uint64_t& _assetAppID);

                    /**
                     * 判断参数 AssetAppID 是否已赋值
                     * @return AssetAppID 是否已赋值
                     * 
                     */
                    bool AssetAppIDHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>资产IP</p>
                     * @return Ip <p>资产IP</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>资产IP</p>
                     * @param _ip <p>资产IP</p>
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
                     * 获取<p>资产域名</p>
                     * @return Domain <p>资产域名</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>资产域名</p>
                     * @param _domain <p>资产域名</p>
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
                     * 获取<p>端口或端口范围</p>
                     * @return Port <p>端口或端口范围</p>
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置<p>端口或端口范围</p>
                     * @param _port <p>端口或端口范围</p>
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                private:

                    /**
                     * <p>主机资产ID</p>
                     */
                    std::string m_assetID;
                    bool m_assetIDHasBeenSet;

                    /**
                     * <p>资产归属用户AppID</p>
                     */
                    uint64_t m_assetAppID;
                    bool m_assetAppIDHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>资产IP</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>资产域名</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>端口或端口范围</p>
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPEXPOSEPATHREQUEST_H_
