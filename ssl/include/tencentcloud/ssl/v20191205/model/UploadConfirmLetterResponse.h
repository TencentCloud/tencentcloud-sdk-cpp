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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_UPLOADCONFIRMLETTERRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_UPLOADCONFIRMLETTERRESPONSE_H_

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
                * UploadConfirmLetter返回参数结构体
                */
                class UploadConfirmLetterResponse : public AbstractModel
                {
                public:
                    UploadConfirmLetterResponse();
                    ~UploadConfirmLetterResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取证书ID
                     * @return CertificateId 证书ID
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     * 
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取是否成功
                     * @return IsSuccess 是否成功
                     * 
                     */
                    bool GetIsSuccess() const;

                    /**
                     * 判断参数 IsSuccess 是否已赋值
                     * @return IsSuccess 是否已赋值
                     * 
                     */
                    bool IsSuccessHasBeenSet() const;

                private:

                    /**
                     * 证书ID
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * 是否成功
                     */
                    bool m_isSuccess;
                    bool m_isSuccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_UPLOADCONFIRMLETTERRESPONSE_H_
