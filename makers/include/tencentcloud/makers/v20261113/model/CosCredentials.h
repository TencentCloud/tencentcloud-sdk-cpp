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

#ifndef TENCENTCLOUD_MAKERS_V20261113_MODEL_COSCREDENTIALS_H_
#define TENCENTCLOUD_MAKERS_V20261113_MODEL_COSCREDENTIALS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Makers
    {
        namespace V20261113
        {
            namespace Model
            {
                /**
                * COS 临时密钥
                */
                class CosCredentials : public AbstractModel
                {
                public:
                    CosCredentials();
                    ~CosCredentials() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>临时 SecretId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TmpSecretId <p>临时 SecretId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTmpSecretId() const;

                    /**
                     * 设置<p>临时 SecretId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tmpSecretId <p>临时 SecretId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTmpSecretId(const std::string& _tmpSecretId);

                    /**
                     * 判断参数 TmpSecretId 是否已赋值
                     * @return TmpSecretId 是否已赋值
                     * 
                     */
                    bool TmpSecretIdHasBeenSet() const;

                    /**
                     * 获取<p>临时 SecretKey</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TmpSecretKey <p>临时 SecretKey</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTmpSecretKey() const;

                    /**
                     * 设置<p>临时 SecretKey</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tmpSecretKey <p>临时 SecretKey</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTmpSecretKey(const std::string& _tmpSecretKey);

                    /**
                     * 判断参数 TmpSecretKey 是否已赋值
                     * @return TmpSecretKey 是否已赋值
                     * 
                     */
                    bool TmpSecretKeyHasBeenSet() const;

                    /**
                     * 获取<p>临时 Token</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Token <p>临时 Token</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置<p>临时 Token</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _token <p>临时 Token</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                private:

                    /**
                     * <p>临时 SecretId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tmpSecretId;
                    bool m_tmpSecretIdHasBeenSet;

                    /**
                     * <p>临时 SecretKey</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tmpSecretKey;
                    bool m_tmpSecretKeyHasBeenSet;

                    /**
                     * <p>临时 Token</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MAKERS_V20261113_MODEL_COSCREDENTIALS_H_
