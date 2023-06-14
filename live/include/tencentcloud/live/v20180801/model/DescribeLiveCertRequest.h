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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVECERTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVECERTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveCert请求参数结构体
                */
                class DescribeLiveCertRequest : public AbstractModel
                {
                public:
                    DescribeLiveCertRequest();
                    ~DescribeLiveCertRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DescribeLiveCerts接口获取到的证书Id。
                     * @return CertId DescribeLiveCerts接口获取到的证书Id。
                     * 
                     */
                    int64_t GetCertId() const;

                    /**
                     * 设置DescribeLiveCerts接口获取到的证书Id。
                     * @param _certId DescribeLiveCerts接口获取到的证书Id。
                     * 
                     */
                    void SetCertId(const int64_t& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                private:

                    /**
                     * DescribeLiveCerts接口获取到的证书Id。
                     */
                    int64_t m_certId;
                    bool m_certIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVECERTREQUEST_H_
