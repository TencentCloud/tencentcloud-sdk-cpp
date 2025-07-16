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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_REFRESHMULTIPATHGATEWAYSECRETKEYRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_REFRESHMULTIPATHGATEWAYSECRETKEYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * RefreshMultiPathGatewaySecretKey返回参数结构体
                */
                class RefreshMultiPathGatewaySecretKeyResponse : public AbstractModel
                {
                public:
                    RefreshMultiPathGatewaySecretKeyResponse();
                    ~RefreshMultiPathGatewaySecretKeyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取多通道安全加速网关接入密钥。
                     * @return SecretKey 多通道安全加速网关接入密钥。
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                private:

                    /**
                     * 多通道安全加速网关接入密钥。
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_REFRESHMULTIPATHGATEWAYSECRETKEYRESPONSE_H_
