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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEINTERFACEENCRYPTKEYV2RESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEINTERFACEENCRYPTKEYV2RESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeInterfaceEncryptKeyV2返回参数结构体
                */
                class DescribeInterfaceEncryptKeyV2Response : public AbstractModel
                {
                public:
                    DescribeInterfaceEncryptKeyV2Response();
                    ~DescribeInterfaceEncryptKeyV2Response() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>RSA 公钥，Base64 编码格式，用于前端加密敏感数据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicKey <p>RSA 公钥，Base64 编码格式，用于前端加密敏感数据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 判断参数 PublicKey 是否已赋值
                     * @return PublicKey 是否已赋值
                     * 
                     */
                    bool PublicKeyHasBeenSet() const;

                private:

                    /**
                     * <p>RSA 公钥，Base64 编码格式，用于前端加密敏感数据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEINTERFACEENCRYPTKEYV2RESPONSE_H_
