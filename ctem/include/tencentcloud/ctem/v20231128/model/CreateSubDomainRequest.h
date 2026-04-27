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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_CREATESUBDOMAINREQUEST_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_CREATESUBDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * CreateSubDomain请求参数结构体
                */
                class CreateSubDomainRequest : public AbstractModel
                {
                public:
                    CreateSubDomainRequest();
                    ~CreateSubDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>企业Id</p>
                     * @return CustomerId <p>企业Id</p>
                     * 
                     */
                    int64_t GetCustomerId() const;

                    /**
                     * 设置<p>企业Id</p>
                     * @param _customerId <p>企业Id</p>
                     * 
                     */
                    void SetCustomerId(const int64_t& _customerId);

                    /**
                     * 判断参数 CustomerId 是否已赋值
                     * @return CustomerId 是否已赋值
                     * 
                     */
                    bool CustomerIdHasBeenSet() const;

                    /**
                     * 获取<p>子域名</p>
                     * @return SubDomain <p>子域名</p>
                     * 
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 设置<p>子域名</p>
                     * @param _subDomain <p>子域名</p>
                     * 
                     */
                    void SetSubDomain(const std::string& _subDomain);

                    /**
                     * 判断参数 SubDomain 是否已赋值
                     * @return SubDomain 是否已赋值
                     * 
                     */
                    bool SubDomainHasBeenSet() const;

                    /**
                     * 获取<p>Ip</p>
                     * @return Ip <p>Ip</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>Ip</p>
                     * @param _ip <p>Ip</p>
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
                     * 获取<p>国家</p>
                     * @return Country <p>国家</p>
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置<p>国家</p>
                     * @param _country <p>国家</p>
                     * 
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取<p>省</p>
                     * @return Province <p>省</p>
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置<p>省</p>
                     * @param _province <p>省</p>
                     * 
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取<p>城市</p>
                     * @return City <p>城市</p>
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置<p>城市</p>
                     * @param _city <p>城市</p>
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取<p>Isp</p>
                     * @return Isp <p>Isp</p>
                     * 
                     */
                    std::string GetIsp() const;

                    /**
                     * 设置<p>Isp</p>
                     * @param _isp <p>Isp</p>
                     * 
                     */
                    void SetIsp(const std::string& _isp);

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     * 
                     */
                    bool IspHasBeenSet() const;

                    /**
                     * 获取<p>子公司</p>
                     * @return EnterpriseUid <p>子公司</p>
                     * 
                     */
                    std::string GetEnterpriseUid() const;

                    /**
                     * 设置<p>子公司</p>
                     * @param _enterpriseUid <p>子公司</p>
                     * 
                     */
                    void SetEnterpriseUid(const std::string& _enterpriseUid);

                    /**
                     * 判断参数 EnterpriseUid 是否已赋值
                     * @return EnterpriseUid 是否已赋值
                     * 
                     */
                    bool EnterpriseUidHasBeenSet() const;

                    /**
                     * 获取<p>DNS解析类型。A、AAAA、CNAME等</p>
                     * @return DnsType <p>DNS解析类型。A、AAAA、CNAME等</p>
                     * 
                     */
                    std::string GetDnsType() const;

                    /**
                     * 设置<p>DNS解析类型。A、AAAA、CNAME等</p>
                     * @param _dnsType <p>DNS解析类型。A、AAAA、CNAME等</p>
                     * 
                     */
                    void SetDnsType(const std::string& _dnsType);

                    /**
                     * 判断参数 DnsType 是否已赋值
                     * @return DnsType 是否已赋值
                     * 
                     */
                    bool DnsTypeHasBeenSet() const;

                    /**
                     * 获取<p>DNS解析值。域名或者ip</p>
                     * @return DnsValue <p>DNS解析值。域名或者ip</p>
                     * 
                     */
                    std::string GetDnsValue() const;

                    /**
                     * 设置<p>DNS解析值。域名或者ip</p>
                     * @param _dnsValue <p>DNS解析值。域名或者ip</p>
                     * 
                     */
                    void SetDnsValue(const std::string& _dnsValue);

                    /**
                     * 判断参数 DnsValue 是否已赋值
                     * @return DnsValue 是否已赋值
                     * 
                     */
                    bool DnsValueHasBeenSet() const;

                private:

                    /**
                     * <p>企业Id</p>
                     */
                    int64_t m_customerId;
                    bool m_customerIdHasBeenSet;

                    /**
                     * <p>子域名</p>
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * <p>Ip</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>国家</p>
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * <p>省</p>
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * <p>城市</p>
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * <p>Isp</p>
                     */
                    std::string m_isp;
                    bool m_ispHasBeenSet;

                    /**
                     * <p>子公司</p>
                     */
                    std::string m_enterpriseUid;
                    bool m_enterpriseUidHasBeenSet;

                    /**
                     * <p>DNS解析类型。A、AAAA、CNAME等</p>
                     */
                    std::string m_dnsType;
                    bool m_dnsTypeHasBeenSet;

                    /**
                     * <p>DNS解析值。域名或者ip</p>
                     */
                    std::string m_dnsValue;
                    bool m_dnsValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_CREATESUBDOMAINREQUEST_H_
