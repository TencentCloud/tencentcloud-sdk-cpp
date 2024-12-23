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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEPRIVATEZONEREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEPRIVATEZONEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/privatedns/v20201028/model/TagInfo.h>
#include <tencentcloud/privatedns/v20201028/model/VpcInfo.h>
#include <tencentcloud/privatedns/v20201028/model/AccountVpcInfo.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * CreatePrivateZone请求参数结构体
                */
                class CreatePrivateZoneRequest : public AbstractModel
                {
                public:
                    CreatePrivateZoneRequest();
                    ~CreatePrivateZoneRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名，格式必须是标准的TLD
                     * @return Domain 域名，格式必须是标准的TLD
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名，格式必须是标准的TLD
                     * @param _domain 域名，格式必须是标准的TLD
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
                     * 获取创建私有域的同时，为其打上标签
                     * @return TagSet 创建私有域的同时，为其打上标签
                     * 
                     */
                    std::vector<TagInfo> GetTagSet() const;

                    /**
                     * 设置创建私有域的同时，为其打上标签
                     * @param _tagSet 创建私有域的同时，为其打上标签
                     * 
                     */
                    void SetTagSet(const std::vector<TagInfo>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取创建私有域的同时，将其关联至VPC
                     * @return VpcSet 创建私有域的同时，将其关联至VPC
                     * 
                     */
                    std::vector<VpcInfo> GetVpcSet() const;

                    /**
                     * 设置创建私有域的同时，将其关联至VPC
                     * @param _vpcSet 创建私有域的同时，将其关联至VPC
                     * 
                     */
                    void SetVpcSet(const std::vector<VpcInfo>& _vpcSet);

                    /**
                     * 判断参数 VpcSet 是否已赋值
                     * @return VpcSet 是否已赋值
                     * 
                     */
                    bool VpcSetHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取是否开启子域名递归, ENABLED， DISABLED。默认值为ENABLED
                     * @return DnsForwardStatus 是否开启子域名递归, ENABLED， DISABLED。默认值为ENABLED
                     * 
                     */
                    std::string GetDnsForwardStatus() const;

                    /**
                     * 设置是否开启子域名递归, ENABLED， DISABLED。默认值为ENABLED
                     * @param _dnsForwardStatus 是否开启子域名递归, ENABLED， DISABLED。默认值为ENABLED
                     * 
                     */
                    void SetDnsForwardStatus(const std::string& _dnsForwardStatus);

                    /**
                     * 判断参数 DnsForwardStatus 是否已赋值
                     * @return DnsForwardStatus 是否已赋值
                     * 
                     */
                    bool DnsForwardStatusHasBeenSet() const;

                    /**
                     * 获取创建私有域的同时，将其关联至VPC
                     * @return Vpcs 创建私有域的同时，将其关联至VPC
                     * @deprecated
                     */
                    std::vector<VpcInfo> GetVpcs() const;

                    /**
                     * 设置创建私有域的同时，将其关联至VPC
                     * @param _vpcs 创建私有域的同时，将其关联至VPC
                     * @deprecated
                     */
                    void SetVpcs(const std::vector<VpcInfo>& _vpcs);

                    /**
                     * 判断参数 Vpcs 是否已赋值
                     * @return Vpcs 是否已赋值
                     * @deprecated
                     */
                    bool VpcsHasBeenSet() const;

                    /**
                     * 获取创建私有域同时绑定关联账号的VPC
                     * @return AccountVpcSet 创建私有域同时绑定关联账号的VPC
                     * 
                     */
                    std::vector<AccountVpcInfo> GetAccountVpcSet() const;

                    /**
                     * 设置创建私有域同时绑定关联账号的VPC
                     * @param _accountVpcSet 创建私有域同时绑定关联账号的VPC
                     * 
                     */
                    void SetAccountVpcSet(const std::vector<AccountVpcInfo>& _accountVpcSet);

                    /**
                     * 判断参数 AccountVpcSet 是否已赋值
                     * @return AccountVpcSet 是否已赋值
                     * 
                     */
                    bool AccountVpcSetHasBeenSet() const;

                    /**
                     * 获取是否CNAME加速：ENABLED，DISABLED，默认值为ENABLED
                     * @return CnameSpeedupStatus 是否CNAME加速：ENABLED，DISABLED，默认值为ENABLED
                     * 
                     */
                    std::string GetCnameSpeedupStatus() const;

                    /**
                     * 设置是否CNAME加速：ENABLED，DISABLED，默认值为ENABLED
                     * @param _cnameSpeedupStatus 是否CNAME加速：ENABLED，DISABLED，默认值为ENABLED
                     * 
                     */
                    void SetCnameSpeedupStatus(const std::string& _cnameSpeedupStatus);

                    /**
                     * 判断参数 CnameSpeedupStatus 是否已赋值
                     * @return CnameSpeedupStatus 是否已赋值
                     * 
                     */
                    bool CnameSpeedupStatusHasBeenSet() const;

                private:

                    /**
                     * 域名，格式必须是标准的TLD
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 创建私有域的同时，为其打上标签
                     */
                    std::vector<TagInfo> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 创建私有域的同时，将其关联至VPC
                     */
                    std::vector<VpcInfo> m_vpcSet;
                    bool m_vpcSetHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 是否开启子域名递归, ENABLED， DISABLED。默认值为ENABLED
                     */
                    std::string m_dnsForwardStatus;
                    bool m_dnsForwardStatusHasBeenSet;

                    /**
                     * 创建私有域的同时，将其关联至VPC
                     */
                    std::vector<VpcInfo> m_vpcs;
                    bool m_vpcsHasBeenSet;

                    /**
                     * 创建私有域同时绑定关联账号的VPC
                     */
                    std::vector<AccountVpcInfo> m_accountVpcSet;
                    bool m_accountVpcSetHasBeenSet;

                    /**
                     * 是否CNAME加速：ENABLED，DISABLED，默认值为ENABLED
                     */
                    std::string m_cnameSpeedupStatus;
                    bool m_cnameSpeedupStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEPRIVATEZONEREQUEST_H_
