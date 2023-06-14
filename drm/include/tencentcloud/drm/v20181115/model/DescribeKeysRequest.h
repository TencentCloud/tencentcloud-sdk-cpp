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

#ifndef TENCENTCLOUD_DRM_V20181115_MODEL_DESCRIBEKEYSREQUEST_H_
#define TENCENTCLOUD_DRM_V20181115_MODEL_DESCRIBEKEYSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Drm
    {
        namespace V20181115
        {
            namespace Model
            {
                /**
                * DescribeKeys请求参数结构体
                */
                class DescribeKeysRequest : public AbstractModel
                {
                public:
                    DescribeKeysRequest();
                    ~DescribeKeysRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取使用的DRM方案类型，接口取值WIDEVINE、FAIRPLAY、NORMALAES。
                     * @return DrmType 使用的DRM方案类型，接口取值WIDEVINE、FAIRPLAY、NORMALAES。
                     * 
                     */
                    std::string GetDrmType() const;

                    /**
                     * 设置使用的DRM方案类型，接口取值WIDEVINE、FAIRPLAY、NORMALAES。
                     * @param _drmType 使用的DRM方案类型，接口取值WIDEVINE、FAIRPLAY、NORMALAES。
                     * 
                     */
                    void SetDrmType(const std::string& _drmType);

                    /**
                     * 判断参数 DrmType 是否已赋值
                     * @return DrmType 是否已赋值
                     * 
                     */
                    bool DrmTypeHasBeenSet() const;

                    /**
                     * 获取加密的track列表，接口取值VIDEO、AUDIO。
                     * @return Tracks 加密的track列表，接口取值VIDEO、AUDIO。
                     * 
                     */
                    std::vector<std::string> GetTracks() const;

                    /**
                     * 设置加密的track列表，接口取值VIDEO、AUDIO。
                     * @param _tracks 加密的track列表，接口取值VIDEO、AUDIO。
                     * 
                     */
                    void SetTracks(const std::vector<std::string>& _tracks);

                    /**
                     * 判断参数 Tracks 是否已赋值
                     * @return Tracks 是否已赋值
                     * 
                     */
                    bool TracksHasBeenSet() const;

                    /**
                     * 获取内容类型。接口取值VodVideo,LiveVideo
                     * @return ContentType 内容类型。接口取值VodVideo,LiveVideo
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置内容类型。接口取值VodVideo,LiveVideo
                     * @param _contentType 内容类型。接口取值VodVideo,LiveVideo
                     * 
                     */
                    void SetContentType(const std::string& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                    /**
                     * 获取Base64编码的Rsa公钥，用来加密出参中的SessionKey。
如果该参数为空，则出参中SessionKey为明文。
                     * @return RsaPublicKey Base64编码的Rsa公钥，用来加密出参中的SessionKey。
如果该参数为空，则出参中SessionKey为明文。
                     * 
                     */
                    std::string GetRsaPublicKey() const;

                    /**
                     * 设置Base64编码的Rsa公钥，用来加密出参中的SessionKey。
如果该参数为空，则出参中SessionKey为明文。
                     * @param _rsaPublicKey Base64编码的Rsa公钥，用来加密出参中的SessionKey。
如果该参数为空，则出参中SessionKey为明文。
                     * 
                     */
                    void SetRsaPublicKey(const std::string& _rsaPublicKey);

                    /**
                     * 判断参数 RsaPublicKey 是否已赋值
                     * @return RsaPublicKey 是否已赋值
                     * 
                     */
                    bool RsaPublicKeyHasBeenSet() const;

                    /**
                     * 获取一个加密内容的唯一标识。
如果该参数为空，则后台自动生成
                     * @return ContentId 一个加密内容的唯一标识。
如果该参数为空，则后台自动生成
                     * 
                     */
                    std::string GetContentId() const;

                    /**
                     * 设置一个加密内容的唯一标识。
如果该参数为空，则后台自动生成
                     * @param _contentId 一个加密内容的唯一标识。
如果该参数为空，则后台自动生成
                     * 
                     */
                    void SetContentId(const std::string& _contentId);

                    /**
                     * 判断参数 ContentId 是否已赋值
                     * @return ContentId 是否已赋值
                     * 
                     */
                    bool ContentIdHasBeenSet() const;

                private:

                    /**
                     * 使用的DRM方案类型，接口取值WIDEVINE、FAIRPLAY、NORMALAES。
                     */
                    std::string m_drmType;
                    bool m_drmTypeHasBeenSet;

                    /**
                     * 加密的track列表，接口取值VIDEO、AUDIO。
                     */
                    std::vector<std::string> m_tracks;
                    bool m_tracksHasBeenSet;

                    /**
                     * 内容类型。接口取值VodVideo,LiveVideo
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * Base64编码的Rsa公钥，用来加密出参中的SessionKey。
如果该参数为空，则出参中SessionKey为明文。
                     */
                    std::string m_rsaPublicKey;
                    bool m_rsaPublicKeyHasBeenSet;

                    /**
                     * 一个加密内容的唯一标识。
如果该参数为空，则后台自动生成
                     */
                    std::string m_contentId;
                    bool m_contentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DRM_V20181115_MODEL_DESCRIBEKEYSREQUEST_H_
