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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_CREATEPRIVATECAREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_CREATEPRIVATECAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * CreatePrivateCA请求参数结构体
                */
                class CreatePrivateCARequest : public AbstractModel
                {
                public:
                    CreatePrivateCARequest();
                    ~CreatePrivateCARequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CA证书名称
                     * @return CertName CA证书名称
                     * 
                     */
                    std::string GetCertName() const;

                    /**
                     * 设置CA证书名称
                     * @param _certName CA证书名称
                     * 
                     */
                    void SetCertName(const std::string& _certName);

                    /**
                     * 判断参数 CertName 是否已赋值
                     * @return CertName 是否已赋值
                     * 
                     */
                    bool CertNameHasBeenSet() const;

                    /**
                     * 获取CA证书内容
                     * @return CertText CA证书内容
                     * 
                     */
                    std::string GetCertText() const;

                    /**
                     * 设置CA证书内容
                     * @param _certText CA证书内容
                     * 
                     */
                    void SetCertText(const std::string& _certText);

                    /**
                     * 判断参数 CertText 是否已赋值
                     * @return CertText 是否已赋值
                     * 
                     */
                    bool CertTextHasBeenSet() const;

                    /**
                     * 获取校验CA证书的证书内容
                     * @return VerifyCertText 校验CA证书的证书内容
                     * 
                     */
                    std::string GetVerifyCertText() const;

                    /**
                     * 设置校验CA证书的证书内容
                     * @param _verifyCertText 校验CA证书的证书内容
                     * 
                     */
                    void SetVerifyCertText(const std::string& _verifyCertText);

                    /**
                     * 判断参数 VerifyCertText 是否已赋值
                     * @return VerifyCertText 是否已赋值
                     * 
                     */
                    bool VerifyCertTextHasBeenSet() const;

                private:

                    /**
                     * CA证书名称
                     */
                    std::string m_certName;
                    bool m_certNameHasBeenSet;

                    /**
                     * CA证书内容
                     */
                    std::string m_certText;
                    bool m_certTextHasBeenSet;

                    /**
                     * 校验CA证书的证书内容
                     */
                    std::string m_verifyCertText;
                    bool m_verifyCertTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_CREATEPRIVATECAREQUEST_H_
