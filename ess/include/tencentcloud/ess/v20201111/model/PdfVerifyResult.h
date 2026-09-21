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
                     * 获取<p>验签结果。0-签名域未签名；1-验签成功； 3-验签失败；4-未找到签名域：文件内没有签名域；5-签名值格式不正确。</p>
                     * @return VerifyResult <p>验签结果。0-签名域未签名；1-验签成功； 3-验签失败；4-未找到签名域：文件内没有签名域；5-签名值格式不正确。</p>
                     * 
                     */
                    int64_t GetVerifyResult() const;

                    /**
                     * 设置<p>验签结果。0-签名域未签名；1-验签成功； 3-验签失败；4-未找到签名域：文件内没有签名域；5-签名值格式不正确。</p>
                     * @param _verifyResult <p>验签结果。0-签名域未签名；1-验签成功； 3-验签失败；4-未找到签名域：文件内没有签名域；5-签名值格式不正确。</p>
                     * 
                     */
                    void SetVerifyResult(const int64_t& _verifyResult);

                    /**
                     * 判断参数 VerifyResult 是否已赋值
                     * @return VerifyResult 是否已赋值
                     * 
                     */
                    bool VerifyResultHasBeenSet() const;

                    /**
                     * 获取<p>签署平台<br>如果文件是在腾讯电子签平台签署，则为<strong>腾讯电子签</strong>，<br>如果文件不在腾讯电子签平台签署，则为<strong>其他平台</strong>。</p>
                     * @return SignPlatform <p>签署平台<br>如果文件是在腾讯电子签平台签署，则为<strong>腾讯电子签</strong>，<br>如果文件不在腾讯电子签平台签署，则为<strong>其他平台</strong>。</p>
                     * 
                     */
                    std::string GetSignPlatform() const;

                    /**
                     * 设置<p>签署平台<br>如果文件是在腾讯电子签平台签署，则为<strong>腾讯电子签</strong>，<br>如果文件不在腾讯电子签平台签署，则为<strong>其他平台</strong>。</p>
                     * @param _signPlatform <p>签署平台<br>如果文件是在腾讯电子签平台签署，则为<strong>腾讯电子签</strong>，<br>如果文件不在腾讯电子签平台签署，则为<strong>其他平台</strong>。</p>
                     * 
                     */
                    void SetSignPlatform(const std::string& _signPlatform);

                    /**
                     * 判断参数 SignPlatform 是否已赋值
                     * @return SignPlatform 是否已赋值
                     * 
                     */
                    bool SignPlatformHasBeenSet() const;

                    /**
                     * 获取<p>申请证书的主体的名字</p><p>如果是在腾讯电子签平台签署, 则对应的主体的名字个数如下<br><strong>企业</strong>:  ESS@企业名称@编码<br><strong>个人</strong>: ESS@个人姓名@证件号@808854</p><p>如果在其他平台签署的, 主体的名字参考其他平台的说明</p>
                     * @return SignerName <p>申请证书的主体的名字</p><p>如果是在腾讯电子签平台签署, 则对应的主体的名字个数如下<br><strong>企业</strong>:  ESS@企业名称@编码<br><strong>个人</strong>: ESS@个人姓名@证件号@808854</p><p>如果在其他平台签署的, 主体的名字参考其他平台的说明</p>
                     * 
                     */
                    std::string GetSignerName() const;

                    /**
                     * 设置<p>申请证书的主体的名字</p><p>如果是在腾讯电子签平台签署, 则对应的主体的名字个数如下<br><strong>企业</strong>:  ESS@企业名称@编码<br><strong>个人</strong>: ESS@个人姓名@证件号@808854</p><p>如果在其他平台签署的, 主体的名字参考其他平台的说明</p>
                     * @param _signerName <p>申请证书的主体的名字</p><p>如果是在腾讯电子签平台签署, 则对应的主体的名字个数如下<br><strong>企业</strong>:  ESS@企业名称@编码<br><strong>个人</strong>: ESS@个人姓名@证件号@808854</p><p>如果在其他平台签署的, 主体的名字参考其他平台的说明</p>
                     * 
                     */
                    void SetSignerName(const std::string& _signerName);

                    /**
                     * 判断参数 SignerName 是否已赋值
                     * @return SignerName 是否已赋值
                     * 
                     */
                    bool SignerNameHasBeenSet() const;

                    /**
                     * 获取<p>签署时间的Unix时间戳，单位毫秒</p>
                     * @return SignTime <p>签署时间的Unix时间戳，单位毫秒</p>
                     * 
                     */
                    int64_t GetSignTime() const;

                    /**
                     * 设置<p>签署时间的Unix时间戳，单位毫秒</p>
                     * @param _signTime <p>签署时间的Unix时间戳，单位毫秒</p>
                     * 
                     */
                    void SetSignTime(const int64_t& _signTime);

                    /**
                     * 判断参数 SignTime 是否已赋值
                     * @return SignTime 是否已赋值
                     * 
                     */
                    bool SignTimeHasBeenSet() const;

                    /**
                     * 获取<p>证书签名算法,  如SHA1withRSA等算法</p>
                     * @return SignAlgorithm <p>证书签名算法,  如SHA1withRSA等算法</p>
                     * 
                     */
                    std::string GetSignAlgorithm() const;

                    /**
                     * 设置<p>证书签名算法,  如SHA1withRSA等算法</p>
                     * @param _signAlgorithm <p>证书签名算法,  如SHA1withRSA等算法</p>
                     * 
                     */
                    void SetSignAlgorithm(const std::string& _signAlgorithm);

                    /**
                     * 判断参数 SignAlgorithm 是否已赋值
                     * @return SignAlgorithm 是否已赋值
                     * 
                     */
                    bool SignAlgorithmHasBeenSet() const;

                    /**
                     * 获取<p>在数字证书申请过程中，系统会自动生成一个独一无二的序列号。</p>
                     * @return CertSn <p>在数字证书申请过程中，系统会自动生成一个独一无二的序列号。</p>
                     * 
                     */
                    std::string GetCertSn() const;

                    /**
                     * 设置<p>在数字证书申请过程中，系统会自动生成一个独一无二的序列号。</p>
                     * @param _certSn <p>在数字证书申请过程中，系统会自动生成一个独一无二的序列号。</p>
                     * 
                     */
                    void SetCertSn(const std::string& _certSn);

                    /**
                     * 判断参数 CertSn 是否已赋值
                     * @return CertSn 是否已赋值
                     * 
                     */
                    bool CertSnHasBeenSet() const;

                    /**
                     * 获取<p>证书起始时间的Unix时间戳，单位毫秒</p>
                     * @return CertNotBefore <p>证书起始时间的Unix时间戳，单位毫秒</p>
                     * 
                     */
                    int64_t GetCertNotBefore() const;

                    /**
                     * 设置<p>证书起始时间的Unix时间戳，单位毫秒</p>
                     * @param _certNotBefore <p>证书起始时间的Unix时间戳，单位毫秒</p>
                     * 
                     */
                    void SetCertNotBefore(const int64_t& _certNotBefore);

                    /**
                     * 判断参数 CertNotBefore 是否已赋值
                     * @return CertNotBefore 是否已赋值
                     * 
                     */
                    bool CertNotBeforeHasBeenSet() const;

                    /**
                     * 获取<p>证书过期时间的时间戳，单位毫秒</p>
                     * @return CertNotAfter <p>证书过期时间的时间戳，单位毫秒</p>
                     * 
                     */
                    int64_t GetCertNotAfter() const;

                    /**
                     * 设置<p>证书过期时间的时间戳，单位毫秒</p>
                     * @param _certNotAfter <p>证书过期时间的时间戳，单位毫秒</p>
                     * 
                     */
                    void SetCertNotAfter(const int64_t& _certNotAfter);

                    /**
                     * 判断参数 CertNotAfter 是否已赋值
                     * @return CertNotAfter 是否已赋值
                     * 
                     */
                    bool CertNotAfterHasBeenSet() const;

                    /**
                     * 获取<p>签名域横坐标，单位px</p>
                     * @return ComponentPosX <p>签名域横坐标，单位px</p>
                     * 
                     */
                    double GetComponentPosX() const;

                    /**
                     * 设置<p>签名域横坐标，单位px</p>
                     * @param _componentPosX <p>签名域横坐标，单位px</p>
                     * 
                     */
                    void SetComponentPosX(const double& _componentPosX);

                    /**
                     * 判断参数 ComponentPosX 是否已赋值
                     * @return ComponentPosX 是否已赋值
                     * 
                     */
                    bool ComponentPosXHasBeenSet() const;

                    /**
                     * 获取<p>签名域纵坐标，单位px</p>
                     * @return ComponentPosY <p>签名域纵坐标，单位px</p>
                     * 
                     */
                    double GetComponentPosY() const;

                    /**
                     * 设置<p>签名域纵坐标，单位px</p>
                     * @param _componentPosY <p>签名域纵坐标，单位px</p>
                     * 
                     */
                    void SetComponentPosY(const double& _componentPosY);

                    /**
                     * 判断参数 ComponentPosY 是否已赋值
                     * @return ComponentPosY 是否已赋值
                     * 
                     */
                    bool ComponentPosYHasBeenSet() const;

                    /**
                     * 获取<p>签名域宽度，单位px</p>
                     * @return ComponentWidth <p>签名域宽度，单位px</p>
                     * 
                     */
                    double GetComponentWidth() const;

                    /**
                     * 设置<p>签名域宽度，单位px</p>
                     * @param _componentWidth <p>签名域宽度，单位px</p>
                     * 
                     */
                    void SetComponentWidth(const double& _componentWidth);

                    /**
                     * 判断参数 ComponentWidth 是否已赋值
                     * @return ComponentWidth 是否已赋值
                     * 
                     */
                    bool ComponentWidthHasBeenSet() const;

                    /**
                     * 获取<p>签名域高度，单位px</p>
                     * @return ComponentHeight <p>签名域高度，单位px</p>
                     * 
                     */
                    double GetComponentHeight() const;

                    /**
                     * 设置<p>签名域高度，单位px</p>
                     * @param _componentHeight <p>签名域高度，单位px</p>
                     * 
                     */
                    void SetComponentHeight(const double& _componentHeight);

                    /**
                     * 判断参数 ComponentHeight 是否已赋值
                     * @return ComponentHeight 是否已赋值
                     * 
                     */
                    bool ComponentHeightHasBeenSet() const;

                    /**
                     * 获取<p>签名域所在页码，1～N</p>
                     * @return ComponentPage <p>签名域所在页码，1～N</p>
                     * 
                     */
                    int64_t GetComponentPage() const;

                    /**
                     * 设置<p>签名域所在页码，1～N</p>
                     * @param _componentPage <p>签名域所在页码，1～N</p>
                     * 
                     */
                    void SetComponentPage(const int64_t& _componentPage);

                    /**
                     * 判断参数 ComponentPage 是否已赋值
                     * @return ComponentPage 是否已赋值
                     * 
                     */
                    bool ComponentPageHasBeenSet() const;

                    /**
                     * 获取<p>证书颁发机构</p>
                     * @return CertProvider <p>证书颁发机构</p>
                     * 
                     */
                    std::string GetCertProvider() const;

                    /**
                     * 设置<p>证书颁发机构</p>
                     * @param _certProvider <p>证书颁发机构</p>
                     * 
                     */
                    void SetCertProvider(const std::string& _certProvider);

                    /**
                     * 判断参数 CertProvider 是否已赋值
                     * @return CertProvider 是否已赋值
                     * 
                     */
                    bool CertProviderHasBeenSet() const;

                    /**
                     * 获取<p>是否有可信时间戳</p>
                     * @return IsTimestampTrust <p>是否有可信时间戳</p>
                     * 
                     */
                    bool GetIsTimestampTrust() const;

                    /**
                     * 设置<p>是否有可信时间戳</p>
                     * @param _isTimestampTrust <p>是否有可信时间戳</p>
                     * 
                     */
                    void SetIsTimestampTrust(const bool& _isTimestampTrust);

                    /**
                     * 判断参数 IsTimestampTrust 是否已赋值
                     * @return IsTimestampTrust 是否已赋值
                     * 
                     */
                    bool IsTimestampTrustHasBeenSet() const;

                private:

                    /**
                     * <p>验签结果。0-签名域未签名；1-验签成功； 3-验签失败；4-未找到签名域：文件内没有签名域；5-签名值格式不正确。</p>
                     */
                    int64_t m_verifyResult;
                    bool m_verifyResultHasBeenSet;

                    /**
                     * <p>签署平台<br>如果文件是在腾讯电子签平台签署，则为<strong>腾讯电子签</strong>，<br>如果文件不在腾讯电子签平台签署，则为<strong>其他平台</strong>。</p>
                     */
                    std::string m_signPlatform;
                    bool m_signPlatformHasBeenSet;

                    /**
                     * <p>申请证书的主体的名字</p><p>如果是在腾讯电子签平台签署, 则对应的主体的名字个数如下<br><strong>企业</strong>:  ESS@企业名称@编码<br><strong>个人</strong>: ESS@个人姓名@证件号@808854</p><p>如果在其他平台签署的, 主体的名字参考其他平台的说明</p>
                     */
                    std::string m_signerName;
                    bool m_signerNameHasBeenSet;

                    /**
                     * <p>签署时间的Unix时间戳，单位毫秒</p>
                     */
                    int64_t m_signTime;
                    bool m_signTimeHasBeenSet;

                    /**
                     * <p>证书签名算法,  如SHA1withRSA等算法</p>
                     */
                    std::string m_signAlgorithm;
                    bool m_signAlgorithmHasBeenSet;

                    /**
                     * <p>在数字证书申请过程中，系统会自动生成一个独一无二的序列号。</p>
                     */
                    std::string m_certSn;
                    bool m_certSnHasBeenSet;

                    /**
                     * <p>证书起始时间的Unix时间戳，单位毫秒</p>
                     */
                    int64_t m_certNotBefore;
                    bool m_certNotBeforeHasBeenSet;

                    /**
                     * <p>证书过期时间的时间戳，单位毫秒</p>
                     */
                    int64_t m_certNotAfter;
                    bool m_certNotAfterHasBeenSet;

                    /**
                     * <p>签名域横坐标，单位px</p>
                     */
                    double m_componentPosX;
                    bool m_componentPosXHasBeenSet;

                    /**
                     * <p>签名域纵坐标，单位px</p>
                     */
                    double m_componentPosY;
                    bool m_componentPosYHasBeenSet;

                    /**
                     * <p>签名域宽度，单位px</p>
                     */
                    double m_componentWidth;
                    bool m_componentWidthHasBeenSet;

                    /**
                     * <p>签名域高度，单位px</p>
                     */
                    double m_componentHeight;
                    bool m_componentHeightHasBeenSet;

                    /**
                     * <p>签名域所在页码，1～N</p>
                     */
                    int64_t m_componentPage;
                    bool m_componentPageHasBeenSet;

                    /**
                     * <p>证书颁发机构</p>
                     */
                    std::string m_certProvider;
                    bool m_certProviderHasBeenSet;

                    /**
                     * <p>是否有可信时间戳</p>
                     */
                    bool m_isTimestampTrust;
                    bool m_isTimestampTrustHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_PDFVERIFYRESULT_H_
