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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_IMAGERECOGNITIONV2REQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_IMAGERECOGNITIONV2REQUEST_H_

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
                * ImageRecognitionV2请求参数结构体
                */
                class ImageRecognitionV2Request : public AbstractModel
                {
                public:
                    ImageRecognitionV2Request();
                    ~ImageRecognitionV2Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>身份证号。</p>
                     * @return IdCard <p>身份证号。</p>
                     * 
                     */
                    std::string GetIdCard() const;

                    /**
                     * 设置<p>身份证号。</p>
                     * @param _idCard <p>身份证号。</p>
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
                     * 获取<p>姓名。</p><ul><li>中文请使用UTF-8编码。</li></ul>
                     * @return Name <p>姓名。</p><ul><li>中文请使用UTF-8编码。</li></ul>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>姓名。</p><ul><li>中文请使用UTF-8编码。</li></ul>
                     * @param _name <p>姓名。</p><ul><li>中文请使用UTF-8编码。</li></ul>
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
                     * 获取<p>敏感数据加密信息。</p><ul><li>对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。</li></ul>
                     * @return Encryption <p>敏感数据加密信息。</p><ul><li>对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。</li></ul>
                     * 
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 设置<p>敏感数据加密信息。</p><ul><li>对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。</li></ul>
                     * @param _encryption <p>敏感数据加密信息。</p><ul><li>对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。</li></ul>
                     * 
                     */
                    void SetEncryption(const Encryption& _encryption);

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                    /**
                     * 获取<p>自定义描述字段。</p><ul><li>用于描述调用业务信息，出参中将返回此描述字段。 </li><li>每个自定义描述字段支持[1,10]个字符。</li></ul>
                     * @return Extra <p>自定义描述字段。</p><ul><li>用于描述调用业务信息，出参中将返回此描述字段。 </li><li>每个自定义描述字段支持[1,10]个字符。</li></ul>
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置<p>自定义描述字段。</p><ul><li>用于描述调用业务信息，出参中将返回此描述字段。 </li><li>每个自定义描述字段支持[1,10]个字符。</li></ul>
                     * @param _extra <p>自定义描述字段。</p><ul><li>用于描述调用业务信息，出参中将返回此描述字段。 </li><li>每个自定义描述字段支持[1,10]个字符。</li></ul>
                     * 
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                private:

                    /**
                     * <p>身份证号。</p>
                     */
                    std::string m_idCard;
                    bool m_idCardHasBeenSet;

                    /**
                     * <p>姓名。</p><ul><li>中文请使用UTF-8编码。</li></ul>
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
                     * <p>敏感数据加密信息。</p><ul><li>对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。</li></ul>
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * <p>自定义描述字段。</p><ul><li>用于描述调用业务信息，出参中将返回此描述字段。 </li><li>每个自定义描述字段支持[1,10]个字符。</li></ul>
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_IMAGERECOGNITIONV2REQUEST_H_
