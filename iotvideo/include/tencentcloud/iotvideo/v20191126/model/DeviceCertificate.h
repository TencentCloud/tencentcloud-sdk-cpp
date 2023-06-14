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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DEVICECERTIFICATE_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DEVICECERTIFICATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * 设备证书及密钥
                */
                class DeviceCertificate : public AbstractModel
                {
                public:
                    DeviceCertificate();
                    ~DeviceCertificate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备TID
                     * @return Tid 设备TID
                     * 
                     */
                    std::string GetTid() const;

                    /**
                     * 设置设备TID
                     * @param _tid 设备TID
                     * 
                     */
                    void SetTid(const std::string& _tid);

                    /**
                     * 判断参数 Tid 是否已赋值
                     * @return Tid 是否已赋值
                     * 
                     */
                    bool TidHasBeenSet() const;

                    /**
                     * 获取设备初始证书信息，base64编码
                     * @return Certificate 设备初始证书信息，base64编码
                     * 
                     */
                    std::string GetCertificate() const;

                    /**
                     * 设置设备初始证书信息，base64编码
                     * @param _certificate 设备初始证书信息，base64编码
                     * 
                     */
                    void SetCertificate(const std::string& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     * 
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取设备私钥下载地址
                     * @return WhiteBoxSoUrl 设备私钥下载地址
                     * 
                     */
                    std::string GetWhiteBoxSoUrl() const;

                    /**
                     * 设置设备私钥下载地址
                     * @param _whiteBoxSoUrl 设备私钥下载地址
                     * 
                     */
                    void SetWhiteBoxSoUrl(const std::string& _whiteBoxSoUrl);

                    /**
                     * 判断参数 WhiteBoxSoUrl 是否已赋值
                     * @return WhiteBoxSoUrl 是否已赋值
                     * 
                     */
                    bool WhiteBoxSoUrlHasBeenSet() const;

                private:

                    /**
                     * 设备TID
                     */
                    std::string m_tid;
                    bool m_tidHasBeenSet;

                    /**
                     * 设备初始证书信息，base64编码
                     */
                    std::string m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * 设备私钥下载地址
                     */
                    std::string m_whiteBoxSoUrl;
                    bool m_whiteBoxSoUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DEVICECERTIFICATE_H_
