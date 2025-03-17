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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_REVOKECERTIFICATERESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_REVOKECERTIFICATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/RevokeDomainValidateAuths.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * RevokeCertificate返回参数结构体
                */
                class RevokeCertificateResponse : public AbstractModel
                {
                public:
                    RevokeCertificateResponse();
                    ~RevokeCertificateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取吊销证书域名验证信息。
                     * @return RevokeDomainValidateAuths 吊销证书域名验证信息。
                     * 
                     */
                    std::vector<RevokeDomainValidateAuths> GetRevokeDomainValidateAuths() const;

                    /**
                     * 判断参数 RevokeDomainValidateAuths 是否已赋值
                     * @return RevokeDomainValidateAuths 是否已赋值
                     * 
                     */
                    bool RevokeDomainValidateAuthsHasBeenSet() const;

                private:

                    /**
                     * 吊销证书域名验证信息。
                     */
                    std::vector<RevokeDomainValidateAuths> m_revokeDomainValidateAuths;
                    bool m_revokeDomainValidateAuthsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_REVOKECERTIFICATERESPONSE_H_
