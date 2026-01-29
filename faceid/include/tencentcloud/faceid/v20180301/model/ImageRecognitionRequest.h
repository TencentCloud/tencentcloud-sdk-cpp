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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_IMAGERECOGNITIONREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_IMAGERECOGNITIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/Encryption.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * ImageRecognition请求参数结构体
                */
                class ImageRecognitionRequest : public AbstractModel
                {
                public:
                    ImageRecognitionRequest();
                    ~ImageRecognitionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>身份证号</p>
                     * @return IdCard <p>身份证号</p>
                     * 
                     */
                    std::string GetIdCard() const;

                    /**
                     * 设置<p>身份证号</p>
                     * @param _idCard <p>身份证号</p>
                     * 
                     */
                    void SetIdCard(const std::string& _idCard);

                    /**
                     * 判断参数 IdCard 是否已赋值
                     * @return IdCard 是否已赋值
                     * 
                     */
                    bool IdCardHasBeenSet() const;

                    /**
                     * 获取<p>姓名。中文请使用UTF-8编码。</p>
                     * @return Name <p>姓名。中文请使用UTF-8编码。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>姓名。中文请使用UTF-8编码。</p>
                     * @param _name <p>姓名。中文请使用UTF-8编码。</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>用于人脸比对的照片，图片的Base64值；<br>Base64编码后的图片数据大小不超过3M，仅支持jpg、png格式。<br>请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。</p>
                     * @return ImageBase64 <p>用于人脸比对的照片，图片的Base64值；<br>Base64编码后的图片数据大小不超过3M，仅支持jpg、png格式。<br>请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。</p>
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置<p>用于人脸比对的照片，图片的Base64值；<br>Base64编码后的图片数据大小不超过3M，仅支持jpg、png格式。<br>请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。</p>
                     * @param _imageBase64 <p>用于人脸比对的照片，图片的Base64值；<br>Base64编码后的图片数据大小不超过3M，仅支持jpg、png格式。<br>请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。</p>
                     * 
                     */
                    void SetImageBase64(const std::string& _imageBase64);

                    /**
                     * 判断参数 ImageBase64 是否已赋值
                     * @return ImageBase64 是否已赋值
                     * 
                     */
                    bool ImageBase64HasBeenSet() const;

                    /**
                     * 获取<p>本接口不需要传递此参数。</p>
                     * @return Optional <p>本接口不需要传递此参数。</p>
                     * 
                     */
                    std::string GetOptional() const;

                    /**
                     * 设置<p>本接口不需要传递此参数。</p>
                     * @param _optional <p>本接口不需要传递此参数。</p>
                     * 
                     */
                    void SetOptional(const std::string& _optional);

                    /**
                     * 判断参数 Optional 是否已赋值
                     * @return Optional 是否已赋值
                     * 
                     */
                    bool OptionalHasBeenSet() const;

                    /**
                     * 获取<p>敏感数据加密信息。对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。</p>
                     * @return Encryption <p>敏感数据加密信息。对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。</p>
                     * 
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 设置<p>敏感数据加密信息。对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。</p>
                     * @param _encryption <p>敏感数据加密信息。对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。</p>
                     * 
                     */
                    void SetEncryption(const Encryption& _encryption);

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                private:

                    /**
                     * <p>身份证号</p>
                     */
                    std::string m_idCard;
                    bool m_idCardHasBeenSet;

                    /**
                     * <p>姓名。中文请使用UTF-8编码。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>用于人脸比对的照片，图片的Base64值；<br>Base64编码后的图片数据大小不超过3M，仅支持jpg、png格式。<br>请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。</p>
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * <p>本接口不需要传递此参数。</p>
                     */
                    std::string m_optional;
                    bool m_optionalHasBeenSet;

                    /**
                     * <p>敏感数据加密信息。对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。</p>
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_IMAGERECOGNITIONREQUEST_H_
