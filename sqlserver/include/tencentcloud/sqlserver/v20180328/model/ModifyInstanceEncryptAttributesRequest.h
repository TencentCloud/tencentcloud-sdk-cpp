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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYINSTANCEENCRYPTATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYINSTANCEENCRYPTATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyInstanceEncryptAttributes请求参数结构体
                */
                class ModifyInstanceEncryptAttributesRequest : public AbstractModel
                {
                public:
                    ModifyInstanceEncryptAttributesRequest();
                    ~ModifyInstanceEncryptAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取证书归属。self-表示使用该账号自身的证书，others-表示引用其他账号的证书，kms-表示使用kms的CMK证书，默认取值self。
                     * @return CertificateAttribution 证书归属。self-表示使用该账号自身的证书，others-表示引用其他账号的证书，kms-表示使用kms的CMK证书，默认取值self。
                     * 
                     */
                    std::string GetCertificateAttribution() const;

                    /**
                     * 设置证书归属。self-表示使用该账号自身的证书，others-表示引用其他账号的证书，kms-表示使用kms的CMK证书，默认取值self。
                     * @param _certificateAttribution 证书归属。self-表示使用该账号自身的证书，others-表示引用其他账号的证书，kms-表示使用kms的CMK证书，默认取值self。
                     * 
                     */
                    void SetCertificateAttribution(const std::string& _certificateAttribution);

                    /**
                     * 判断参数 CertificateAttribution 是否已赋值
                     * @return CertificateAttribution 是否已赋值
                     * 
                     */
                    bool CertificateAttributionHasBeenSet() const;

                    /**
                     * 获取引用的其他主账号ID，当CertificateAttribution 为others时必填。
                     * @return QuoteUin 引用的其他主账号ID，当CertificateAttribution 为others时必填。
                     * 
                     */
                    std::string GetQuoteUin() const;

                    /**
                     * 设置引用的其他主账号ID，当CertificateAttribution 为others时必填。
                     * @param _quoteUin 引用的其他主账号ID，当CertificateAttribution 为others时必填。
                     * 
                     */
                    void SetQuoteUin(const std::string& _quoteUin);

                    /**
                     * 判断参数 QuoteUin 是否已赋值
                     * @return QuoteUin 是否已赋值
                     * 
                     */
                    bool QuoteUinHasBeenSet() const;

                    /**
                     * 获取CertificateAttribution为kms时必填
                     * @return KeyId CertificateAttribution为kms时必填
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置CertificateAttribution为kms时必填
                     * @param _keyId CertificateAttribution为kms时必填
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取CertificateAttribution为kms时必填
                     * @return KeyRegion CertificateAttribution为kms时必填
                     * 
                     */
                    std::string GetKeyRegion() const;

                    /**
                     * 设置CertificateAttribution为kms时必填
                     * @param _keyRegion CertificateAttribution为kms时必填
                     * 
                     */
                    void SetKeyRegion(const std::string& _keyRegion);

                    /**
                     * 判断参数 KeyRegion 是否已赋值
                     * @return KeyRegion 是否已赋值
                     * 
                     */
                    bool KeyRegionHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 证书归属。self-表示使用该账号自身的证书，others-表示引用其他账号的证书，kms-表示使用kms的CMK证书，默认取值self。
                     */
                    std::string m_certificateAttribution;
                    bool m_certificateAttributionHasBeenSet;

                    /**
                     * 引用的其他主账号ID，当CertificateAttribution 为others时必填。
                     */
                    std::string m_quoteUin;
                    bool m_quoteUinHasBeenSet;

                    /**
                     * CertificateAttribution为kms时必填
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * CertificateAttribution为kms时必填
                     */
                    std::string m_keyRegion;
                    bool m_keyRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYINSTANCEENCRYPTATTRIBUTESREQUEST_H_
