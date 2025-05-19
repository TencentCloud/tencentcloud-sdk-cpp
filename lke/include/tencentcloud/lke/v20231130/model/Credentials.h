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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CREDENTIALS_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CREDENTIALS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 临时密钥结构
                */
                class Credentials : public AbstractModel
                {
                public:
                    Credentials();
                    ~Credentials() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取token
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Token token
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置token
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _token token
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

                    /**
                     * 获取临时证书密钥ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TmpSecretId 临时证书密钥ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTmpSecretId() const;

                    /**
                     * 设置临时证书密钥ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tmpSecretId 临时证书密钥ID
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
                     * 获取临时证书密钥Key
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TmpSecretKey 临时证书密钥Key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTmpSecretKey() const;

                    /**
                     * 设置临时证书密钥Key
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tmpSecretKey 临时证书密钥Key
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
                     * 获取临时证书appid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 临时证书appid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置临时证书appid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId 临时证书appid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                private:

                    /**
                     * token
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * 临时证书密钥ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tmpSecretId;
                    bool m_tmpSecretIdHasBeenSet;

                    /**
                     * 临时证书密钥Key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tmpSecretKey;
                    bool m_tmpSecretKeyHasBeenSet;

                    /**
                     * 临时证书appid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CREDENTIALS_H_
