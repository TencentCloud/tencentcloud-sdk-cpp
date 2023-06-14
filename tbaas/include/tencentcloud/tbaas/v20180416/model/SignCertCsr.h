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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_SIGNCERTCSR_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_SIGNCERTCSR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 用于申请用户签名证书的结构体
                */
                class SignCertCsr : public AbstractModel
                {
                public:
                    SignCertCsr();
                    ~SignCertCsr() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户签名证书的标识，会存在于用户申请的证书中
                     * @return CertMark 用户签名证书的标识，会存在于用户申请的证书中
                     * 
                     */
                    std::string GetCertMark() const;

                    /**
                     * 设置用户签名证书的标识，会存在于用户申请的证书中
                     * @param _certMark 用户签名证书的标识，会存在于用户申请的证书中
                     * 
                     */
                    void SetCertMark(const std::string& _certMark);

                    /**
                     * 判断参数 CertMark 是否已赋值
                     * @return CertMark 是否已赋值
                     * 
                     */
                    bool CertMarkHasBeenSet() const;

                    /**
                     * 获取用户申请签名证书所需要的证书请求文件的base64编码
                     * @return SignCsrContent 用户申请签名证书所需要的证书请求文件的base64编码
                     * 
                     */
                    std::string GetSignCsrContent() const;

                    /**
                     * 设置用户申请签名证书所需要的证书请求文件的base64编码
                     * @param _signCsrContent 用户申请签名证书所需要的证书请求文件的base64编码
                     * 
                     */
                    void SetSignCsrContent(const std::string& _signCsrContent);

                    /**
                     * 判断参数 SignCsrContent 是否已赋值
                     * @return SignCsrContent 是否已赋值
                     * 
                     */
                    bool SignCsrContentHasBeenSet() const;

                private:

                    /**
                     * 用户签名证书的标识，会存在于用户申请的证书中
                     */
                    std::string m_certMark;
                    bool m_certMarkHasBeenSet;

                    /**
                     * 用户申请签名证书所需要的证书请求文件的base64编码
                     */
                    std::string m_signCsrContent;
                    bool m_signCsrContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_SIGNCERTCSR_H_
