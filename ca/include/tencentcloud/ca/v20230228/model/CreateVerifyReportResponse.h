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

#ifndef TENCENTCLOUD_CA_V20230228_MODEL_CREATEVERIFYREPORTRESPONSE_H_
#define TENCENTCLOUD_CA_V20230228_MODEL_CREATEVERIFYREPORTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ca
    {
        namespace V20230228
        {
            namespace Model
            {
                /**
                * CreateVerifyReport返回参数结构体
                */
                class CreateVerifyReportResponse : public AbstractModel
                {
                public:
                    CreateVerifyReportResponse();
                    ~CreateVerifyReportResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取签名id
                     * @return SignatureId 签名id
                     * 
                     */
                    std::string GetSignatureId() const;

                    /**
                     * 判断参数 SignatureId 是否已赋值
                     * @return SignatureId 是否已赋值
                     * 
                     */
                    bool SignatureIdHasBeenSet() const;

                    /**
                     * 获取code
                     * @return Code code
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取message
                     * @return Message message
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 签名id
                     */
                    std::string m_signatureId;
                    bool m_signatureIdHasBeenSet;

                    /**
                     * code
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * message
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CA_V20230228_MODEL_CREATEVERIFYREPORTRESPONSE_H_
