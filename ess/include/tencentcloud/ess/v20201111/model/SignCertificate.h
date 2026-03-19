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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_SIGNCERTIFICATE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_SIGNCERTIFICATE_H_

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
                * 签署证书信息结构体
                */
                class SignCertificate : public AbstractModel
                {
                public:
                    SignCertificate();
                    ~SignCertificate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取证书序列号
                     * @return SerialNumber 证书序列号
                     * 
                     */
                    std::string GetSerialNumber() const;

                    /**
                     * 设置证书序列号
                     * @param _serialNumber 证书序列号
                     * 
                     */
                    void SetSerialNumber(const std::string& _serialNumber);

                    /**
                     * 判断参数 SerialNumber 是否已赋值
                     * @return SerialNumber 是否已赋值
                     * 
                     */
                    bool SerialNumberHasBeenSet() const;

                    /**
                     * 获取证书持有者名称
                     * @return CommonName 证书持有者名称
                     * 
                     */
                    std::string GetCommonName() const;

                    /**
                     * 设置证书持有者名称
                     * @param _commonName 证书持有者名称
                     * 
                     */
                    void SetCommonName(const std::string& _commonName);

                    /**
                     * 判断参数 CommonName 是否已赋值
                     * @return CommonName 是否已赋值
                     * 
                     */
                    bool CommonNameHasBeenSet() const;

                    /**
                     * 获取证书生效时间
                     * @return NotBefore 证书生效时间
                     * 
                     */
                    int64_t GetNotBefore() const;

                    /**
                     * 设置证书生效时间
                     * @param _notBefore 证书生效时间
                     * 
                     */
                    void SetNotBefore(const int64_t& _notBefore);

                    /**
                     * 判断参数 NotBefore 是否已赋值
                     * @return NotBefore 是否已赋值
                     * 
                     */
                    bool NotBeforeHasBeenSet() const;

                    /**
                     * 获取证书失效时间
                     * @return NotAfter 证书失效时间
                     * 
                     */
                    int64_t GetNotAfter() const;

                    /**
                     * 设置证书失效时间
                     * @param _notAfter 证书失效时间
                     * 
                     */
                    void SetNotAfter(const int64_t& _notAfter);

                    /**
                     * 判断参数 NotAfter 是否已赋值
                     * @return NotAfter 是否已赋值
                     * 
                     */
                    bool NotAfterHasBeenSet() const;

                    /**
                     * 获取证书颁发者名称
                     * @return IssuerCommonName 证书颁发者名称
                     * 
                     */
                    std::string GetIssuerCommonName() const;

                    /**
                     * 设置证书颁发者名称
                     * @param _issuerCommonName 证书颁发者名称
                     * 
                     */
                    void SetIssuerCommonName(const std::string& _issuerCommonName);

                    /**
                     * 判断参数 IssuerCommonName 是否已赋值
                     * @return IssuerCommonName 是否已赋值
                     * 
                     */
                    bool IssuerCommonNameHasBeenSet() const;

                private:

                    /**
                     * 证书序列号
                     */
                    std::string m_serialNumber;
                    bool m_serialNumberHasBeenSet;

                    /**
                     * 证书持有者名称
                     */
                    std::string m_commonName;
                    bool m_commonNameHasBeenSet;

                    /**
                     * 证书生效时间
                     */
                    int64_t m_notBefore;
                    bool m_notBeforeHasBeenSet;

                    /**
                     * 证书失效时间
                     */
                    int64_t m_notAfter;
                    bool m_notAfterHasBeenSet;

                    /**
                     * 证书颁发者名称
                     */
                    std::string m_issuerCommonName;
                    bool m_issuerCommonNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_SIGNCERTIFICATE_H_
