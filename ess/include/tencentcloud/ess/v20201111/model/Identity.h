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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_IDENTITY_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_IDENTITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 主体信息
                */
                class Identity : public AbstractModel
                {
                public:
                    Identity();
                    ~Identity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取统一社会信用代码
                     * @return CreditCode 统一社会信用代码
                     * 
                     */
                    std::string GetCreditCode() const;

                    /**
                     * 设置统一社会信用代码
                     * @param _creditCode 统一社会信用代码
                     * 
                     */
                    void SetCreditCode(const std::string& _creditCode);

                    /**
                     * 判断参数 CreditCode 是否已赋值
                     * @return CreditCode 是否已赋值
                     * 
                     */
                    bool CreditCodeHasBeenSet() const;

                    /**
                     * 获取组织机构代码
                     * @return OrgCode 组织机构代码
                     * 
                     */
                    std::string GetOrgCode() const;

                    /**
                     * 设置组织机构代码
                     * @param _orgCode 组织机构代码
                     * 
                     */
                    void SetOrgCode(const std::string& _orgCode);

                    /**
                     * 判断参数 OrgCode 是否已赋值
                     * @return OrgCode 是否已赋值
                     * 
                     */
                    bool OrgCodeHasBeenSet() const;

                    /**
                     * 获取营业执照注册编号
                     * @return RegNo 营业执照注册编号
                     * 
                     */
                    std::string GetRegNo() const;

                    /**
                     * 设置营业执照注册编号
                     * @param _regNo 营业执照注册编号
                     * 
                     */
                    void SetRegNo(const std::string& _regNo);

                    /**
                     * 判断参数 RegNo 是否已赋值
                     * @return RegNo 是否已赋值
                     * 
                     */
                    bool RegNoHasBeenSet() const;

                    /**
                     * 获取企业名称
                     * @return EntName 企业名称
                     * 
                     */
                    std::string GetEntName() const;

                    /**
                     * 设置企业名称
                     * @param _entName 企业名称
                     * 
                     */
                    void SetEntName(const std::string& _entName);

                    /**
                     * 判断参数 EntName 是否已赋值
                     * @return EntName 是否已赋值
                     * 
                     */
                    bool EntNameHasBeenSet() const;

                    /**
                     * 获取修改人法人代表姓名
                     * @return LegalRepName 修改人法人代表姓名
                     * 
                     */
                    std::string GetLegalRepName() const;

                    /**
                     * 设置修改人法人代表姓名
                     * @param _legalRepName 修改人法人代表姓名
                     * 
                     */
                    void SetLegalRepName(const std::string& _legalRepName);

                    /**
                     * 判断参数 LegalRepName 是否已赋值
                     * @return LegalRepName 是否已赋值
                     * 
                     */
                    bool LegalRepNameHasBeenSet() const;

                    /**
                     * 获取渠道经营状态
                     * @return OpState 渠道经营状态
                     * 
                     */
                    std::string GetOpState() const;

                    /**
                     * 设置渠道经营状态
                     * @param _opState 渠道经营状态
                     * 
                     */
                    void SetOpState(const std::string& _opState);

                    /**
                     * 判断参数 OpState 是否已赋值
                     * @return OpState 是否已赋值
                     * 
                     */
                    bool OpStateHasBeenSet() const;

                    /**
                     * 获取经营期限自(格式YYYY-MM-DD)
                     * @return OpFromDate 经营期限自(格式YYYY-MM-DD)
                     * 
                     */
                    std::string GetOpFromDate() const;

                    /**
                     * 设置经营期限自(格式YYYY-MM-DD)
                     * @param _opFromDate 经营期限自(格式YYYY-MM-DD)
                     * 
                     */
                    void SetOpFromDate(const std::string& _opFromDate);

                    /**
                     * 判断参数 OpFromDate 是否已赋值
                     * @return OpFromDate 是否已赋值
                     * 
                     */
                    bool OpFromDateHasBeenSet() const;

                    /**
                     * 获取经营期限至
                     * @return OpToDate 经营期限至
                     * 
                     */
                    std::string GetOpToDate() const;

                    /**
                     * 设置经营期限至
                     * @param _opToDate 经营期限至
                     * 
                     */
                    void SetOpToDate(const std::string& _opToDate);

                    /**
                     * 判断参数 OpToDate 是否已赋值
                     * @return OpToDate 是否已赋值
                     * 
                     */
                    bool OpToDateHasBeenSet() const;

                    /**
                     * 获取成立日期(格式YYYY-MM-DD)
                     * @return EstabDate 成立日期(格式YYYY-MM-DD)
                     * 
                     */
                    std::string GetEstabDate() const;

                    /**
                     * 设置成立日期(格式YYYY-MM-DD)
                     * @param _estabDate 成立日期(格式YYYY-MM-DD)
                     * 
                     */
                    void SetEstabDate(const std::string& _estabDate);

                    /**
                     * 判断参数 EstabDate 是否已赋值
                     * @return EstabDate 是否已赋值
                     * 
                     */
                    bool EstabDateHasBeenSet() const;

                    /**
                     * 获取核准日期(格式YYYY-MM-DD)
                     * @return ApprDate 核准日期(格式YYYY-MM-DD)
                     * 
                     */
                    std::string GetApprDate() const;

                    /**
                     * 设置核准日期(格式YYYY-MM-DD)
                     * @param _apprDate 核准日期(格式YYYY-MM-DD)
                     * 
                     */
                    void SetApprDate(const std::string& _apprDate);

                    /**
                     * 判断参数 ApprDate 是否已赋值
                     * @return ApprDate 是否已赋值
                     * 
                     */
                    bool ApprDateHasBeenSet() const;

                    /**
                     * 获取吊销日期(格式YYYY-MM-DD)
                     * @return RevoDate 吊销日期(格式YYYY-MM-DD)
                     * 
                     */
                    std::string GetRevoDate() const;

                    /**
                     * 设置吊销日期(格式YYYY-MM-DD)
                     * @param _revoDate 吊销日期(格式YYYY-MM-DD)
                     * 
                     */
                    void SetRevoDate(const std::string& _revoDate);

                    /**
                     * 判断参数 RevoDate 是否已赋值
                     * @return RevoDate 是否已赋值
                     * 
                     */
                    bool RevoDateHasBeenSet() const;

                    /**
                     * 获取注销日期(格式YYYY-MM-DD)
                     * @return CancelDate 注销日期(格式YYYY-MM-DD)
                     * 
                     */
                    std::string GetCancelDate() const;

                    /**
                     * 设置注销日期(格式YYYY-MM-DD)
                     * @param _cancelDate 注销日期(格式YYYY-MM-DD)
                     * 
                     */
                    void SetCancelDate(const std::string& _cancelDate);

                    /**
                     * 判断参数 CancelDate 是否已赋值
                     * @return CancelDate 是否已赋值
                     * 
                     */
                    bool CancelDateHasBeenSet() const;

                    /**
                     * 获取登记机关
                     * @return RegOrg 登记机关
                     * 
                     */
                    std::string GetRegOrg() const;

                    /**
                     * 设置登记机关
                     * @param _regOrg 登记机关
                     * 
                     */
                    void SetRegOrg(const std::string& _regOrg);

                    /**
                     * 判断参数 RegOrg 是否已赋值
                     * @return RegOrg 是否已赋值
                     * 
                     */
                    bool RegOrgHasBeenSet() const;

                    /**
                     * 获取企业类型编码
                     * @return EntTypeCode 企业类型编码
                     * 
                     */
                    std::string GetEntTypeCode() const;

                    /**
                     * 设置企业类型编码
                     * @param _entTypeCode 企业类型编码
                     * 
                     */
                    void SetEntTypeCode(const std::string& _entTypeCode);

                    /**
                     * 判断参数 EntTypeCode 是否已赋值
                     * @return EntTypeCode 是否已赋值
                     * 
                     */
                    bool EntTypeCodeHasBeenSet() const;

                    /**
                     * 获取企业类型
                     * @return EntType 企业类型
                     * 
                     */
                    std::string GetEntType() const;

                    /**
                     * 设置企业类型
                     * @param _entType 企业类型
                     * 
                     */
                    void SetEntType(const std::string& _entType);

                    /**
                     * 判断参数 EntType 是否已赋值
                     * @return EntType 是否已赋值
                     * 
                     */
                    bool EntTypeHasBeenSet() const;

                    /**
                     * 获取经营业务范围
                     * @return BizScope 经营业务范围
                     * 
                     */
                    std::string GetBizScope() const;

                    /**
                     * 设置经营业务范围
                     * @param _bizScope 经营业务范围
                     * 
                     */
                    void SetBizScope(const std::string& _bizScope);

                    /**
                     * 判断参数 BizScope 是否已赋值
                     * @return BizScope 是否已赋值
                     * 
                     */
                    bool BizScopeHasBeenSet() const;

                    /**
                     * 获取许可经营项目
                     * @return LicenseBizItem 许可经营项目
                     * 
                     */
                    std::string GetLicenseBizItem() const;

                    /**
                     * 设置许可经营项目
                     * @param _licenseBizItem 许可经营项目
                     * 
                     */
                    void SetLicenseBizItem(const std::string& _licenseBizItem);

                    /**
                     * 判断参数 LicenseBizItem 是否已赋值
                     * @return LicenseBizItem 是否已赋值
                     * 
                     */
                    bool LicenseBizItemHasBeenSet() const;

                    /**
                     * 获取注册地址行政编号
                     * @return RegAreaCode 注册地址行政编号
                     * 
                     */
                    std::string GetRegAreaCode() const;

                    /**
                     * 设置注册地址行政编号
                     * @param _regAreaCode 注册地址行政编号
                     * 
                     */
                    void SetRegAreaCode(const std::string& _regAreaCode);

                    /**
                     * 判断参数 RegAreaCode 是否已赋值
                     * @return RegAreaCode 是否已赋值
                     * 
                     */
                    bool RegAreaCodeHasBeenSet() const;

                    /**
                     * 获取注册地址
                     * @return RegAddress 注册地址
                     * 
                     */
                    std::string GetRegAddress() const;

                    /**
                     * 设置注册地址
                     * @param _regAddress 注册地址
                     * 
                     */
                    void SetRegAddress(const std::string& _regAddress);

                    /**
                     * 判断参数 RegAddress 是否已赋值
                     * @return RegAddress 是否已赋值
                     * 
                     */
                    bool RegAddressHasBeenSet() const;

                    /**
                     * 获取注册资本币种
                     * @return RegCapitalCurtype 注册资本币种
                     * 
                     */
                    std::string GetRegCapitalCurtype() const;

                    /**
                     * 设置注册资本币种
                     * @param _regCapitalCurtype 注册资本币种
                     * 
                     */
                    void SetRegCapitalCurtype(const std::string& _regCapitalCurtype);

                    /**
                     * 判断参数 RegCapitalCurtype 是否已赋值
                     * @return RegCapitalCurtype 是否已赋值
                     * 
                     */
                    bool RegCapitalCurtypeHasBeenSet() const;

                    /**
                     * 获取注册资本（万元）
                     * @return RegCapital 注册资本（万元）
                     * 
                     */
                    std::string GetRegCapital() const;

                    /**
                     * 设置注册资本（万元）
                     * @param _regCapital 注册资本（万元）
                     * 
                     */
                    void SetRegCapital(const std::string& _regCapital);

                    /**
                     * 判断参数 RegCapital 是否已赋值
                     * @return RegCapital 是否已赋值
                     * 
                     */
                    bool RegCapitalHasBeenSet() const;

                    /**
                     * 获取实收资本（万元）
                     * @return PaidCapital 实收资本（万元）
                     * 
                     */
                    std::string GetPaidCapital() const;

                    /**
                     * 设置实收资本（万元）
                     * @param _paidCapital 实收资本（万元）
                     * 
                     */
                    void SetPaidCapital(const std::string& _paidCapital);

                    /**
                     * 判断参数 PaidCapital 是否已赋值
                     * @return PaidCapital 是否已赋值
                     * 
                     */
                    bool PaidCapitalHasBeenSet() const;

                    /**
                     * 获取原注册号
                     * @return OriRegNo 原注册号
                     * 
                     */
                    std::string GetOriRegNo() const;

                    /**
                     * 设置原注册号
                     * @param _oriRegNo 原注册号
                     * 
                     */
                    void SetOriRegNo(const std::string& _oriRegNo);

                    /**
                     * 判断参数 OriRegNo 是否已赋值
                     * @return OriRegNo 是否已赋值
                     * 
                     */
                    bool OriRegNoHasBeenSet() const;

                    /**
                     * 获取企业英文名称
                     * @return EntNameEng 企业英文名称
                     * 
                     */
                    std::string GetEntNameEng() const;

                    /**
                     * 设置企业英文名称
                     * @param _entNameEng 企业英文名称
                     * 
                     */
                    void SetEntNameEng(const std::string& _entNameEng);

                    /**
                     * 判断参数 EntNameEng 是否已赋值
                     * @return EntNameEng 是否已赋值
                     * 
                     */
                    bool EntNameEngHasBeenSet() const;

                    /**
                     * 获取曾用名
                     * @return OriEntName 曾用名
                     * 
                     */
                    std::string GetOriEntName() const;

                    /**
                     * 设置曾用名
                     * @param _oriEntName 曾用名
                     * 
                     */
                    void SetOriEntName(const std::string& _oriEntName);

                    /**
                     * 判断参数 OriEntName 是否已赋值
                     * @return OriEntName 是否已赋值
                     * 
                     */
                    bool OriEntNameHasBeenSet() const;

                    /**
                     * 获取企业经营状态枚举。常见值如下：
未定义的状态 = 0
正常  = 1
注销 = 2
吊销 = 3
吊销后注销 = 4
撤销 = 5
其他 = 99
                     * @return OpStateCode 企业经营状态枚举。常见值如下：
未定义的状态 = 0
正常  = 1
注销 = 2
吊销 = 3
吊销后注销 = 4
撤销 = 5
其他 = 99
                     * 
                     */
                    int64_t GetOpStateCode() const;

                    /**
                     * 设置企业经营状态枚举。常见值如下：
未定义的状态 = 0
正常  = 1
注销 = 2
吊销 = 3
吊销后注销 = 4
撤销 = 5
其他 = 99
                     * @param _opStateCode 企业经营状态枚举。常见值如下：
未定义的状态 = 0
正常  = 1
注销 = 2
吊销 = 3
吊销后注销 = 4
撤销 = 5
其他 = 99
                     * 
                     */
                    void SetOpStateCode(const int64_t& _opStateCode);

                    /**
                     * 判断参数 OpStateCode 是否已赋值
                     * @return OpStateCode 是否已赋值
                     * 
                     */
                    bool OpStateCodeHasBeenSet() const;

                    /**
                     * 获取查询日期(格式YYYY-MM-DD)
                     * @return SearchDate 查询日期(格式YYYY-MM-DD)
                     * 
                     */
                    std::string GetSearchDate() const;

                    /**
                     * 设置查询日期(格式YYYY-MM-DD)
                     * @param _searchDate 查询日期(格式YYYY-MM-DD)
                     * 
                     */
                    void SetSearchDate(const std::string& _searchDate);

                    /**
                     * 判断参数 SearchDate 是否已赋值
                     * @return SearchDate 是否已赋值
                     * 
                     */
                    bool SearchDateHasBeenSet() const;

                private:

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
                     * 营业执照注册编号
                     */
                    std::string m_regNo;
                    bool m_regNoHasBeenSet;

                    /**
                     * 企业名称
                     */
                    std::string m_entName;
                    bool m_entNameHasBeenSet;

                    /**
                     * 修改人法人代表姓名
                     */
                    std::string m_legalRepName;
                    bool m_legalRepNameHasBeenSet;

                    /**
                     * 渠道经营状态
                     */
                    std::string m_opState;
                    bool m_opStateHasBeenSet;

                    /**
                     * 经营期限自(格式YYYY-MM-DD)
                     */
                    std::string m_opFromDate;
                    bool m_opFromDateHasBeenSet;

                    /**
                     * 经营期限至
                     */
                    std::string m_opToDate;
                    bool m_opToDateHasBeenSet;

                    /**
                     * 成立日期(格式YYYY-MM-DD)
                     */
                    std::string m_estabDate;
                    bool m_estabDateHasBeenSet;

                    /**
                     * 核准日期(格式YYYY-MM-DD)
                     */
                    std::string m_apprDate;
                    bool m_apprDateHasBeenSet;

                    /**
                     * 吊销日期(格式YYYY-MM-DD)
                     */
                    std::string m_revoDate;
                    bool m_revoDateHasBeenSet;

                    /**
                     * 注销日期(格式YYYY-MM-DD)
                     */
                    std::string m_cancelDate;
                    bool m_cancelDateHasBeenSet;

                    /**
                     * 登记机关
                     */
                    std::string m_regOrg;
                    bool m_regOrgHasBeenSet;

                    /**
                     * 企业类型编码
                     */
                    std::string m_entTypeCode;
                    bool m_entTypeCodeHasBeenSet;

                    /**
                     * 企业类型
                     */
                    std::string m_entType;
                    bool m_entTypeHasBeenSet;

                    /**
                     * 经营业务范围
                     */
                    std::string m_bizScope;
                    bool m_bizScopeHasBeenSet;

                    /**
                     * 许可经营项目
                     */
                    std::string m_licenseBizItem;
                    bool m_licenseBizItemHasBeenSet;

                    /**
                     * 注册地址行政编号
                     */
                    std::string m_regAreaCode;
                    bool m_regAreaCodeHasBeenSet;

                    /**
                     * 注册地址
                     */
                    std::string m_regAddress;
                    bool m_regAddressHasBeenSet;

                    /**
                     * 注册资本币种
                     */
                    std::string m_regCapitalCurtype;
                    bool m_regCapitalCurtypeHasBeenSet;

                    /**
                     * 注册资本（万元）
                     */
                    std::string m_regCapital;
                    bool m_regCapitalHasBeenSet;

                    /**
                     * 实收资本（万元）
                     */
                    std::string m_paidCapital;
                    bool m_paidCapitalHasBeenSet;

                    /**
                     * 原注册号
                     */
                    std::string m_oriRegNo;
                    bool m_oriRegNoHasBeenSet;

                    /**
                     * 企业英文名称
                     */
                    std::string m_entNameEng;
                    bool m_entNameEngHasBeenSet;

                    /**
                     * 曾用名
                     */
                    std::string m_oriEntName;
                    bool m_oriEntNameHasBeenSet;

                    /**
                     * 企业经营状态枚举。常见值如下：
未定义的状态 = 0
正常  = 1
注销 = 2
吊销 = 3
吊销后注销 = 4
撤销 = 5
其他 = 99
                     */
                    int64_t m_opStateCode;
                    bool m_opStateCodeHasBeenSet;

                    /**
                     * 查询日期(格式YYYY-MM-DD)
                     */
                    std::string m_searchDate;
                    bool m_searchDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_IDENTITY_H_
