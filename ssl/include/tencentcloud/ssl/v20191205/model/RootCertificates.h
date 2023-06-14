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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_ROOTCERTIFICATES_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_ROOTCERTIFICATES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 根证书
                */
                class RootCertificates : public AbstractModel
                {
                public:
                    RootCertificates();
                    ~RootCertificates() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取国密签名证书
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sign 国密签名证书
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSign() const;

                    /**
                     * 设置国密签名证书
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sign 国密签名证书
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSign(const std::string& _sign);

                    /**
                     * 判断参数 Sign 是否已赋值
                     * @return Sign 是否已赋值
                     * 
                     */
                    bool SignHasBeenSet() const;

                    /**
                     * 获取国密加密证书
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Encrypt 国密加密证书
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEncrypt() const;

                    /**
                     * 设置国密加密证书
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _encrypt 国密加密证书
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEncrypt(const std::string& _encrypt);

                    /**
                     * 判断参数 Encrypt 是否已赋值
                     * @return Encrypt 是否已赋值
                     * 
                     */
                    bool EncryptHasBeenSet() const;

                    /**
                     * 获取标准证书
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Standard 标准证书
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStandard() const;

                    /**
                     * 设置标准证书
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _standard 标准证书
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStandard(const std::string& _standard);

                    /**
                     * 判断参数 Standard 是否已赋值
                     * @return Standard 是否已赋值
                     * 
                     */
                    bool StandardHasBeenSet() const;

                private:

                    /**
                     * 国密签名证书
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sign;
                    bool m_signHasBeenSet;

                    /**
                     * 国密加密证书
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_encrypt;
                    bool m_encryptHasBeenSet;

                    /**
                     * 标准证书
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_standard;
                    bool m_standardHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_ROOTCERTIFICATES_H_
