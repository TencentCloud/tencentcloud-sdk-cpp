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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_APPLYUSERCERTRESPONSE_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_APPLYUSERCERTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * ApplyUserCert返回参数结构体
                */
                class ApplyUserCertResponse : public AbstractModel
                {
                public:
                    ApplyUserCertResponse();
                    ~ApplyUserCertResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取证书ID
                     * @return CertId 证书ID
                     * 
                     */
                    uint64_t GetCertId() const;

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取证书DN
                     * @return CertDn 证书DN
                     * 
                     */
                    std::string GetCertDn() const;

                    /**
                     * 判断参数 CertDn 是否已赋值
                     * @return CertDn 是否已赋值
                     * 
                     */
                    bool CertDnHasBeenSet() const;

                private:

                    /**
                     * 证书ID
                     */
                    uint64_t m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 证书DN
                     */
                    std::string m_certDn;
                    bool m_certDnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_APPLYUSERCERTRESPONSE_H_
