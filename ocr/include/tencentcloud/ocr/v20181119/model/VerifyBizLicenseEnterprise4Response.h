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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYBIZLICENSEENTERPRISE4RESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYBIZLICENSEENTERPRISE4RESPONSE_H_

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
                * VerifyBizLicenseEnterprise4返回参数结构体
                */
                class VerifyBizLicenseEnterprise4Response : public AbstractModel
                {
                public:
                    VerifyBizLicenseEnterprise4Response();
                    ~VerifyBizLicenseEnterprise4Response() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>请求状态</p><p>枚举值：</p><ul><li>0： 成功，计费</li><li>1： 系统异常，不计费</li></ul>
                     * @return StatusCode <p>请求状态</p><p>枚举值：</p><ul><li>0： 成功，计费</li><li>1： 系统异常，不计费</li></ul>
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
                     * 获取<p>验证结果<br>1：四要素完全匹配<br>0：四要素不完全匹配<br>仅StatusCode为0时返回</p>
                     * @return VerifyResult <p>验证结果<br>1：四要素完全匹配<br>0：四要素不完全匹配<br>仅StatusCode为0时返回</p>
                     * 
                     */
                    int64_t GetVerifyResult() const;

                    /**
                     * 判断参数 VerifyResult 是否已赋值
                     * @return VerifyResult 是否已赋值
                     * 
                     */
                    bool VerifyResultHasBeenSet() const;

                    /**
                     * 获取<p>统一社会信用代码是否一致<br>仅StatusCode为0时返回</p>
                     * @return IsCreditCodeConsistent <p>统一社会信用代码是否一致<br>仅StatusCode为0时返回</p>
                     * 
                     */
                    bool GetIsCreditCodeConsistent() const;

                    /**
                     * 判断参数 IsCreditCodeConsistent 是否已赋值
                     * @return IsCreditCodeConsistent 是否已赋值
                     * 
                     */
                    bool IsCreditCodeConsistentHasBeenSet() const;

                    /**
                     * 获取<p>企业名称是否一致<br>仅StatusCode为0时返回</p>
                     * @return IsEntNameConsistent <p>企业名称是否一致<br>仅StatusCode为0时返回</p>
                     * 
                     */
                    bool GetIsEntNameConsistent() const;

                    /**
                     * 判断参数 IsEntNameConsistent 是否已赋值
                     * @return IsEntNameConsistent 是否已赋值
                     * 
                     */
                    bool IsEntNameConsistentHasBeenSet() const;

                    /**
                     * 获取<p>法人代表是否一致<br>仅StatusCode为0时返回，企业名称与统一社会信用代码均未查得时，固定返回false</p>
                     * @return IsLrNameConsistent <p>法人代表是否一致<br>仅StatusCode为0时返回，企业名称与统一社会信用代码均未查得时，固定返回false</p>
                     * 
                     */
                    bool GetIsLrNameConsistent() const;

                    /**
                     * 判断参数 IsLrNameConsistent 是否已赋值
                     * @return IsLrNameConsistent 是否已赋值
                     * 
                     */
                    bool IsLrNameConsistentHasBeenSet() const;

                    /**
                     * 获取<p>注册登记证件号码是否一致<br>仅StatusCode为0时返回，企业名称与统一社会信用代码均未查得时，固定返回false</p>
                     * @return IsIdNumConsistent <p>注册登记证件号码是否一致<br>仅StatusCode为0时返回，企业名称与统一社会信用代码均未查得时，固定返回false</p>
                     * 
                     */
                    bool GetIsIdNumConsistent() const;

                    /**
                     * 判断参数 IsIdNumConsistent 是否已赋值
                     * @return IsIdNumConsistent 是否已赋值
                     * 
                     */
                    bool IsIdNumConsistentHasBeenSet() const;

                    /**
                     * 获取<p>经营状态</p><p>枚举值：</p><ul><li>1： 开业（在营）</li><li>2： 迁出</li><li>3： 注销</li><li>4： 吊销</li><li>5： 撤销</li><li>6： 停业</li><li>7： 撤销登记</li><li>0： 其他</li><li>/： 无法查询</li></ul>
                     * @return OperatingStatus <p>经营状态</p><p>枚举值：</p><ul><li>1： 开业（在营）</li><li>2： 迁出</li><li>3： 注销</li><li>4： 吊销</li><li>5： 撤销</li><li>6： 停业</li><li>7： 撤销登记</li><li>0： 其他</li><li>/： 无法查询</li></ul>
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
                     * 获取<p>营业期限：一般包括营业开始时间和结束时间</p><p>参数格式：yyyy-MM-dd/yyyy-MM-dd</p><p>无固定期限的格式为：yyyy-MM-dd/<br>部分企业历史数据可能为空，将返回：/<br>无法查询，将返回：/</p>
                     * @return OperatingPeriod <p>营业期限：一般包括营业开始时间和结束时间</p><p>参数格式：yyyy-MM-dd/yyyy-MM-dd</p><p>无固定期限的格式为：yyyy-MM-dd/<br>部分企业历史数据可能为空，将返回：/<br>无法查询，将返回：/</p>
                     * 
                     */
                    std::string GetOperatingPeriod() const;

                    /**
                     * 判断参数 OperatingPeriod 是否已赋值
                     * @return OperatingPeriod 是否已赋值
                     * 
                     */
                    bool OperatingPeriodHasBeenSet() const;

                private:

                    /**
                     * <p>请求状态</p><p>枚举值：</p><ul><li>0： 成功，计费</li><li>1： 系统异常，不计费</li></ul>
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * <p>验证结果<br>1：四要素完全匹配<br>0：四要素不完全匹配<br>仅StatusCode为0时返回</p>
                     */
                    int64_t m_verifyResult;
                    bool m_verifyResultHasBeenSet;

                    /**
                     * <p>统一社会信用代码是否一致<br>仅StatusCode为0时返回</p>
                     */
                    bool m_isCreditCodeConsistent;
                    bool m_isCreditCodeConsistentHasBeenSet;

                    /**
                     * <p>企业名称是否一致<br>仅StatusCode为0时返回</p>
                     */
                    bool m_isEntNameConsistent;
                    bool m_isEntNameConsistentHasBeenSet;

                    /**
                     * <p>法人代表是否一致<br>仅StatusCode为0时返回，企业名称与统一社会信用代码均未查得时，固定返回false</p>
                     */
                    bool m_isLrNameConsistent;
                    bool m_isLrNameConsistentHasBeenSet;

                    /**
                     * <p>注册登记证件号码是否一致<br>仅StatusCode为0时返回，企业名称与统一社会信用代码均未查得时，固定返回false</p>
                     */
                    bool m_isIdNumConsistent;
                    bool m_isIdNumConsistentHasBeenSet;

                    /**
                     * <p>经营状态</p><p>枚举值：</p><ul><li>1： 开业（在营）</li><li>2： 迁出</li><li>3： 注销</li><li>4： 吊销</li><li>5： 撤销</li><li>6： 停业</li><li>7： 撤销登记</li><li>0： 其他</li><li>/： 无法查询</li></ul>
                     */
                    std::string m_operatingStatus;
                    bool m_operatingStatusHasBeenSet;

                    /**
                     * <p>营业期限：一般包括营业开始时间和结束时间</p><p>参数格式：yyyy-MM-dd/yyyy-MM-dd</p><p>无固定期限的格式为：yyyy-MM-dd/<br>部分企业历史数据可能为空，将返回：/<br>无法查询，将返回：/</p>
                     */
                    std::string m_operatingPeriod;
                    bool m_operatingPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYBIZLICENSEENTERPRISE4RESPONSE_H_
