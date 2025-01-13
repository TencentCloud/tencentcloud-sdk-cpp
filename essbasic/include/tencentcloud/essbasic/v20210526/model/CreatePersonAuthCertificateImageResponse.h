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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEPERSONAUTHCERTIFICATEIMAGERESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEPERSONAUTHCERTIFICATEIMAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
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
                     * 获取个人用户认证证书图片下载URL，`有效期为5分钟`，超过有效期后将无法再下载。
                     * @return AuthCertUrl 个人用户认证证书图片下载URL，`有效期为5分钟`，超过有效期后将无法再下载。
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
                     * 获取个人用户认证证书的编号, 为20位数字组成的字符串,  由腾讯电子签下发此编号 。该编号会合成到个人用户证书证明图片。注: `个人用户认证证书的编号和证明图片绑定, 获取新的证明图片编号会变动`
                     * @return ImageCertId 个人用户认证证书的编号, 为20位数字组成的字符串,  由腾讯电子签下发此编号 。该编号会合成到个人用户证书证明图片。注: `个人用户认证证书的编号和证明图片绑定, 获取新的证明图片编号会变动`
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
                     * 获取在数字证书申请过程中，系统会自动生成一个独一无二的序列号。请注意，当证书到期并自动续期时，该序列号将会发生变化。值得注意的是，此序列号不会被合成至个人用户证书的证明图片中。
                     * @return SerialNumber 在数字证书申请过程中，系统会自动生成一个独一无二的序列号。请注意，当证书到期并自动续期时，该序列号将会发生变化。值得注意的是，此序列号不会被合成至个人用户证书的证明图片中。
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
                     * 获取CA证书颁发时间，格式为Unix标准时间戳（秒）   该时间格式化后会合成到个人用户证书证明图片
                     * @return ValidFrom CA证书颁发时间，格式为Unix标准时间戳（秒）   该时间格式化后会合成到个人用户证书证明图片
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
                     * 获取CA证书有效截止时间，格式为Unix标准时间戳（秒）该时间格式化后会合成到个人用户证书证明图片
                     * @return ValidTo CA证书有效截止时间，格式为Unix标准时间戳（秒）该时间格式化后会合成到个人用户证书证明图片
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
                     * 个人用户认证证书图片下载URL，`有效期为5分钟`，超过有效期后将无法再下载。
                     */
                    std::string m_authCertUrl;
                    bool m_authCertUrlHasBeenSet;

                    /**
                     * 个人用户认证证书的编号, 为20位数字组成的字符串,  由腾讯电子签下发此编号 。该编号会合成到个人用户证书证明图片。注: `个人用户认证证书的编号和证明图片绑定, 获取新的证明图片编号会变动`
                     */
                    std::string m_imageCertId;
                    bool m_imageCertIdHasBeenSet;

                    /**
                     * 在数字证书申请过程中，系统会自动生成一个独一无二的序列号。请注意，当证书到期并自动续期时，该序列号将会发生变化。值得注意的是，此序列号不会被合成至个人用户证书的证明图片中。
                     */
                    std::string m_serialNumber;
                    bool m_serialNumberHasBeenSet;

                    /**
                     * CA证书颁发时间，格式为Unix标准时间戳（秒）   该时间格式化后会合成到个人用户证书证明图片
                     */
                    uint64_t m_validFrom;
                    bool m_validFromHasBeenSet;

                    /**
                     * CA证书有效截止时间，格式为Unix标准时间戳（秒）该时间格式化后会合成到个人用户证书证明图片
                     */
                    uint64_t m_validTo;
                    bool m_validToHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEPERSONAUTHCERTIFICATEIMAGERESPONSE_H_
