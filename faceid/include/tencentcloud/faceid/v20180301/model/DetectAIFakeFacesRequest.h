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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTAIFAKEFACESREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTAIFAKEFACESREQUEST_H_

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
                * DetectAIFakeFaces请求参数结构体
                */
                class DetectAIFakeFacesRequest : public AbstractModel
                {
                public:
                    DetectAIFakeFacesRequest();
                    ~DetectAIFakeFacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取传入需要进行检测的带有人脸的图片或视频（当前仅支持单人脸检测），使用base64编码的形式。
- 图片的Base64值：
建议整体图像480x640的分辨率，脸部 大小 100X100 以上。
Base64编码后的图片数据大小建议不超过3M、最大不可超过10M，仅支持jpg、png格式。
请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。

- 视频的Base64值：
Base64编码后的大小建议不超过8M、最大不可超过10M，支持mp4、avi、flv格式。
请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
视频时长最大支持20s，建议时长2～5s。
建议视频分辨率为480x640，帧率在25fps~30fps之间。

示例值：/9j/4AAQSkZJRg.....s97n//2Q==
                     * @return FaceInput 传入需要进行检测的带有人脸的图片或视频（当前仅支持单人脸检测），使用base64编码的形式。
- 图片的Base64值：
建议整体图像480x640的分辨率，脸部 大小 100X100 以上。
Base64编码后的图片数据大小建议不超过3M、最大不可超过10M，仅支持jpg、png格式。
请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。

- 视频的Base64值：
Base64编码后的大小建议不超过8M、最大不可超过10M，支持mp4、avi、flv格式。
请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
视频时长最大支持20s，建议时长2～5s。
建议视频分辨率为480x640，帧率在25fps~30fps之间。

示例值：/9j/4AAQSkZJRg.....s97n//2Q==
                     * 
                     */
                    std::string GetFaceInput() const;

                    /**
                     * 设置传入需要进行检测的带有人脸的图片或视频（当前仅支持单人脸检测），使用base64编码的形式。
- 图片的Base64值：
建议整体图像480x640的分辨率，脸部 大小 100X100 以上。
Base64编码后的图片数据大小建议不超过3M、最大不可超过10M，仅支持jpg、png格式。
请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。

- 视频的Base64值：
Base64编码后的大小建议不超过8M、最大不可超过10M，支持mp4、avi、flv格式。
请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
视频时长最大支持20s，建议时长2～5s。
建议视频分辨率为480x640，帧率在25fps~30fps之间。

示例值：/9j/4AAQSkZJRg.....s97n//2Q==
                     * @param _faceInput 传入需要进行检测的带有人脸的图片或视频（当前仅支持单人脸检测），使用base64编码的形式。
- 图片的Base64值：
建议整体图像480x640的分辨率，脸部 大小 100X100 以上。
Base64编码后的图片数据大小建议不超过3M、最大不可超过10M，仅支持jpg、png格式。
请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。

- 视频的Base64值：
Base64编码后的大小建议不超过8M、最大不可超过10M，支持mp4、avi、flv格式。
请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
视频时长最大支持20s，建议时长2～5s。
建议视频分辨率为480x640，帧率在25fps~30fps之间。

示例值：/9j/4AAQSkZJRg.....s97n//2Q==
                     * 
                     */
                    void SetFaceInput(const std::string& _faceInput);

                    /**
                     * 判断参数 FaceInput 是否已赋值
                     * @return FaceInput 是否已赋值
                     * 
                     */
                    bool FaceInputHasBeenSet() const;

                    /**
                     * 获取传入的类型。
- 取值范围：
1：传入的是图片类型。
2：传入的是视频类型。
其他：返回错误码InvalidParameter。
                     * @return FaceInputType 传入的类型。
- 取值范围：
1：传入的是图片类型。
2：传入的是视频类型。
其他：返回错误码InvalidParameter。
                     * 
                     */
                    int64_t GetFaceInputType() const;

                    /**
                     * 设置传入的类型。
- 取值范围：
1：传入的是图片类型。
2：传入的是视频类型。
其他：返回错误码InvalidParameter。
                     * @param _faceInputType 传入的类型。
- 取值范围：
1：传入的是图片类型。
2：传入的是视频类型。
其他：返回错误码InvalidParameter。
                     * 
                     */
                    void SetFaceInputType(const int64_t& _faceInputType);

                    /**
                     * 判断参数 FaceInputType 是否已赋值
                     * @return FaceInputType 是否已赋值
                     * 
                     */
                    bool FaceInputTypeHasBeenSet() const;

                    /**
                     * 获取是否需要对请求信息进行全包体加密。
- 支持的加密算法:AES-256-CBC、SM4-GCM。
- 有加密需求的用户可使用此参数，详情请点击左侧链接。
                     * @return Encryption 是否需要对请求信息进行全包体加密。
- 支持的加密算法:AES-256-CBC、SM4-GCM。
- 有加密需求的用户可使用此参数，详情请点击左侧链接。
                     * 
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 设置是否需要对请求信息进行全包体加密。
- 支持的加密算法:AES-256-CBC、SM4-GCM。
- 有加密需求的用户可使用此参数，详情请点击左侧链接。
                     * @param _encryption 是否需要对请求信息进行全包体加密。
- 支持的加密算法:AES-256-CBC、SM4-GCM。
- 有加密需求的用户可使用此参数，详情请点击左侧链接。
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
                     * 获取加密后的密文。
- 加密前的数据格式如下:{"FaceInput":"AAAAA","FaceInputType":1}。
                     * @return EncryptedBody 加密后的密文。
- 加密前的数据格式如下:{"FaceInput":"AAAAA","FaceInputType":1}。
                     * 
                     */
                    std::string GetEncryptedBody() const;

                    /**
                     * 设置加密后的密文。
- 加密前的数据格式如下:{"FaceInput":"AAAAA","FaceInputType":1}。
                     * @param _encryptedBody 加密后的密文。
- 加密前的数据格式如下:{"FaceInput":"AAAAA","FaceInputType":1}。
                     * 
                     */
                    void SetEncryptedBody(const std::string& _encryptedBody);

                    /**
                     * 判断参数 EncryptedBody 是否已赋值
                     * @return EncryptedBody 是否已赋值
                     * 
                     */
                    bool EncryptedBodyHasBeenSet() const;

                private:

                    /**
                     * 传入需要进行检测的带有人脸的图片或视频（当前仅支持单人脸检测），使用base64编码的形式。
- 图片的Base64值：
建议整体图像480x640的分辨率，脸部 大小 100X100 以上。
Base64编码后的图片数据大小建议不超过3M、最大不可超过10M，仅支持jpg、png格式。
请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。

- 视频的Base64值：
Base64编码后的大小建议不超过8M、最大不可超过10M，支持mp4、avi、flv格式。
请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
视频时长最大支持20s，建议时长2～5s。
建议视频分辨率为480x640，帧率在25fps~30fps之间。

示例值：/9j/4AAQSkZJRg.....s97n//2Q==
                     */
                    std::string m_faceInput;
                    bool m_faceInputHasBeenSet;

                    /**
                     * 传入的类型。
- 取值范围：
1：传入的是图片类型。
2：传入的是视频类型。
其他：返回错误码InvalidParameter。
                     */
                    int64_t m_faceInputType;
                    bool m_faceInputTypeHasBeenSet;

                    /**
                     * 是否需要对请求信息进行全包体加密。
- 支持的加密算法:AES-256-CBC、SM4-GCM。
- 有加密需求的用户可使用此参数，详情请点击左侧链接。
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * 加密后的密文。
- 加密前的数据格式如下:{"FaceInput":"AAAAA","FaceInputType":1}。
                     */
                    std::string m_encryptedBody;
                    bool m_encryptedBodyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTAIFAKEFACESREQUEST_H_
