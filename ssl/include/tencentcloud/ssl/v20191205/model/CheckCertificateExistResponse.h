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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CHECKCERTIFICATEEXISTRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CHECKCERTIFICATEEXISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * CheckCertificateExist返回参数结构体
                */
                class CheckCertificateExistResponse : public AbstractModel
                {
                public:
                    CheckCertificateExistResponse();
                    ~CheckCertificateExistResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取重复的证书ID
                     * @return RepeatCertId 重复的证书ID
                     * 
                     */
                    std::string GetRepeatCertId() const;

                    /**
                     * 判断参数 RepeatCertId 是否已赋值
                     * @return RepeatCertId 是否已赋值
                     * 
                     */
                    bool RepeatCertIdHasBeenSet() const;

                private:

                    /**
                     * 重复的证书ID
                     */
                    std::string m_repeatCertId;
                    bool m_repeatCertIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CHECKCERTIFICATEEXISTRESPONSE_H_
