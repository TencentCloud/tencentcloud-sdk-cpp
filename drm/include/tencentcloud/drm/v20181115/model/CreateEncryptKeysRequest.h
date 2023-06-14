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

#ifndef TENCENTCLOUD_DRM_V20181115_MODEL_CREATEENCRYPTKEYSREQUEST_H_
#define TENCENTCLOUD_DRM_V20181115_MODEL_CREATEENCRYPTKEYSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/drm/v20181115/model/KeyParam.h>


namespace TencentCloud
{
    namespace Drm
    {
        namespace V20181115
        {
            namespace Model
            {
                /**
                * CreateEncryptKeys请求参数结构体
                */
                class CreateEncryptKeysRequest : public AbstractModel
                {
                public:
                    CreateEncryptKeysRequest();
                    ~CreateEncryptKeysRequest() = default;
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
                     * 获取设置的加密密钥列表。
                     * @return Keys 设置的加密密钥列表。
                     * 
                     */
                    std::vector<KeyParam> GetKeys() const;

                    /**
                     * 设置设置的加密密钥列表。
                     * @param _keys 设置的加密密钥列表。
                     * 
                     */
                    void SetKeys(const std::vector<KeyParam>& _keys);

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     * 
                     */
                    bool KeysHasBeenSet() const;

                    /**
                     * 获取一个加密内容的唯一标识。
                     * @return ContentId 一个加密内容的唯一标识。
                     * 
                     */
                    std::string GetContentId() const;

                    /**
                     * 设置一个加密内容的唯一标识。
                     * @param _contentId 一个加密内容的唯一标识。
                     * 
                     */
                    void SetContentId(const std::string& _contentId);

                    /**
                     * 判断参数 ContentId 是否已赋值
                     * @return ContentId 是否已赋值
                     * 
                     */
                    bool ContentIdHasBeenSet() const;

                    /**
                     * 获取内容类型。接口取值VodVideo,LiveVideo。
                     * @return ContentType 内容类型。接口取值VodVideo,LiveVideo。
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置内容类型。接口取值VodVideo,LiveVideo。
                     * @param _contentType 内容类型。接口取值VodVideo,LiveVideo。
                     * 
                     */
                    void SetContentType(const std::string& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                private:

                    /**
                     * 使用的DRM方案类型，接口取值WIDEVINE、FAIRPLAY、NORMALAES。
                     */
                    std::string m_drmType;
                    bool m_drmTypeHasBeenSet;

                    /**
                     * 设置的加密密钥列表。
                     */
                    std::vector<KeyParam> m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * 一个加密内容的唯一标识。
                     */
                    std::string m_contentId;
                    bool m_contentIdHasBeenSet;

                    /**
                     * 内容类型。接口取值VodVideo,LiveVideo。
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DRM_V20181115_MODEL_CREATEENCRYPTKEYSREQUEST_H_
