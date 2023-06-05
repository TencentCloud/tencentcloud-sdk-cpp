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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_PDFVERIFYRESULT_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_PDFVERIFYRESULT_H_

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
                * 合同文件验签单个结果结构体
                */
                class PdfVerifyResult : public AbstractModel
                {
                public:
                    PdfVerifyResult();
                    ~PdfVerifyResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取验签结果。0-签名域未签名；1-验签成功； 3-验签失败；4-未找到签名域：文件内没有签名域；5-签名值格式不正确。
                     * @return VerifyResult 验签结果。0-签名域未签名；1-验签成功； 3-验签失败；4-未找到签名域：文件内没有签名域；5-签名值格式不正确。
                     */
                    int64_t GetVerifyResult() const;

                    /**
                     * 设置验签结果。0-签名域未签名；1-验签成功； 3-验签失败；4-未找到签名域：文件内没有签名域；5-签名值格式不正确。
                     * @param VerifyResult 验签结果。0-签名域未签名；1-验签成功； 3-验签失败；4-未找到签名域：文件内没有签名域；5-签名值格式不正确。
                     */
                    void SetVerifyResult(const int64_t& _verifyResult);

                    /**
                     * 判断参数 VerifyResult 是否已赋值
                     * @return VerifyResult 是否已赋值
                     */
                    bool VerifyResultHasBeenSet() const;

                    /**
                     * 获取签署平台，如果文件是在腾讯电子签平台签署，则返回腾讯电子签，如果文件不在腾讯电子签平台签署，则返回其他平台。
                     * @return SignPlatform 签署平台，如果文件是在腾讯电子签平台签署，则返回腾讯电子签，如果文件不在腾讯电子签平台签署，则返回其他平台。
                     */
                    std::string GetSignPlatform() const;

                    /**
                     * 设置签署平台，如果文件是在腾讯电子签平台签署，则返回腾讯电子签，如果文件不在腾讯电子签平台签署，则返回其他平台。
                     * @param SignPlatform 签署平台，如果文件是在腾讯电子签平台签署，则返回腾讯电子签，如果文件不在腾讯电子签平台签署，则返回其他平台。
                     */
                    void SetSignPlatform(const std::string& _signPlatform);

                    /**
                     * 判断参数 SignPlatform 是否已赋值
                     * @return SignPlatform 是否已赋值
                     */
                    bool SignPlatformHasBeenSet() const;

                    /**
                     * 获取签署人名称
                     * @return SignerName 签署人名称
                     */
                    std::string GetSignerName() const;

                    /**
                     * 设置签署人名称
                     * @param SignerName 签署人名称
                     */
                    void SetSignerName(const std::string& _signerName);

                    /**
                     * 判断参数 SignerName 是否已赋值
                     * @return SignerName 是否已赋值
                     */
                    bool SignerNameHasBeenSet() const;

                    /**
                     * 获取签署时间戳，单位秒
                     * @return SignTime 签署时间戳，单位秒
                     */
                    int64_t GetSignTime() const;

                    /**
                     * 设置签署时间戳，单位秒
                     * @param SignTime 签署时间戳，单位秒
                     */
                    void SetSignTime(const int64_t& _signTime);

                    /**
                     * 判断参数 SignTime 是否已赋值
                     * @return SignTime 是否已赋值
                     */
                    bool SignTimeHasBeenSet() const;

                    /**
                     * 获取签名算法
                     * @return SignAlgorithm 签名算法
                     */
                    std::string GetSignAlgorithm() const;

                    /**
                     * 设置签名算法
                     * @param SignAlgorithm 签名算法
                     */
                    void SetSignAlgorithm(const std::string& _signAlgorithm);

                    /**
                     * 判断参数 SignAlgorithm 是否已赋值
                     * @return SignAlgorithm 是否已赋值
                     */
                    bool SignAlgorithmHasBeenSet() const;

                    /**
                     * 获取签名证书序列号
                     * @return CertSn 签名证书序列号
                     */
                    std::string GetCertSn() const;

                    /**
                     * 设置签名证书序列号
                     * @param CertSn 签名证书序列号
                     */
                    void SetCertSn(const std::string& _certSn);

                    /**
                     * 判断参数 CertSn 是否已赋值
                     * @return CertSn 是否已赋值
                     */
                    bool CertSnHasBeenSet() const;

                    /**
                     * 获取证书起始时间戳，单位秒
                     * @return CertNotBefore 证书起始时间戳，单位秒
                     */
                    int64_t GetCertNotBefore() const;

                    /**
                     * 设置证书起始时间戳，单位秒
                     * @param CertNotBefore 证书起始时间戳，单位秒
                     */
                    void SetCertNotBefore(const int64_t& _certNotBefore);

                    /**
                     * 判断参数 CertNotBefore 是否已赋值
                     * @return CertNotBefore 是否已赋值
                     */
                    bool CertNotBeforeHasBeenSet() const;

                    /**
                     * 获取证书过期时间戳，单位秒
                     * @return CertNotAfter 证书过期时间戳，单位秒
                     */
                    int64_t GetCertNotAfter() const;

                    /**
                     * 设置证书过期时间戳，单位秒
                     * @param CertNotAfter 证书过期时间戳，单位秒
                     */
                    void SetCertNotAfter(const int64_t& _certNotAfter);

                    /**
                     * 判断参数 CertNotAfter 是否已赋值
                     * @return CertNotAfter 是否已赋值
                     */
                    bool CertNotAfterHasBeenSet() const;

                    /**
                     * 获取签名域横坐标，单位pt
                     * @return ComponentPosX 签名域横坐标，单位pt
                     */
                    double GetComponentPosX() const;

                    /**
                     * 设置签名域横坐标，单位pt
                     * @param ComponentPosX 签名域横坐标，单位pt
                     */
                    void SetComponentPosX(const double& _componentPosX);

                    /**
                     * 判断参数 ComponentPosX 是否已赋值
                     * @return ComponentPosX 是否已赋值
                     */
                    bool ComponentPosXHasBeenSet() const;

                    /**
                     * 获取签名域纵坐标，单位pt
                     * @return ComponentPosY 签名域纵坐标，单位pt
                     */
                    double GetComponentPosY() const;

                    /**
                     * 设置签名域纵坐标，单位pt
                     * @param ComponentPosY 签名域纵坐标，单位pt
                     */
                    void SetComponentPosY(const double& _componentPosY);

                    /**
                     * 判断参数 ComponentPosY 是否已赋值
                     * @return ComponentPosY 是否已赋值
                     */
                    bool ComponentPosYHasBeenSet() const;

                    /**
                     * 获取签名域宽度，单位pt
                     * @return ComponentWidth 签名域宽度，单位pt
                     */
                    double GetComponentWidth() const;

                    /**
                     * 设置签名域宽度，单位pt
                     * @param ComponentWidth 签名域宽度，单位pt
                     */
                    void SetComponentWidth(const double& _componentWidth);

                    /**
                     * 判断参数 ComponentWidth 是否已赋值
                     * @return ComponentWidth 是否已赋值
                     */
                    bool ComponentWidthHasBeenSet() const;

                    /**
                     * 获取签名域高度，单位pt
                     * @return ComponentHeight 签名域高度，单位pt
                     */
                    double GetComponentHeight() const;

                    /**
                     * 设置签名域高度，单位pt
                     * @param ComponentHeight 签名域高度，单位pt
                     */
                    void SetComponentHeight(const double& _componentHeight);

                    /**
                     * 判断参数 ComponentHeight 是否已赋值
                     * @return ComponentHeight 是否已赋值
                     */
                    bool ComponentHeightHasBeenSet() const;

                    /**
                     * 获取签名域所在页码，1～N
                     * @return ComponentPage 签名域所在页码，1～N
                     */
                    int64_t GetComponentPage() const;

                    /**
                     * 设置签名域所在页码，1～N
                     * @param ComponentPage 签名域所在页码，1～N
                     */
                    void SetComponentPage(const int64_t& _componentPage);

                    /**
                     * 判断参数 ComponentPage 是否已赋值
                     * @return ComponentPage 是否已赋值
                     */
                    bool ComponentPageHasBeenSet() const;

                private:

                    /**
                     * 验签结果。0-签名域未签名；1-验签成功； 3-验签失败；4-未找到签名域：文件内没有签名域；5-签名值格式不正确。
                     */
                    int64_t m_verifyResult;
                    bool m_verifyResultHasBeenSet;

                    /**
                     * 签署平台，如果文件是在腾讯电子签平台签署，则返回腾讯电子签，如果文件不在腾讯电子签平台签署，则返回其他平台。
                     */
                    std::string m_signPlatform;
                    bool m_signPlatformHasBeenSet;

                    /**
                     * 签署人名称
                     */
                    std::string m_signerName;
                    bool m_signerNameHasBeenSet;

                    /**
                     * 签署时间戳，单位秒
                     */
                    int64_t m_signTime;
                    bool m_signTimeHasBeenSet;

                    /**
                     * 签名算法
                     */
                    std::string m_signAlgorithm;
                    bool m_signAlgorithmHasBeenSet;

                    /**
                     * 签名证书序列号
                     */
                    std::string m_certSn;
                    bool m_certSnHasBeenSet;

                    /**
                     * 证书起始时间戳，单位秒
                     */
                    int64_t m_certNotBefore;
                    bool m_certNotBeforeHasBeenSet;

                    /**
                     * 证书过期时间戳，单位秒
                     */
                    int64_t m_certNotAfter;
                    bool m_certNotAfterHasBeenSet;

                    /**
                     * 签名域横坐标，单位pt
                     */
                    double m_componentPosX;
                    bool m_componentPosXHasBeenSet;

                    /**
                     * 签名域纵坐标，单位pt
                     */
                    double m_componentPosY;
                    bool m_componentPosYHasBeenSet;

                    /**
                     * 签名域宽度，单位pt
                     */
                    double m_componentWidth;
                    bool m_componentWidthHasBeenSet;

                    /**
                     * 签名域高度，单位pt
                     */
                    double m_componentHeight;
                    bool m_componentHeightHasBeenSet;

                    /**
                     * 签名域所在页码，1～N
                     */
                    int64_t m_componentPage;
                    bool m_componentPageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_PDFVERIFYRESULT_H_
