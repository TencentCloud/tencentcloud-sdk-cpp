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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPERSONAUTHCERTIFICATEIMAGERESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPERSONAUTHCERTIFICATEIMAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreatePersonAuthCertificateImage返回参数结构体
                */
                class CreatePersonAuthCertificateImageResponse : public AbstractModel
                {
                public:
                    CreatePersonAuthCertificateImageResponse();
                    ~CreatePersonAuthCertificateImageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取个人用户证明证书的下载链接
                     * @return AuthCertUrl 个人用户证明证书的下载链接
                     * 
                     */
                    std::string GetAuthCertUrl() const;

                    /**
                     * 判断参数 AuthCertUrl 是否已赋值
                     * @return AuthCertUrl 是否已赋值
                     * 
                     */
                    bool AuthCertUrlHasBeenSet() const;

                    /**
                     * 获取证书图片上的证书编号，20位数字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageCertId 证书图片上的证书编号，20位数字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImageCertId() const;

                    /**
                     * 判断参数 ImageCertId 是否已赋值
                     * @return ImageCertId 是否已赋值
                     * 
                     */
                    bool ImageCertIdHasBeenSet() const;

                    /**
                     * 获取图片证明对应的CA证书序列号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SerialNumber 图片证明对应的CA证书序列号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSerialNumber() const;

                    /**
                     * 判断参数 SerialNumber 是否已赋值
                     * @return SerialNumber 是否已赋值
                     * 
                     */
                    bool SerialNumberHasBeenSet() const;

                    /**
                     * 获取CA证书颁发时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValidFrom CA证书颁发时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetValidFrom() const;

                    /**
                     * 判断参数 ValidFrom 是否已赋值
                     * @return ValidFrom 是否已赋值
                     * 
                     */
                    bool ValidFromHasBeenSet() const;

                    /**
                     * 获取CA证书有效截止时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValidTo CA证书有效截止时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetValidTo() const;

                    /**
                     * 判断参数 ValidTo 是否已赋值
                     * @return ValidTo 是否已赋值
                     * 
                     */
                    bool ValidToHasBeenSet() const;

                private:

                    /**
                     * 个人用户证明证书的下载链接
                     */
                    std::string m_authCertUrl;
                    bool m_authCertUrlHasBeenSet;

                    /**
                     * 证书图片上的证书编号，20位数字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imageCertId;
                    bool m_imageCertIdHasBeenSet;

                    /**
                     * 图片证明对应的CA证书序列号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serialNumber;
                    bool m_serialNumberHasBeenSet;

                    /**
                     * CA证书颁发时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_validFrom;
                    bool m_validFromHasBeenSet;

                    /**
                     * CA证书有效截止时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_validTo;
                    bool m_validToHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPERSONAUTHCERTIFICATEIMAGERESPONSE_H_
