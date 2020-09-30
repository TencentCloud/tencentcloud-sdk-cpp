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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_CERTIFICATEINFO_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_CERTIFICATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 认证资料信息
                */
                class CertificateInfo : public AbstractModel
                {
                public:
                    CertificateInfo();
                    ~CertificateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取证件号码。
                     * @return CertificateCode 证件号码。
                     */
                    std::string GetCertificateCode() const;

                    /**
                     * 设置证件号码。
                     * @param CertificateCode 证件号码。
                     */
                    void SetCertificateCode(const std::string& _certificateCode);

                    /**
                     * 判断参数 CertificateCode 是否已赋值
                     * @return CertificateCode 是否已赋值
                     */
                    bool CertificateCodeHasBeenSet() const;

                    /**
                     * 获取证件类型。
                     * @return CertificateType 证件类型。
                     */
                    std::string GetCertificateType() const;

                    /**
                     * 设置证件类型。
                     * @param CertificateType 证件类型。
                     */
                    void SetCertificateType(const std::string& _certificateType);

                    /**
                     * 判断参数 CertificateType 是否已赋值
                     * @return CertificateType 是否已赋值
                     */
                    bool CertificateTypeHasBeenSet() const;

                    /**
                     * 获取证件照片地址。
                     * @return ImgUrl 证件照片地址。
                     */
                    std::string GetImgUrl() const;

                    /**
                     * 设置证件照片地址。
                     * @param ImgUrl 证件照片地址。
                     */
                    void SetImgUrl(const std::string& _imgUrl);

                    /**
                     * 判断参数 ImgUrl 是否已赋值
                     * @return ImgUrl 是否已赋值
                     */
                    bool ImgUrlHasBeenSet() const;

                private:

                    /**
                     * 证件号码。
                     */
                    std::string m_certificateCode;
                    bool m_certificateCodeHasBeenSet;

                    /**
                     * 证件类型。
                     */
                    std::string m_certificateType;
                    bool m_certificateTypeHasBeenSet;

                    /**
                     * 证件照片地址。
                     */
                    std::string m_imgUrl;
                    bool m_imgUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_CERTIFICATEINFO_H_
