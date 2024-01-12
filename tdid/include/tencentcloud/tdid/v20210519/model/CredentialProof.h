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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_CREDENTIALPROOF_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_CREDENTIALPROOF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * 可验证凭证证明信息
                */
                class CredentialProof : public AbstractModel
                {
                public:
                    CredentialProof();
                    ~CredentialProof() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可验证凭证内容
                     * @return Credential 可验证凭证内容
                     * 
                     */
                    std::string GetCredential() const;

                    /**
                     * 设置可验证凭证内容
                     * @param _credential 可验证凭证内容
                     * 
                     */
                    void SetCredential(const std::string& _credential);

                    /**
                     * 判断参数 Credential 是否已赋值
                     * @return Credential 是否已赋值
                     * 
                     */
                    bool CredentialHasBeenSet() const;

                private:

                    /**
                     * 可验证凭证内容
                     */
                    std::string m_credential;
                    bool m_credentialHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_CREDENTIALPROOF_H_
