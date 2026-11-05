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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_QUERYENTERPRISEBASICINFORESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_QUERYENTERPRISEBASICINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * QueryEnterpriseBasicInfo返回参数结构体
                */
                class QueryEnterpriseBasicInfoResponse : public AbstractModel
                {
                public:
                    QueryEnterpriseBasicInfoResponse();
                    ~QueryEnterpriseBasicInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>请求状态。<br>枚举值：<br>0：成功，计费；<br>1：系统异常，不计费；<br>2：查询无结果，不计费。</p>
                     * @return StatusCode <p>请求状态。<br>枚举值：<br>0：成功，计费；<br>1：系统异常，不计费；<br>2：查询无结果，不计费。</p>
                     * 
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取<p>统一社会信用代码。</p>
                     * @return CreditCode <p>统一社会信用代码。</p>
                     * 
                     */
                    std::string GetCreditCode() const;

                    /**
                     * 判断参数 CreditCode 是否已赋值
                     * @return CreditCode 是否已赋值
                     * 
                     */
                    bool CreditCodeHasBeenSet() const;

                    /**
                     * 获取<p>企业名称。</p>
                     * @return EntName <p>企业名称。</p>
                     * 
                     */
                    std::string GetEntName() const;

                    /**
                     * 判断参数 EntName 是否已赋值
                     * @return EntName 是否已赋值
                     * 
                     */
                    bool EntNameHasBeenSet() const;

                    /**
                     * 获取<p>主体类型。</p>
                     * @return Type <p>主体类型。</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>法人代表。</p>
                     * @return LrName <p>法人代表。</p>
                     * 
                     */
                    std::string GetLrName() const;

                    /**
                     * 判断参数 LrName 是否已赋值
                     * @return LrName 是否已赋值
                     * 
                     */
                    bool LrNameHasBeenSet() const;

                    /**
                     * 获取<p>注册资本。</p>
                     * @return Capital <p>注册资本。</p>
                     * 
                     */
                    std::string GetCapital() const;

                    /**
                     * 判断参数 Capital 是否已赋值
                     * @return Capital 是否已赋值
                     * 
                     */
                    bool CapitalHasBeenSet() const;

                    /**
                     * 获取<p>企业登记住所或注册地址。</p>
                     * @return Address <p>企业登记住所或注册地址。</p>
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取<p>经营范围。</p>
                     * @return Business <p>经营范围。</p>
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取<p>登记机关。</p>
                     * @return RegistrationAuthority <p>登记机关。</p>
                     * 
                     */
                    std::string GetRegistrationAuthority() const;

                    /**
                     * 判断参数 RegistrationAuthority 是否已赋值
                     * @return RegistrationAuthority 是否已赋值
                     * 
                     */
                    bool RegistrationAuthorityHasBeenSet() const;

                    /**
                     * 获取<p>经营状态（标准化），枚举值：<br>1：开业（在营）；<br>2：迁出；<br>3：注销；<br>4：吊销；<br>5：撤销；<br>6：停业；<br>7：撤销登记；<br>0：其他；/：无法查询。</p>
                     * @return OperatingStatus <p>经营状态（标准化），枚举值：<br>1：开业（在营）；<br>2：迁出；<br>3：注销；<br>4：吊销；<br>5：撤销；<br>6：停业；<br>7：撤销登记；<br>0：其他；/：无法查询。</p>
                     * 
                     */
                    std::string GetOperatingStatus() const;

                    /**
                     * 判断参数 OperatingStatus 是否已赋值
                     * @return OperatingStatus 是否已赋值
                     * 
                     */
                    bool OperatingStatusHasBeenSet() const;

                    /**
                     * 获取<p>经营状态（原始值）。</p>
                     * @return RawOperatingStatus <p>经营状态（原始值）。</p>
                     * 
                     */
                    std::string GetRawOperatingStatus() const;

                    /**
                     * 判断参数 RawOperatingStatus 是否已赋值
                     * @return RawOperatingStatus 是否已赋值
                     * 
                     */
                    bool RawOperatingStatusHasBeenSet() const;

                    /**
                     * 获取<p>成立日期。</p>
                     * @return SetDate <p>成立日期。</p>
                     * 
                     */
                    std::string GetSetDate() const;

                    /**
                     * 判断参数 SetDate 是否已赋值
                     * @return SetDate 是否已赋值
                     * 
                     */
                    bool SetDateHasBeenSet() const;

                    /**
                     * 获取<p>营业期限：一般包括营业开始时间和结束时间<br>参数格式：yyyy-MM-dd/yyyy-MM-dd<br>无固定期限的格式为：yyyy-MM-dd/<br>部分企业历史数据可能为空，将返回：/<br>无法查询，将返回：/</p>
                     * @return OperatingPeriod <p>营业期限：一般包括营业开始时间和结束时间<br>参数格式：yyyy-MM-dd/yyyy-MM-dd<br>无固定期限的格式为：yyyy-MM-dd/<br>部分企业历史数据可能为空，将返回：/<br>无法查询，将返回：/</p>
                     * 
                     */
                    std::string GetOperatingPeriod() const;

                    /**
                     * 判断参数 OperatingPeriod 是否已赋值
                     * @return OperatingPeriod 是否已赋值
                     * 
                     */
                    bool OperatingPeriodHasBeenSet() const;

                    /**
                     * 获取<p>核准日期。</p>
                     * @return ApprovalDate <p>核准日期。</p>
                     * 
                     */
                    std::string GetApprovalDate() const;

                    /**
                     * 判断参数 ApprovalDate 是否已赋值
                     * @return ApprovalDate 是否已赋值
                     * 
                     */
                    bool ApprovalDateHasBeenSet() const;

                    /**
                     * 获取<p>所在省份。</p>
                     * @return Province <p>所在省份。</p>
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取<p>所在省份的行政区划代码。</p>
                     * @return ProvinceCode <p>所在省份的行政区划代码。</p>
                     * 
                     */
                    std::string GetProvinceCode() const;

                    /**
                     * 判断参数 ProvinceCode 是否已赋值
                     * @return ProvinceCode 是否已赋值
                     * 
                     */
                    bool ProvinceCodeHasBeenSet() const;

                    /**
                     * 获取<p>所在城市。</p>
                     * @return City <p>所在城市。</p>
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取<p>所在城市的行政区划代码。</p>
                     * @return CityCode <p>所在城市的行政区划代码。</p>
                     * 
                     */
                    std::string GetCityCode() const;

                    /**
                     * 判断参数 CityCode 是否已赋值
                     * @return CityCode 是否已赋值
                     * 
                     */
                    bool CityCodeHasBeenSet() const;

                    /**
                     * 获取<p>所在区县。</p>
                     * @return District <p>所在区县。</p>
                     * 
                     */
                    std::string GetDistrict() const;

                    /**
                     * 判断参数 District 是否已赋值
                     * @return District 是否已赋值
                     * 
                     */
                    bool DistrictHasBeenSet() const;

                    /**
                     * 获取<p>所在区县的行政区划代码。</p>
                     * @return DistrictCode <p>所在区县的行政区划代码。</p>
                     * 
                     */
                    std::string GetDistrictCode() const;

                    /**
                     * 判断参数 DistrictCode 是否已赋值
                     * @return DistrictCode 是否已赋值
                     * 
                     */
                    bool DistrictCodeHasBeenSet() const;

                    /**
                     * 获取<p>注册资本币种。</p>
                     * @return CapitalCurrency <p>注册资本币种。</p>
                     * 
                     */
                    std::string GetCapitalCurrency() const;

                    /**
                     * 判断参数 CapitalCurrency 是否已赋值
                     * @return CapitalCurrency 是否已赋值
                     * 
                     */
                    bool CapitalCurrencyHasBeenSet() const;

                    /**
                     * 获取<p>组织机构代码。</p>
                     * @return OrganizationCode <p>组织机构代码。</p>
                     * 
                     */
                    std::string GetOrganizationCode() const;

                    /**
                     * 判断参数 OrganizationCode 是否已赋值
                     * @return OrganizationCode 是否已赋值
                     * 
                     */
                    bool OrganizationCodeHasBeenSet() const;

                    /**
                     * 获取<p>企业英文名称。</p>
                     * @return EnglishName <p>企业英文名称。</p>
                     * 
                     */
                    std::string GetEnglishName() const;

                    /**
                     * 判断参数 EnglishName 是否已赋值
                     * @return EnglishName 是否已赋值
                     * 
                     */
                    bool EnglishNameHasBeenSet() const;

                    /**
                     * 获取<p>企业曾用名列表。</p>
                     * @return FormerNames <p>企业曾用名列表。</p>
                     * 
                     */
                    std::vector<std::string> GetFormerNames() const;

                    /**
                     * 判断参数 FormerNames 是否已赋值
                     * @return FormerNames 是否已赋值
                     * 
                     */
                    bool FormerNamesHasBeenSet() const;

                    /**
                     * 获取<p>原注册号。</p>
                     * @return OriginalRegNum <p>原注册号。</p>
                     * 
                     */
                    std::string GetOriginalRegNum() const;

                    /**
                     * 判断参数 OriginalRegNum 是否已赋值
                     * @return OriginalRegNum 是否已赋值
                     * 
                     */
                    bool OriginalRegNumHasBeenSet() const;

                    /**
                     * 获取<p>实收资本。</p>
                     * @return PaidInCapital <p>实收资本。</p>
                     * 
                     */
                    std::string GetPaidInCapital() const;

                    /**
                     * 判断参数 PaidInCapital 是否已赋值
                     * @return PaidInCapital 是否已赋值
                     * 
                     */
                    bool PaidInCapitalHasBeenSet() const;

                    /**
                     * 获取<p>吊销日期。</p>
                     * @return RevokeDate <p>吊销日期。</p>
                     * 
                     */
                    std::string GetRevokeDate() const;

                    /**
                     * 判断参数 RevokeDate 是否已赋值
                     * @return RevokeDate 是否已赋值
                     * 
                     */
                    bool RevokeDateHasBeenSet() const;

                    /**
                     * 获取<p>吊销原因。</p>
                     * @return RevokeReason <p>吊销原因。</p>
                     * 
                     */
                    std::string GetRevokeReason() const;

                    /**
                     * 判断参数 RevokeReason 是否已赋值
                     * @return RevokeReason 是否已赋值
                     * 
                     */
                    bool RevokeReasonHasBeenSet() const;

                    /**
                     * 获取<p>注销日期。</p>
                     * @return CancellationDate <p>注销日期。</p>
                     * 
                     */
                    std::string GetCancellationDate() const;

                    /**
                     * 判断参数 CancellationDate 是否已赋值
                     * @return CancellationDate 是否已赋值
                     * 
                     */
                    bool CancellationDateHasBeenSet() const;

                    /**
                     * 获取<p>注销原因。</p>
                     * @return CancellationReason <p>注销原因。</p>
                     * 
                     */
                    std::string GetCancellationReason() const;

                    /**
                     * 判断参数 CancellationReason 是否已赋值
                     * @return CancellationReason 是否已赋值
                     * 
                     */
                    bool CancellationReasonHasBeenSet() const;

                private:

                    /**
                     * <p>请求状态。<br>枚举值：<br>0：成功，计费；<br>1：系统异常，不计费；<br>2：查询无结果，不计费。</p>
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * <p>统一社会信用代码。</p>
                     */
                    std::string m_creditCode;
                    bool m_creditCodeHasBeenSet;

                    /**
                     * <p>企业名称。</p>
                     */
                    std::string m_entName;
                    bool m_entNameHasBeenSet;

                    /**
                     * <p>主体类型。</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>法人代表。</p>
                     */
                    std::string m_lrName;
                    bool m_lrNameHasBeenSet;

                    /**
                     * <p>注册资本。</p>
                     */
                    std::string m_capital;
                    bool m_capitalHasBeenSet;

                    /**
                     * <p>企业登记住所或注册地址。</p>
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * <p>经营范围。</p>
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * <p>登记机关。</p>
                     */
                    std::string m_registrationAuthority;
                    bool m_registrationAuthorityHasBeenSet;

                    /**
                     * <p>经营状态（标准化），枚举值：<br>1：开业（在营）；<br>2：迁出；<br>3：注销；<br>4：吊销；<br>5：撤销；<br>6：停业；<br>7：撤销登记；<br>0：其他；/：无法查询。</p>
                     */
                    std::string m_operatingStatus;
                    bool m_operatingStatusHasBeenSet;

                    /**
                     * <p>经营状态（原始值）。</p>
                     */
                    std::string m_rawOperatingStatus;
                    bool m_rawOperatingStatusHasBeenSet;

                    /**
                     * <p>成立日期。</p>
                     */
                    std::string m_setDate;
                    bool m_setDateHasBeenSet;

                    /**
                     * <p>营业期限：一般包括营业开始时间和结束时间<br>参数格式：yyyy-MM-dd/yyyy-MM-dd<br>无固定期限的格式为：yyyy-MM-dd/<br>部分企业历史数据可能为空，将返回：/<br>无法查询，将返回：/</p>
                     */
                    std::string m_operatingPeriod;
                    bool m_operatingPeriodHasBeenSet;

                    /**
                     * <p>核准日期。</p>
                     */
                    std::string m_approvalDate;
                    bool m_approvalDateHasBeenSet;

                    /**
                     * <p>所在省份。</p>
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * <p>所在省份的行政区划代码。</p>
                     */
                    std::string m_provinceCode;
                    bool m_provinceCodeHasBeenSet;

                    /**
                     * <p>所在城市。</p>
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * <p>所在城市的行政区划代码。</p>
                     */
                    std::string m_cityCode;
                    bool m_cityCodeHasBeenSet;

                    /**
                     * <p>所在区县。</p>
                     */
                    std::string m_district;
                    bool m_districtHasBeenSet;

                    /**
                     * <p>所在区县的行政区划代码。</p>
                     */
                    std::string m_districtCode;
                    bool m_districtCodeHasBeenSet;

                    /**
                     * <p>注册资本币种。</p>
                     */
                    std::string m_capitalCurrency;
                    bool m_capitalCurrencyHasBeenSet;

                    /**
                     * <p>组织机构代码。</p>
                     */
                    std::string m_organizationCode;
                    bool m_organizationCodeHasBeenSet;

                    /**
                     * <p>企业英文名称。</p>
                     */
                    std::string m_englishName;
                    bool m_englishNameHasBeenSet;

                    /**
                     * <p>企业曾用名列表。</p>
                     */
                    std::vector<std::string> m_formerNames;
                    bool m_formerNamesHasBeenSet;

                    /**
                     * <p>原注册号。</p>
                     */
                    std::string m_originalRegNum;
                    bool m_originalRegNumHasBeenSet;

                    /**
                     * <p>实收资本。</p>
                     */
                    std::string m_paidInCapital;
                    bool m_paidInCapitalHasBeenSet;

                    /**
                     * <p>吊销日期。</p>
                     */
                    std::string m_revokeDate;
                    bool m_revokeDateHasBeenSet;

                    /**
                     * <p>吊销原因。</p>
                     */
                    std::string m_revokeReason;
                    bool m_revokeReasonHasBeenSet;

                    /**
                     * <p>注销日期。</p>
                     */
                    std::string m_cancellationDate;
                    bool m_cancellationDateHasBeenSet;

                    /**
                     * <p>注销原因。</p>
                     */
                    std::string m_cancellationReason;
                    bool m_cancellationReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_QUERYENTERPRISEBASICINFORESPONSE_H_
