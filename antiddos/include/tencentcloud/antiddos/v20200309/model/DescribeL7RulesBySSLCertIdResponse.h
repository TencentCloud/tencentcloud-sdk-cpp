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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEL7RULESBYSSLCERTIDRESPONSE_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEL7RULESBYSSLCERTIDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/CertIdInsL7Rules.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeL7RulesBySSLCertId返回参数结构体
                */
                class DescribeL7RulesBySSLCertIdResponse : public AbstractModel
                {
                public:
                    DescribeL7RulesBySSLCertIdResponse();
                    ~DescribeL7RulesBySSLCertIdResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取证书规则集合
                     * @return CertSet 证书规则集合
                     * 
                     */
                    std::vector<CertIdInsL7Rules> GetCertSet() const;

                    /**
                     * 判断参数 CertSet 是否已赋值
                     * @return CertSet 是否已赋值
                     * 
                     */
                    bool CertSetHasBeenSet() const;

                private:

                    /**
                     * 证书规则集合
                     */
                    std::vector<CertIdInsL7Rules> m_certSet;
                    bool m_certSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEL7RULESBYSSLCERTIDRESPONSE_H_
