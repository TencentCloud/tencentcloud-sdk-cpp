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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_UPLOADREVOKELETTERREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_UPLOADREVOKELETTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * UploadRevokeLetter请求参数结构体
                */
                class UploadRevokeLetterRequest : public AbstractModel
                {
                public:
                    UploadRevokeLetterRequest();
                    ~UploadRevokeLetterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取证书 ID。
                     * @return CertificateId 证书 ID。
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置证书 ID。
                     * @param _certificateId 证书 ID。
                     * 
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     * 
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取base64编码后的证书确认函文件，格式应为jpg、jpeg、png、pdf，大小应在1kb与1.4M之间。
                     * @return RevokeLetter base64编码后的证书确认函文件，格式应为jpg、jpeg、png、pdf，大小应在1kb与1.4M之间。
                     * 
                     */
                    std::string GetRevokeLetter() const;

                    /**
                     * 设置base64编码后的证书确认函文件，格式应为jpg、jpeg、png、pdf，大小应在1kb与1.4M之间。
                     * @param _revokeLetter base64编码后的证书确认函文件，格式应为jpg、jpeg、png、pdf，大小应在1kb与1.4M之间。
                     * 
                     */
                    void SetRevokeLetter(const std::string& _revokeLetter);

                    /**
                     * 判断参数 RevokeLetter 是否已赋值
                     * @return RevokeLetter 是否已赋值
                     * 
                     */
                    bool RevokeLetterHasBeenSet() const;

                private:

                    /**
                     * 证书 ID。
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * base64编码后的证书确认函文件，格式应为jpg、jpeg、png、pdf，大小应在1kb与1.4M之间。
                     */
                    std::string m_revokeLetter;
                    bool m_revokeLetterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_UPLOADREVOKELETTERREQUEST_H_
