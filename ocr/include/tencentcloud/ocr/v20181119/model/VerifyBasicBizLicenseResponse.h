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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYBASICBIZLICENSERESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYBASICBIZLICENSERESPONSE_H_

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
                * VerifyBasicBizLicense返回参数结构体
                */
                class VerifyBasicBizLicenseResponse : public AbstractModel
                {
                public:
                    VerifyBasicBizLicenseResponse();
                    ~VerifyBasicBizLicenseResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取状态码，成功时返回0
                     * @return ErrorCode 状态码，成功时返回0
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
                     * 获取经营期限自（YYYY-MM-DD）
                     * @return Opfrom 经营期限自（YYYY-MM-DD）
                     */
                    std::string GetOpfrom() const;

                    /**
                     * 判断参数 Opfrom 是否已赋值
                     * @return Opfrom 是否已赋值
                     */
                    bool OpfromHasBeenSet() const;

                    /**
                     * 获取经营期限至（YYYY-MM-DD）
                     * @return Opto 经营期限至（YYYY-MM-DD）
                     */
                    std::string GetOpto() const;

                    /**
                     * 判断参数 Opto 是否已赋值
                     * @return Opto 是否已赋值
                     */
                    bool OptoHasBeenSet() const;

                    /**
                     * 获取法人姓名
                     * @return Frname 法人姓名
                     */
                    std::string GetFrname() const;

                    /**
                     * 判断参数 Frname 是否已赋值
                     * @return Frname 是否已赋值
                     */
                    bool FrnameHasBeenSet() const;

                    /**
                     * 获取经营状态，包括：成立、筹建、存续、在营、开业、在册、正常经营、开业登记中、登记成立、撤销、撤销登记、非正常户、告解、个体暂时吊销、个体转企业、吊销（未注销）、拟注销、已注销、（待）迁入、（待）迁出、停业、歇业、清算等。
                     * @return Entstatus 经营状态，包括：成立、筹建、存续、在营、开业、在册、正常经营、开业登记中、登记成立、撤销、撤销登记、非正常户、告解、个体暂时吊销、个体转企业、吊销（未注销）、拟注销、已注销、（待）迁入、（待）迁出、停业、歇业、清算等。
                     */
                    std::string GetEntstatus() const;

                    /**
                     * 判断参数 Entstatus 是否已赋值
                     * @return Entstatus 是否已赋值
                     */
                    bool EntstatusHasBeenSet() const;

                    /**
                     * 获取经营业务范围
                     * @return Zsopscope 经营业务范围
                     */
                    std::string GetZsopscope() const;

                    /**
                     * 判断参数 Zsopscope 是否已赋值
                     * @return Zsopscope 是否已赋值
                     */
                    bool ZsopscopeHasBeenSet() const;

                    /**
                     * 获取查询的状态信息
                     * @return Reason 查询的状态信息
                     */
                    std::string GetReason() const;

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取原注册号
                     * @return Oriregno 原注册号
                     */
                    std::string GetOriregno() const;

                    /**
                     * 判断参数 Oriregno 是否已赋值
                     * @return Oriregno 是否已赋值
                     */
                    bool OriregnoHasBeenSet() const;

                    /**
                     * 获取要核验的工商注册号
                     * @return VerifyRegno 要核验的工商注册号
                     */
                    std::string GetVerifyRegno() const;

                    /**
                     * 判断参数 VerifyRegno 是否已赋值
                     * @return VerifyRegno 是否已赋值
                     */
                    bool VerifyRegnoHasBeenSet() const;

                    /**
                     * 获取工商注册号
                     * @return Regno 工商注册号
                     */
                    std::string GetRegno() const;

                    /**
                     * 判断参数 Regno 是否已赋值
                     * @return Regno 是否已赋值
                     */
                    bool RegnoHasBeenSet() const;

                    /**
                     * 获取要核验的企业名称
                     * @return VerifyEntname 要核验的企业名称
                     */
                    std::string GetVerifyEntname() const;

                    /**
                     * 判断参数 VerifyEntname 是否已赋值
                     * @return VerifyEntname 是否已赋值
                     */
                    bool VerifyEntnameHasBeenSet() const;

                    /**
                     * 获取企业名称
                     * @return Entname 企业名称
                     */
                    std::string GetEntname() const;

                    /**
                     * 判断参数 Entname 是否已赋值
                     * @return Entname 是否已赋值
                     */
                    bool EntnameHasBeenSet() const;

                    /**
                     * 获取要核验的住址
                     * @return VerifyDom 要核验的住址
                     */
                    std::string GetVerifyDom() const;

                    /**
                     * 判断参数 VerifyDom 是否已赋值
                     * @return VerifyDom 是否已赋值
                     */
                    bool VerifyDomHasBeenSet() const;

                    /**
                     * 获取住址
                     * @return Dom 住址
                     */
                    std::string GetDom() const;

                    /**
                     * 判断参数 Dom 是否已赋值
                     * @return Dom 是否已赋值
                     */
                    bool DomHasBeenSet() const;

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

                    /**
                     * 获取注册资本（单位：万元）,只有输入参数regCapital为1的时候才输出
                     * @return RegCapital 注册资本（单位：万元）,只有输入参数regCapital为1的时候才输出
                     */
                    std::string GetRegCapital() const;

                    /**
                     * 判断参数 RegCapital 是否已赋值
                     * @return RegCapital 是否已赋值
                     */
                    bool RegCapitalHasBeenSet() const;

                    /**
                     * 获取成立/注册日期，只有输入参数EstablishTime为true时展示，默认为空
                     * @return EstablishTime 成立/注册日期，只有输入参数EstablishTime为true时展示，默认为空
                     */
                    std::string GetEstablishTime() const;

                    /**
                     * 判断参数 EstablishTime 是否已赋值
                     * @return EstablishTime 是否已赋值
                     */
                    bool EstablishTimeHasBeenSet() const;

                private:

                    /**
                     * 状态码，成功时返回0
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 统一社会信用代码
                     */
                    std::string m_creditCode;
                    bool m_creditCodeHasBeenSet;

                    /**
                     * 经营期限自（YYYY-MM-DD）
                     */
                    std::string m_opfrom;
                    bool m_opfromHasBeenSet;

                    /**
                     * 经营期限至（YYYY-MM-DD）
                     */
                    std::string m_opto;
                    bool m_optoHasBeenSet;

                    /**
                     * 法人姓名
                     */
                    std::string m_frname;
                    bool m_frnameHasBeenSet;

                    /**
                     * 经营状态，包括：成立、筹建、存续、在营、开业、在册、正常经营、开业登记中、登记成立、撤销、撤销登记、非正常户、告解、个体暂时吊销、个体转企业、吊销（未注销）、拟注销、已注销、（待）迁入、（待）迁出、停业、歇业、清算等。
                     */
                    std::string m_entstatus;
                    bool m_entstatusHasBeenSet;

                    /**
                     * 经营业务范围
                     */
                    std::string m_zsopscope;
                    bool m_zsopscopeHasBeenSet;

                    /**
                     * 查询的状态信息
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 原注册号
                     */
                    std::string m_oriregno;
                    bool m_oriregnoHasBeenSet;

                    /**
                     * 要核验的工商注册号
                     */
                    std::string m_verifyRegno;
                    bool m_verifyRegnoHasBeenSet;

                    /**
                     * 工商注册号
                     */
                    std::string m_regno;
                    bool m_regnoHasBeenSet;

                    /**
                     * 要核验的企业名称
                     */
                    std::string m_verifyEntname;
                    bool m_verifyEntnameHasBeenSet;

                    /**
                     * 企业名称
                     */
                    std::string m_entname;
                    bool m_entnameHasBeenSet;

                    /**
                     * 要核验的住址
                     */
                    std::string m_verifyDom;
                    bool m_verifyDomHasBeenSet;

                    /**
                     * 住址
                     */
                    std::string m_dom;
                    bool m_domHasBeenSet;

                    /**
                     * 验证结果
                     */
                    BizLicenseVerifyResult m_regNumResult;
                    bool m_regNumResultHasBeenSet;

                    /**
                     * 注册资本（单位：万元）,只有输入参数regCapital为1的时候才输出
                     */
                    std::string m_regCapital;
                    bool m_regCapitalHasBeenSet;

                    /**
                     * 成立/注册日期，只有输入参数EstablishTime为true时展示，默认为空
                     */
                    std::string m_establishTime;
                    bool m_establishTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYBASICBIZLICENSERESPONSE_H_
