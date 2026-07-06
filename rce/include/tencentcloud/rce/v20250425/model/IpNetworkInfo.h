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

#ifndef TENCENTCLOUD_RCE_V20250425_MODEL_IPNETWORKINFO_H_
#define TENCENTCLOUD_RCE_V20250425_MODEL_IPNETWORKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20250425
        {
            namespace Model
            {
                /**
                * IP基础网络信息
                */
                class IpNetworkInfo : public AbstractModel
                {
                public:
                    IpNetworkInfo();
                    ~IpNetworkInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>互联网服务提供商</p>
                     * @return ISP <p>互联网服务提供商</p>
                     * 
                     */
                    std::string GetISP() const;

                    /**
                     * 设置<p>互联网服务提供商</p>
                     * @param _iSP <p>互联网服务提供商</p>
                     * 
                     */
                    void SetISP(const std::string& _iSP);

                    /**
                     * 判断参数 ISP 是否已赋值
                     * @return ISP 是否已赋值
                     * 
                     */
                    bool ISPHasBeenSet() const;

                    /**
                     * 获取<p>自治系统号</p>
                     * @return ASN <p>自治系统号</p>
                     * 
                     */
                    std::string GetASN() const;

                    /**
                     * 设置<p>自治系统号</p>
                     * @param _aSN <p>自治系统号</p>
                     * 
                     */
                    void SetASN(const std::string& _aSN);

                    /**
                     * 判断参数 ASN 是否已赋值
                     * @return ASN 是否已赋值
                     * 
                     */
                    bool ASNHasBeenSet() const;

                    /**
                     * 获取<p>IP注册组织名称</p>
                     * @return Organization <p>IP注册组织名称</p>
                     * 
                     */
                    std::string GetOrganization() const;

                    /**
                     * 设置<p>IP注册组织名称</p>
                     * @param _organization <p>IP注册组织名称</p>
                     * 
                     */
                    void SetOrganization(const std::string& _organization);

                    /**
                     * 判断参数 Organization 是否已赋值
                     * @return Organization 是否已赋值
                     * 
                     */
                    bool OrganizationHasBeenSet() const;

                    /**
                     * 获取<p>是否保留IP</p>
                     * @return IsReserved <p>是否保留IP</p>
                     * 
                     */
                    bool GetIsReserved() const;

                    /**
                     * 设置<p>是否保留IP</p>
                     * @param _isReserved <p>是否保留IP</p>
                     * 
                     */
                    void SetIsReserved(const bool& _isReserved);

                    /**
                     * 判断参数 IsReserved 是否已赋值
                     * @return IsReserved 是否已赋值
                     * 
                     */
                    bool IsReservedHasBeenSet() const;

                    /**
                     * 获取<p>是否网关IP</p>
                     * @return IsGateway <p>是否网关IP</p>
                     * 
                     */
                    bool GetIsGateway() const;

                    /**
                     * 设置<p>是否网关IP</p>
                     * @param _isGateway <p>是否网关IP</p>
                     * 
                     */
                    void SetIsGateway(const bool& _isGateway);

                    /**
                     * 判断参数 IsGateway 是否已赋值
                     * @return IsGateway 是否已赋值
                     * 
                     */
                    bool IsGatewayHasBeenSet() const;

                    /**
                     * 获取<p>是否任播网络</p>
                     * @return IsAnycast <p>是否任播网络</p>
                     * 
                     */
                    bool GetIsAnycast() const;

                    /**
                     * 设置<p>是否任播网络</p>
                     * @param _isAnycast <p>是否任播网络</p>
                     * 
                     */
                    void SetIsAnycast(const bool& _isAnycast);

                    /**
                     * 判断参数 IsAnycast 是否已赋值
                     * @return IsAnycast 是否已赋值
                     * 
                     */
                    bool IsAnycastHasBeenSet() const;

                    /**
                     * 获取<p>是否移动网络</p>
                     * @return IsMobile <p>是否移动网络</p>
                     * 
                     */
                    bool GetIsMobile() const;

                    /**
                     * 设置<p>是否移动网络</p>
                     * @param _isMobile <p>是否移动网络</p>
                     * 
                     */
                    void SetIsMobile(const bool& _isMobile);

                    /**
                     * 判断参数 IsMobile 是否已赋值
                     * @return IsMobile 是否已赋值
                     * 
                     */
                    bool IsMobileHasBeenSet() const;

                    /**
                     * 获取<p>是否动态IP</p>
                     * @return IsDynamic <p>是否动态IP</p>
                     * 
                     */
                    bool GetIsDynamic() const;

                    /**
                     * 设置<p>是否动态IP</p>
                     * @param _isDynamic <p>是否动态IP</p>
                     * 
                     */
                    void SetIsDynamic(const bool& _isDynamic);

                    /**
                     * 判断参数 IsDynamic 是否已赋值
                     * @return IsDynamic 是否已赋值
                     * 
                     */
                    bool IsDynamicHasBeenSet() const;

                    /**
                     * 获取<p>是否网络出口</p>
                     * @return IsEgress <p>是否网络出口</p>
                     * 
                     */
                    bool GetIsEgress() const;

                    /**
                     * 设置<p>是否网络出口</p>
                     * @param _isEgress <p>是否网络出口</p>
                     * 
                     */
                    void SetIsEgress(const bool& _isEgress);

                    /**
                     * 判断参数 IsEgress 是否已赋值
                     * @return IsEgress 是否已赋值
                     * 
                     */
                    bool IsEgressHasBeenSet() const;

                    /**
                     * 获取<p>是否域名解析</p>
                     * @return IsDNS <p>是否域名解析</p>
                     * 
                     */
                    bool GetIsDNS() const;

                    /**
                     * 设置<p>是否域名解析</p>
                     * @param _isDNS <p>是否域名解析</p>
                     * 
                     */
                    void SetIsDNS(const bool& _isDNS);

                    /**
                     * 判断参数 IsDNS 是否已赋值
                     * @return IsDNS 是否已赋值
                     * 
                     */
                    bool IsDNSHasBeenSet() const;

                    /**
                     * 获取<p>是否教育机构</p>
                     * @return IsEducation <p>是否教育机构</p>
                     * 
                     */
                    bool GetIsEducation() const;

                    /**
                     * 设置<p>是否教育机构</p>
                     * @param _isEducation <p>是否教育机构</p>
                     * 
                     */
                    void SetIsEducation(const bool& _isEducation);

                    /**
                     * 判断参数 IsEducation 是否已赋值
                     * @return IsEducation 是否已赋值
                     * 
                     */
                    bool IsEducationHasBeenSet() const;

                    /**
                     * 获取<p>是否组织机构</p>
                     * @return IsInstitution <p>是否组织机构</p>
                     * 
                     */
                    bool GetIsInstitution() const;

                    /**
                     * 设置<p>是否组织机构</p>
                     * @param _isInstitution <p>是否组织机构</p>
                     * 
                     */
                    void SetIsInstitution(const bool& _isInstitution);

                    /**
                     * 判断参数 IsInstitution 是否已赋值
                     * @return IsInstitution 是否已赋值
                     * 
                     */
                    bool IsInstitutionHasBeenSet() const;

                    /**
                     * 获取<p>是否企业专线</p>
                     * @return IsCompany <p>是否企业专线</p>
                     * 
                     */
                    bool GetIsCompany() const;

                    /**
                     * 设置<p>是否企业专线</p>
                     * @param _isCompany <p>是否企业专线</p>
                     * 
                     */
                    void SetIsCompany(const bool& _isCompany);

                    /**
                     * 判断参数 IsCompany 是否已赋值
                     * @return IsCompany 是否已赋值
                     * 
                     */
                    bool IsCompanyHasBeenSet() const;

                    /**
                     * 获取<p>是否家用宽带</p>
                     * @return IsResidence <p>是否家用宽带</p>
                     * 
                     */
                    bool GetIsResidence() const;

                    /**
                     * 设置<p>是否家用宽带</p>
                     * @param _isResidence <p>是否家用宽带</p>
                     * 
                     */
                    void SetIsResidence(const bool& _isResidence);

                    /**
                     * 判断参数 IsResidence 是否已赋值
                     * @return IsResidence 是否已赋值
                     * 
                     */
                    bool IsResidenceHasBeenSet() const;

                    /**
                     * 获取<p>是否云服务</p>
                     * @return IsCloudService <p>是否云服务</p>
                     * 
                     */
                    bool GetIsCloudService() const;

                    /**
                     * 设置<p>是否云服务</p>
                     * @param _isCloudService <p>是否云服务</p>
                     * 
                     */
                    void SetIsCloudService(const bool& _isCloudService);

                    /**
                     * 判断参数 IsCloudService 是否已赋值
                     * @return IsCloudService 是否已赋值
                     * 
                     */
                    bool IsCloudServiceHasBeenSet() const;

                    /**
                     * 获取<p>是否基础设施</p>
                     * @return IsInfrastructure <p>是否基础设施</p>
                     * 
                     */
                    bool GetIsInfrastructure() const;

                    /**
                     * 设置<p>是否基础设施</p>
                     * @param _isInfrastructure <p>是否基础设施</p>
                     * 
                     */
                    void SetIsInfrastructure(const bool& _isInfrastructure);

                    /**
                     * 判断参数 IsInfrastructure 是否已赋值
                     * @return IsInfrastructure 是否已赋值
                     * 
                     */
                    bool IsInfrastructureHasBeenSet() const;

                    /**
                     * 获取<p>是否邮箱服务</p>
                     * @return IsMXServer <p>是否邮箱服务</p>
                     * 
                     */
                    bool GetIsMXServer() const;

                    /**
                     * 设置<p>是否邮箱服务</p>
                     * @param _isMXServer <p>是否邮箱服务</p>
                     * 
                     */
                    void SetIsMXServer(const bool& _isMXServer);

                    /**
                     * 判断参数 IsMXServer 是否已赋值
                     * @return IsMXServer 是否已赋值
                     * 
                     */
                    bool IsMXServerHasBeenSet() const;

                private:

                    /**
                     * <p>互联网服务提供商</p>
                     */
                    std::string m_iSP;
                    bool m_iSPHasBeenSet;

                    /**
                     * <p>自治系统号</p>
                     */
                    std::string m_aSN;
                    bool m_aSNHasBeenSet;

                    /**
                     * <p>IP注册组织名称</p>
                     */
                    std::string m_organization;
                    bool m_organizationHasBeenSet;

                    /**
                     * <p>是否保留IP</p>
                     */
                    bool m_isReserved;
                    bool m_isReservedHasBeenSet;

                    /**
                     * <p>是否网关IP</p>
                     */
                    bool m_isGateway;
                    bool m_isGatewayHasBeenSet;

                    /**
                     * <p>是否任播网络</p>
                     */
                    bool m_isAnycast;
                    bool m_isAnycastHasBeenSet;

                    /**
                     * <p>是否移动网络</p>
                     */
                    bool m_isMobile;
                    bool m_isMobileHasBeenSet;

                    /**
                     * <p>是否动态IP</p>
                     */
                    bool m_isDynamic;
                    bool m_isDynamicHasBeenSet;

                    /**
                     * <p>是否网络出口</p>
                     */
                    bool m_isEgress;
                    bool m_isEgressHasBeenSet;

                    /**
                     * <p>是否域名解析</p>
                     */
                    bool m_isDNS;
                    bool m_isDNSHasBeenSet;

                    /**
                     * <p>是否教育机构</p>
                     */
                    bool m_isEducation;
                    bool m_isEducationHasBeenSet;

                    /**
                     * <p>是否组织机构</p>
                     */
                    bool m_isInstitution;
                    bool m_isInstitutionHasBeenSet;

                    /**
                     * <p>是否企业专线</p>
                     */
                    bool m_isCompany;
                    bool m_isCompanyHasBeenSet;

                    /**
                     * <p>是否家用宽带</p>
                     */
                    bool m_isResidence;
                    bool m_isResidenceHasBeenSet;

                    /**
                     * <p>是否云服务</p>
                     */
                    bool m_isCloudService;
                    bool m_isCloudServiceHasBeenSet;

                    /**
                     * <p>是否基础设施</p>
                     */
                    bool m_isInfrastructure;
                    bool m_isInfrastructureHasBeenSet;

                    /**
                     * <p>是否邮箱服务</p>
                     */
                    bool m_isMXServer;
                    bool m_isMXServerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20250425_MODEL_IPNETWORKINFO_H_
