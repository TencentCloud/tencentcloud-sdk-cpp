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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_PAYMENTRESULT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_PAYMENTRESULT_H_

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
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 支付结果
                */
                class PaymentResult : public AbstractModel
                {
                public:
                    PaymentResult();
                    ~PaymentResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>支付状态</p><p>枚举值：</p><ul><li>success： 成功</li><li>failure： 失败</li></ul>
                     * @return Status <p>支付状态</p><p>枚举值：</p><ul><li>success： 成功</li><li>failure： 失败</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>支付状态</p><p>枚举值：</p><ul><li>success： 成功</li><li>failure： 失败</li></ul>
                     * @param _status <p>支付状态</p><p>枚举值：</p><ul><li>success： 成功</li><li>failure： 失败</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>支付失败原因</p>
                     * @return FailureReason <p>支付失败原因</p>
                     * 
                     */
                    std::string GetFailureReason() const;

                    /**
                     * 设置<p>支付失败原因</p>
                     * @param _failureReason <p>支付失败原因</p>
                     * 
                     */
                    void SetFailureReason(const std::string& _failureReason);

                    /**
                     * 判断参数 FailureReason 是否已赋值
                     * @return FailureReason 是否已赋值
                     * 
                     */
                    bool FailureReasonHasBeenSet() const;

                    /**
                     * 获取<p>是否使用3DS，枚举值：</p><ul><li>是：true</li><li>否：false</li></ul>
                     * @return ThreeDomainSecure <p>是否使用3DS，枚举值：</p><ul><li>是：true</li><li>否：false</li></ul>
                     * 
                     */
                    bool GetThreeDomainSecure() const;

                    /**
                     * 设置<p>是否使用3DS，枚举值：</p><ul><li>是：true</li><li>否：false</li></ul>
                     * @param _threeDomainSecure <p>是否使用3DS，枚举值：</p><ul><li>是：true</li><li>否：false</li></ul>
                     * 
                     */
                    void SetThreeDomainSecure(const bool& _threeDomainSecure);

                    /**
                     * 判断参数 ThreeDomainSecure 是否已赋值
                     * @return ThreeDomainSecure 是否已赋值
                     * 
                     */
                    bool ThreeDomainSecureHasBeenSet() const;

                    /**
                     * 获取<p>ECI返回码</p>
                     * @return ECICode <p>ECI返回码</p>
                     * 
                     */
                    std::string GetECICode() const;

                    /**
                     * 设置<p>ECI返回码</p>
                     * @param _eCICode <p>ECI返回码</p>
                     * 
                     */
                    void SetECICode(const std::string& _eCICode);

                    /**
                     * 判断参数 ECICode 是否已赋值
                     * @return ECICode 是否已赋值
                     * 
                     */
                    bool ECICodeHasBeenSet() const;

                    /**
                     * 获取<p>AVS响应结果（地址验证）</p>
                     * @return AVSCode <p>AVS响应结果（地址验证）</p>
                     * 
                     */
                    std::string GetAVSCode() const;

                    /**
                     * 设置<p>AVS响应结果（地址验证）</p>
                     * @param _aVSCode <p>AVS响应结果（地址验证）</p>
                     * 
                     */
                    void SetAVSCode(const std::string& _aVSCode);

                    /**
                     * 判断参数 AVSCode 是否已赋值
                     * @return AVSCode 是否已赋值
                     * 
                     */
                    bool AVSCodeHasBeenSet() const;

                    /**
                     * 获取<p>CVC验证结果（交易真实性验证）</p>
                     * @return CVCCode <p>CVC验证结果（交易真实性验证）</p>
                     * 
                     */
                    std::string GetCVCCode() const;

                    /**
                     * 设置<p>CVC验证结果（交易真实性验证）</p>
                     * @param _cVCCode <p>CVC验证结果（交易真实性验证）</p>
                     * 
                     */
                    void SetCVCCode(const std::string& _cVCCode);

                    /**
                     * 判断参数 CVCCode 是否已赋值
                     * @return CVCCode 是否已赋值
                     * 
                     */
                    bool CVCCodeHasBeenSet() const;

                private:

                    /**
                     * <p>支付状态</p><p>枚举值：</p><ul><li>success： 成功</li><li>failure： 失败</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>支付失败原因</p>
                     */
                    std::string m_failureReason;
                    bool m_failureReasonHasBeenSet;

                    /**
                     * <p>是否使用3DS，枚举值：</p><ul><li>是：true</li><li>否：false</li></ul>
                     */
                    bool m_threeDomainSecure;
                    bool m_threeDomainSecureHasBeenSet;

                    /**
                     * <p>ECI返回码</p>
                     */
                    std::string m_eCICode;
                    bool m_eCICodeHasBeenSet;

                    /**
                     * <p>AVS响应结果（地址验证）</p>
                     */
                    std::string m_aVSCode;
                    bool m_aVSCodeHasBeenSet;

                    /**
                     * <p>CVC验证结果（交易真实性验证）</p>
                     */
                    std::string m_cVCCode;
                    bool m_cVCCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_PAYMENTRESULT_H_
