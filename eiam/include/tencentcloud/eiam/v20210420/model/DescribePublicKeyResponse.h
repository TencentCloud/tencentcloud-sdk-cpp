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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEPUBLICKEYRESPONSE_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEPUBLICKEYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * DescribePublicKey返回参数结构体
                */
                class DescribePublicKeyResponse : public AbstractModel
                {
                public:
                    DescribePublicKeyResponse();
                    ~DescribePublicKeyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取jwt验证签名所用的公钥信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicKey jwt验证签名所用的公钥信息。
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

                    /**
                     * 获取jwt的密钥id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyId jwt的密钥id。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取应用ID，是应用的全局唯一标识。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationId 应用ID，是应用的全局唯一标识。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                private:

                    /**
                     * jwt验证签名所用的公钥信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                    /**
                     * jwt的密钥id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 应用ID，是应用的全局唯一标识。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEPUBLICKEYRESPONSE_H_
