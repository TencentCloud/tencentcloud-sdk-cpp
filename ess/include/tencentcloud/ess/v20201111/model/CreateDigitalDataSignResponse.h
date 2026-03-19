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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEDIGITALDATASIGNRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEDIGITALDATASIGNRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/SignCertificate.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateDigitalDataSign返回参数结构体
                */
                class CreateDigitalDataSignResponse : public AbstractModel
                {
                public:
                    CreateDigitalDataSignResponse();
                    ~CreateDigitalDataSignResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取加签签名值
                     * @return SignValue 加签签名值
                     * 
                     */
                    std::string GetSignValue() const;

                    /**
                     * 判断参数 SignValue 是否已赋值
                     * @return SignValue 是否已赋值
                     * 
                     */
                    bool SignValueHasBeenSet() const;

                    /**
                     * 获取加签时间戳
                     * @return SignTimestamp 加签时间戳
                     * 
                     */
                    std::string GetSignTimestamp() const;

                    /**
                     * 判断参数 SignTimestamp 是否已赋值
                     * @return SignTimestamp 是否已赋值
                     * 
                     */
                    bool SignTimestampHasBeenSet() const;

                    /**
                     * 获取签署证书信息
                     * @return Certificate 签署证书信息
                     * 
                     */
                    SignCertificate GetCertificate() const;

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     * 
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取签署算法
                     * @return SignAlgorithm 签署算法
                     * 
                     */
                    std::string GetSignAlgorithm() const;

                    /**
                     * 判断参数 SignAlgorithm 是否已赋值
                     * @return SignAlgorithm 是否已赋值
                     * 
                     */
                    bool SignAlgorithmHasBeenSet() const;

                private:

                    /**
                     * 加签签名值
                     */
                    std::string m_signValue;
                    bool m_signValueHasBeenSet;

                    /**
                     * 加签时间戳
                     */
                    std::string m_signTimestamp;
                    bool m_signTimestampHasBeenSet;

                    /**
                     * 签署证书信息
                     */
                    SignCertificate m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * 签署算法
                     */
                    std::string m_signAlgorithm;
                    bool m_signAlgorithmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEDIGITALDATASIGNRESPONSE_H_
