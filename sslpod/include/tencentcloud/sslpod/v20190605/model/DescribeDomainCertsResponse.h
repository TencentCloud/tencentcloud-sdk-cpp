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

#ifndef TENCENTCLOUD_SSLPOD_V20190605_MODEL_DESCRIBEDOMAINCERTSRESPONSE_H_
#define TENCENTCLOUD_SSLPOD_V20190605_MODEL_DESCRIBEDOMAINCERTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sslpod/v20190605/model/CertInfo.h>


namespace TencentCloud
{
    namespace Sslpod
    {
        namespace V20190605
        {
            namespace Model
            {
                /**
                * DescribeDomainCerts返回参数结构体
                */
                class DescribeDomainCertsResponse : public AbstractModel
                {
                public:
                    DescribeDomainCertsResponse();
                    ~DescribeDomainCertsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取证书信息
                     * @return Data 证书信息
                     * 
                     */
                    std::vector<CertInfo> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 证书信息
                     */
                    std::vector<CertInfo> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSLPOD_V20190605_MODEL_DESCRIBEDOMAINCERTSRESPONSE_H_
