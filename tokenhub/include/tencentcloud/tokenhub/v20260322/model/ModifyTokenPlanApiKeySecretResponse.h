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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODIFYTOKENPLANAPIKEYSECRETRESPONSE_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODIFYTOKENPLANAPIKEYSECRETRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * ModifyTokenPlanApiKeySecret返回参数结构体
                */
                class ModifyTokenPlanApiKeySecretResponse : public AbstractModel
                {
                public:
                    ModifyTokenPlanApiKeySecretResponse();
                    ~ModifyTokenPlanApiKeySecretResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取API Key ID。
                     * @return ApiKeyId API Key ID。
                     * 
                     */
                    std::string GetApiKeyId() const;

                    /**
                     * 判断参数 ApiKeyId 是否已赋值
                     * @return ApiKeyId 是否已赋值
                     * 
                     */
                    bool ApiKeyIdHasBeenSet() const;

                    /**
                     * 获取重置后的密钥版本号。
                     * @return KeyVersion 重置后的密钥版本号。
                     * 
                     */
                    int64_t GetKeyVersion() const;

                    /**
                     * 判断参数 KeyVersion 是否已赋值
                     * @return KeyVersion 是否已赋值
                     * 
                     */
                    bool KeyVersionHasBeenSet() const;

                private:

                    /**
                     * API Key ID。
                     */
                    std::string m_apiKeyId;
                    bool m_apiKeyIdHasBeenSet;

                    /**
                     * 重置后的密钥版本号。
                     */
                    int64_t m_keyVersion;
                    bool m_keyVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODIFYTOKENPLANAPIKEYSECRETRESPONSE_H_
