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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYBIZLICENSERESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYBIZLICENSERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/BizLicenseVerifyResult.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * VerifyBizLicense返回参数结构体
                */
                class VerifyBizLicenseResponse : public AbstractModel
                {
                public:
                    VerifyBizLicenseResponse();
                    ~VerifyBizLicenseResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取状态码
                     * @return ErrorCode 状态码
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取统一社会信用代码
                     * @return CreditCode 统一社会信用代码
                     */
                    std::string GetCreditCode() const;

                    /**
                     * 判断参数 CreditCode 是否已赋值
                     * @return CreditCode 是否已赋值
                     */
                    bool CreditCodeHasBeenSet() const;

                    /**
                     * 获取组织机构代码
                     * @return OrgCode 组织机构代码
                     */
                    std::string GetOrgCode() const;

                    /**
                     * 判断参数 OrgCode 是否已赋值
                     * @return OrgCode 是否已赋值
                     */
                    bool OrgCodeHasBeenSet() const;

                    /**
                     * 获取经营期限自（YYYY-MM-DD）
                     * @return OpenFrom 经营期限自（YYYY-MM-DD）
                     */
                    std::string GetOpenFrom() const;

                    /**
                     * 判断参数 OpenFrom 是否已赋值
                     * @return OpenFrom 是否已赋值
                     */
                    bool OpenFromHasBeenSet() const;

                    /**
                     * 获取经营期限至（YYYY-MM-DD）
                     * @return OpenTo 经营期限至（YYYY-MM-DD）
                     */
                    std::string GetOpenTo() const;

                    /**
                     * 判断参数 OpenTo 是否已赋值
                     * @return OpenTo 是否已赋值
                     */
                    bool OpenToHasBeenSet() const;

                    /**
                     * 获取法人姓名
                     * @return FrName 法人姓名
                     */
                    std::string GetFrName() const;

                    /**
                     * 判断参数 FrName 是否已赋值
                     * @return FrName 是否已赋值
                     */
                    bool FrNameHasBeenSet() const;

                    /**
                     * 获取经营状态（在营、注销、吊销、其他）
                     * @return EnterpriseStatus 经营状态（在营、注销、吊销、其他）
                     */
                    std::string GetEnterpriseStatus() const;

                    /**
                     * 判断参数 EnterpriseStatus 是否已赋值
                     * @return EnterpriseStatus 是否已赋值
                     */
                    bool EnterpriseStatusHasBeenSet() const;

                    /**
                     * 获取经营（业务）范围及方式
                     * @return OperateScopeAndForm 经营（业务）范围及方式
                     */
                    std::string GetOperateScopeAndForm() const;

                    /**
                     * 判断参数 OperateScopeAndForm 是否已赋值
                     * @return OperateScopeAndForm 是否已赋值
                     */
                    bool OperateScopeAndFormHasBeenSet() const;

                    /**
                     * 获取注册资金（单位:万元）
                     * @return RegCap 注册资金（单位:万元）
                     */
                    std::string GetRegCap() const;

                    /**
                     * 判断参数 RegCap 是否已赋值
                     * @return RegCap 是否已赋值
                     */
                    bool RegCapHasBeenSet() const;

                    /**
                     * 获取注册币种
                     * @return RegCapCur 注册币种
                     */
                    std::string GetRegCapCur() const;

                    /**
                     * 判断参数 RegCapCur 是否已赋值
                     * @return RegCapCur 是否已赋值
                     */
                    bool RegCapCurHasBeenSet() const;

                    /**
                     * 获取登记机关
                     * @return RegOrg 登记机关
                     */
                    std::string GetRegOrg() const;

                    /**
                     * 判断参数 RegOrg 是否已赋值
                     * @return RegOrg 是否已赋值
                     */
                    bool RegOrgHasBeenSet() const;

                    /**
                     * 获取开业日期（YYYY-MM-DD）
                     * @return EsDate 开业日期（YYYY-MM-DD）
                     */
                    std::string GetEsDate() const;

                    /**
                     * 判断参数 EsDate 是否已赋值
                     * @return EsDate 是否已赋值
                     */
                    bool EsDateHasBeenSet() const;

                    /**
                     * 获取企业（机构）类型
                     * @return EnterpriseType 企业（机构）类型
                     */
                    std::string GetEnterpriseType() const;

                    /**
                     * 判断参数 EnterpriseType 是否已赋值
                     * @return EnterpriseType 是否已赋值
                     */
                    bool EnterpriseTypeHasBeenSet() const;

                    /**
                     * 获取注销日期
                     * @return CancelDate 注销日期
                     */
                    std::string GetCancelDate() const;

                    /**
                     * 判断参数 CancelDate 是否已赋值
                     * @return CancelDate 是否已赋值
                     */
                    bool CancelDateHasBeenSet() const;

                    /**
                     * 获取吊销日期
                     * @return RevokeDate 吊销日期
                     */
                    std::string GetRevokeDate() const;

                    /**
                     * 判断参数 RevokeDate 是否已赋值
                     * @return RevokeDate 是否已赋值
                     */
                    bool RevokeDateHasBeenSet() const;

                    /**
                     * 获取许可经营项目
                     * @return AbuItem 许可经营项目
                     */
                    std::string GetAbuItem() const;

                    /**
                     * 判断参数 AbuItem 是否已赋值
                     * @return AbuItem 是否已赋值
                     */
                    bool AbuItemHasBeenSet() const;

                    /**
                     * 获取一般经营项目
                     * @return CbuItem 一般经营项目
                     */
                    std::string GetCbuItem() const;

                    /**
                     * 判断参数 CbuItem 是否已赋值
                     * @return CbuItem 是否已赋值
                     */
                    bool CbuItemHasBeenSet() const;

                    /**
                     * 获取核准时间
                     * @return ApprDate 核准时间
                     */
                    std::string GetApprDate() const;

                    /**
                     * 判断参数 ApprDate 是否已赋值
                     * @return ApprDate 是否已赋值
                     */
                    bool ApprDateHasBeenSet() const;

                    /**
                     * 获取省
                     * @return Province 省
                     */
                    std::string GetProvince() const;

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取地级市
                     * @return City 地级市
                     */
                    std::string GetCity() const;

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取区\县
                     * @return County 区\县
                     */
                    std::string GetCounty() const;

                    /**
                     * 判断参数 County 是否已赋值
                     * @return County 是否已赋值
                     */
                    bool CountyHasBeenSet() const;

                    /**
                     * 获取住所所在行政区划代码
                     * @return AreaCode 住所所在行政区划代码
                     */
                    std::string GetAreaCode() const;

                    /**
                     * 判断参数 AreaCode 是否已赋值
                     * @return AreaCode 是否已赋值
                     */
                    bool AreaCodeHasBeenSet() const;

                    /**
                     * 获取行业门类代码
                     * @return IndustryPhyCode 行业门类代码
                     */
                    std::string GetIndustryPhyCode() const;

                    /**
                     * 判断参数 IndustryPhyCode 是否已赋值
                     * @return IndustryPhyCode 是否已赋值
                     */
                    bool IndustryPhyCodeHasBeenSet() const;

                    /**
                     * 获取行业门类名称
                     * @return IndustryPhyName 行业门类名称
                     */
                    std::string GetIndustryPhyName() const;

                    /**
                     * 判断参数 IndustryPhyName 是否已赋值
                     * @return IndustryPhyName 是否已赋值
                     */
                    bool IndustryPhyNameHasBeenSet() const;

                    /**
                     * 获取国民经济行业代码
                     * @return IndustryCode 国民经济行业代码
                     */
                    std::string GetIndustryCode() const;

                    /**
                     * 判断参数 IndustryCode 是否已赋值
                     * @return IndustryCode 是否已赋值
                     */
                    bool IndustryCodeHasBeenSet() const;

                    /**
                     * 获取国民经济行业名称
                     * @return IndustryName 国民经济行业名称
                     */
                    std::string GetIndustryName() const;

                    /**
                     * 判断参数 IndustryName 是否已赋值
                     * @return IndustryName 是否已赋值
                     */
                    bool IndustryNameHasBeenSet() const;

                    /**
                     * 获取经营（业务）范围
                     * @return OperateScope 经营（业务）范围
                     */
                    std::string GetOperateScope() const;

                    /**
                     * 判断参数 OperateScope 是否已赋值
                     * @return OperateScope 是否已赋值
                     */
                    bool OperateScopeHasBeenSet() const;

                    /**
                     * 获取要核验的工商注册号
                     * @return VerifyRegNo 要核验的工商注册号
                     */
                    std::string GetVerifyRegNo() const;

                    /**
                     * 判断参数 VerifyRegNo 是否已赋值
                     * @return VerifyRegNo 是否已赋值
                     */
                    bool VerifyRegNoHasBeenSet() const;

                    /**
                     * 获取工商注册号
                     * @return RegNo 工商注册号
                     */
                    std::string GetRegNo() const;

                    /**
                     * 判断参数 RegNo 是否已赋值
                     * @return RegNo 是否已赋值
                     */
                    bool RegNoHasBeenSet() const;

                    /**
                     * 获取要核验的企业名称
                     * @return VerifyEnterpriseName 要核验的企业名称
                     */
                    std::string GetVerifyEnterpriseName() const;

                    /**
                     * 判断参数 VerifyEnterpriseName 是否已赋值
                     * @return VerifyEnterpriseName 是否已赋值
                     */
                    bool VerifyEnterpriseNameHasBeenSet() const;

                    /**
                     * 获取企业名称
                     * @return EnterpriseName 企业名称
                     */
                    std::string GetEnterpriseName() const;

                    /**
                     * 判断参数 EnterpriseName 是否已赋值
                     * @return EnterpriseName 是否已赋值
                     */
                    bool EnterpriseNameHasBeenSet() const;

                    /**
                     * 获取要核验的注册地址
                     * @return VerifyAddress 要核验的注册地址
                     */
                    std::string GetVerifyAddress() const;

                    /**
                     * 判断参数 VerifyAddress 是否已赋值
                     * @return VerifyAddress 是否已赋值
                     */
                    bool VerifyAddressHasBeenSet() const;

                    /**
                     * 获取注册地址
                     * @return Address 注册地址
                     */
                    std::string GetAddress() const;

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取验证结果
                     * @return RegNumResult 验证结果
                     */
                    BizLicenseVerifyResult GetRegNumResult() const;

                    /**
                     * 判断参数 RegNumResult 是否已赋值
                     * @return RegNumResult 是否已赋值
                     */
                    bool RegNumResultHasBeenSet() const;

                private:

                    /**
                     * 状态码
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 统一社会信用代码
                     */
                    std::string m_creditCode;
                    bool m_creditCodeHasBeenSet;

                    /**
                     * 组织机构代码
                     */
                    std::string m_orgCode;
                    bool m_orgCodeHasBeenSet;

                    /**
                     * 经营期限自（YYYY-MM-DD）
                     */
                    std::string m_openFrom;
                    bool m_openFromHasBeenSet;

                    /**
                     * 经营期限至（YYYY-MM-DD）
                     */
                    std::string m_openTo;
                    bool m_openToHasBeenSet;

                    /**
                     * 法人姓名
                     */
                    std::string m_frName;
                    bool m_frNameHasBeenSet;

                    /**
                     * 经营状态（在营、注销、吊销、其他）
                     */
                    std::string m_enterpriseStatus;
                    bool m_enterpriseStatusHasBeenSet;

                    /**
                     * 经营（业务）范围及方式
                     */
                    std::string m_operateScopeAndForm;
                    bool m_operateScopeAndFormHasBeenSet;

                    /**
                     * 注册资金（单位:万元）
                     */
                    std::string m_regCap;
                    bool m_regCapHasBeenSet;

                    /**
                     * 注册币种
                     */
                    std::string m_regCapCur;
                    bool m_regCapCurHasBeenSet;

                    /**
                     * 登记机关
                     */
                    std::string m_regOrg;
                    bool m_regOrgHasBeenSet;

                    /**
                     * 开业日期（YYYY-MM-DD）
                     */
                    std::string m_esDate;
                    bool m_esDateHasBeenSet;

                    /**
                     * 企业（机构）类型
                     */
                    std::string m_enterpriseType;
                    bool m_enterpriseTypeHasBeenSet;

                    /**
                     * 注销日期
                     */
                    std::string m_cancelDate;
                    bool m_cancelDateHasBeenSet;

                    /**
                     * 吊销日期
                     */
                    std::string m_revokeDate;
                    bool m_revokeDateHasBeenSet;

                    /**
                     * 许可经营项目
                     */
                    std::string m_abuItem;
                    bool m_abuItemHasBeenSet;

                    /**
                     * 一般经营项目
                     */
                    std::string m_cbuItem;
                    bool m_cbuItemHasBeenSet;

                    /**
                     * 核准时间
                     */
                    std::string m_apprDate;
                    bool m_apprDateHasBeenSet;

                    /**
                     * 省
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 地级市
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 区\县
                     */
                    std::string m_county;
                    bool m_countyHasBeenSet;

                    /**
                     * 住所所在行政区划代码
                     */
                    std::string m_areaCode;
                    bool m_areaCodeHasBeenSet;

                    /**
                     * 行业门类代码
                     */
                    std::string m_industryPhyCode;
                    bool m_industryPhyCodeHasBeenSet;

                    /**
                     * 行业门类名称
                     */
                    std::string m_industryPhyName;
                    bool m_industryPhyNameHasBeenSet;

                    /**
                     * 国民经济行业代码
                     */
                    std::string m_industryCode;
                    bool m_industryCodeHasBeenSet;

                    /**
                     * 国民经济行业名称
                     */
                    std::string m_industryName;
                    bool m_industryNameHasBeenSet;

                    /**
                     * 经营（业务）范围
                     */
                    std::string m_operateScope;
                    bool m_operateScopeHasBeenSet;

                    /**
                     * 要核验的工商注册号
                     */
                    std::string m_verifyRegNo;
                    bool m_verifyRegNoHasBeenSet;

                    /**
                     * 工商注册号
                     */
                    std::string m_regNo;
                    bool m_regNoHasBeenSet;

                    /**
                     * 要核验的企业名称
                     */
                    std::string m_verifyEnterpriseName;
                    bool m_verifyEnterpriseNameHasBeenSet;

                    /**
                     * 企业名称
                     */
                    std::string m_enterpriseName;
                    bool m_enterpriseNameHasBeenSet;

                    /**
                     * 要核验的注册地址
                     */
                    std::string m_verifyAddress;
                    bool m_verifyAddressHasBeenSet;

                    /**
                     * 注册地址
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 验证结果
                     */
                    BizLicenseVerifyResult m_regNumResult;
                    bool m_regNumResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYBIZLICENSERESPONSE_H_
