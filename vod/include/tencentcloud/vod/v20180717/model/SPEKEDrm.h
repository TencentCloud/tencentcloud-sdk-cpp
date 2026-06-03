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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SPEKEDRM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SPEKEDRM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 第三方DRM厂商加密信息。
                */
                class SPEKEDrm : public AbstractModel
                {
                public:
                    SPEKEDrm();
                    ~SPEKEDrm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>资源标记，该字段内容为用户自定义； 支持1-128个字符的数字、字母、下划线(_)、中划线(-)。 该字段对应Speke请求中的cid字段。 注：不同DRM厂商对该字段的限制有所区别（如：华曦达不支持该字段带_），具体规则请与DRM厂商进行确认。</p>
                     * @return ResourceId <p>资源标记，该字段内容为用户自定义； 支持1-128个字符的数字、字母、下划线(_)、中划线(-)。 该字段对应Speke请求中的cid字段。 注：不同DRM厂商对该字段的限制有所区别（如：华曦达不支持该字段带_），具体规则请与DRM厂商进行确认。</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>资源标记，该字段内容为用户自定义； 支持1-128个字符的数字、字母、下划线(_)、中划线(-)。 该字段对应Speke请求中的cid字段。 注：不同DRM厂商对该字段的限制有所区别（如：华曦达不支持该字段带_），具体规则请与DRM厂商进行确认。</p>
                     * @param _resourceId <p>资源标记，该字段内容为用户自定义； 支持1-128个字符的数字、字母、下划线(_)、中划线(-)。 该字段对应Speke请求中的cid字段。 注：不同DRM厂商对该字段的限制有所区别（如：华曦达不支持该字段带_），具体规则请与DRM厂商进行确认。</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>DRM厂商访问地址，该字段内容从DRM厂商获取。注: 不同DRM厂商对子流的数量限制不一样，如 PallyCon 限制不能超过5条子流，DRMtoday厂商最多仅支持9条子流加密</p>
                     * @return KeyServerUrl <p>DRM厂商访问地址，该字段内容从DRM厂商获取。注: 不同DRM厂商对子流的数量限制不一样，如 PallyCon 限制不能超过5条子流，DRMtoday厂商最多仅支持9条子流加密</p>
                     * 
                     */
                    std::string GetKeyServerUrl() const;

                    /**
                     * 设置<p>DRM厂商访问地址，该字段内容从DRM厂商获取。注: 不同DRM厂商对子流的数量限制不一样，如 PallyCon 限制不能超过5条子流，DRMtoday厂商最多仅支持9条子流加密</p>
                     * @param _keyServerUrl <p>DRM厂商访问地址，该字段内容从DRM厂商获取。注: 不同DRM厂商对子流的数量限制不一样，如 PallyCon 限制不能超过5条子流，DRMtoday厂商最多仅支持9条子流加密</p>
                     * 
                     */
                    void SetKeyServerUrl(const std::string& _keyServerUrl);

                    /**
                     * 判断参数 KeyServerUrl 是否已赋值
                     * @return KeyServerUrl 是否已赋值
                     * 
                     */
                    bool KeyServerUrlHasBeenSet() const;

                    /**
                     * 获取<p>加密初始化向量(十六进制32字节字符串)，该字段内容为用户自定义。</p>
                     * @return Vector <p>加密初始化向量(十六进制32字节字符串)，该字段内容为用户自定义。</p>
                     * 
                     */
                    std::string GetVector() const;

                    /**
                     * 设置<p>加密初始化向量(十六进制32字节字符串)，该字段内容为用户自定义。</p>
                     * @param _vector <p>加密初始化向量(十六进制32字节字符串)，该字段内容为用户自定义。</p>
                     * 
                     */
                    void SetVector(const std::string& _vector);

                    /**
                     * 判断参数 Vector 是否已赋值
                     * @return Vector 是否已赋值
                     * 
                     */
                    bool VectorHasBeenSet() const;

                    /**
                     * 获取<p>加密方式，可选值：<br>cbcs：PlayReady，Widevine，FairPlay，Widevine+FairPlay，Widevine+PlayReady，PlayReady+FairPlay，Widevine+PlayReady+FairPlay支持；<br>cenc：PlayReady，Widevine，Widevine+PlayReady支持；<br>若不填FairPlay 默认cbcs；<br>PlayReady，Widevine 默认cenc；<br>Widevine+FairPlay，PlayReady+FairPlay，Widevine+PlayReady+FairPlay默认cbcs；<br>Widevine+PlayReady默认cenc；</p>
                     * @return EncryptionMethod <p>加密方式，可选值：<br>cbcs：PlayReady，Widevine，FairPlay，Widevine+FairPlay，Widevine+PlayReady，PlayReady+FairPlay，Widevine+PlayReady+FairPlay支持；<br>cenc：PlayReady，Widevine，Widevine+PlayReady支持；<br>若不填FairPlay 默认cbcs；<br>PlayReady，Widevine 默认cenc；<br>Widevine+FairPlay，PlayReady+FairPlay，Widevine+PlayReady+FairPlay默认cbcs；<br>Widevine+PlayReady默认cenc；</p>
                     * 
                     */
                    std::string GetEncryptionMethod() const;

                    /**
                     * 设置<p>加密方式，可选值：<br>cbcs：PlayReady，Widevine，FairPlay，Widevine+FairPlay，Widevine+PlayReady，PlayReady+FairPlay，Widevine+PlayReady+FairPlay支持；<br>cenc：PlayReady，Widevine，Widevine+PlayReady支持；<br>若不填FairPlay 默认cbcs；<br>PlayReady，Widevine 默认cenc；<br>Widevine+FairPlay，PlayReady+FairPlay，Widevine+PlayReady+FairPlay默认cbcs；<br>Widevine+PlayReady默认cenc；</p>
                     * @param _encryptionMethod <p>加密方式，可选值：<br>cbcs：PlayReady，Widevine，FairPlay，Widevine+FairPlay，Widevine+PlayReady，PlayReady+FairPlay，Widevine+PlayReady+FairPlay支持；<br>cenc：PlayReady，Widevine，Widevine+PlayReady支持；<br>若不填FairPlay 默认cbcs；<br>PlayReady，Widevine 默认cenc；<br>Widevine+FairPlay，PlayReady+FairPlay，Widevine+PlayReady+FairPlay默认cbcs；<br>Widevine+PlayReady默认cenc；</p>
                     * 
                     */
                    void SetEncryptionMethod(const std::string& _encryptionMethod);

                    /**
                     * 判断参数 EncryptionMethod 是否已赋值
                     * @return EncryptionMethod 是否已赋值
                     * 
                     */
                    bool EncryptionMethodHasBeenSet() const;

                    /**
                     * 获取<p>子流加密规则，默认 preset0<br>preset0：全部子流使用同一个key加密；<br>preset1：每个子流使用不同的key加密；</p>
                     * @return EncryptionPreset <p>子流加密规则，默认 preset0<br>preset0：全部子流使用同一个key加密；<br>preset1：每个子流使用不同的key加密；</p>
                     * 
                     */
                    std::string GetEncryptionPreset() const;

                    /**
                     * 设置<p>子流加密规则，默认 preset0<br>preset0：全部子流使用同一个key加密；<br>preset1：每个子流使用不同的key加密；</p>
                     * @param _encryptionPreset <p>子流加密规则，默认 preset0<br>preset0：全部子流使用同一个key加密；<br>preset1：每个子流使用不同的key加密；</p>
                     * 
                     */
                    void SetEncryptionPreset(const std::string& _encryptionPreset);

                    /**
                     * 判断参数 EncryptionPreset 是否已赋值
                     * @return EncryptionPreset 是否已赋值
                     * 
                     */
                    bool EncryptionPresetHasBeenSet() const;

                    /**
                     * 获取<p>DRM厂商请求方式。</p><p>枚举值：</p><ul><li>POST： 大多数DRM厂商使用POST方式请求。</li><li>GET： 部分DRM厂商支持GET方式请求。使用该种方式请求时，需要在KeyServerUrl字段带上各项请求信息。</li></ul><p>默认值：POST</p>
                     * @return KeyAcquireMode <p>DRM厂商请求方式。</p><p>枚举值：</p><ul><li>POST： 大多数DRM厂商使用POST方式请求。</li><li>GET： 部分DRM厂商支持GET方式请求。使用该种方式请求时，需要在KeyServerUrl字段带上各项请求信息。</li></ul><p>默认值：POST</p>
                     * 
                     */
                    std::string GetKeyAcquireMode() const;

                    /**
                     * 设置<p>DRM厂商请求方式。</p><p>枚举值：</p><ul><li>POST： 大多数DRM厂商使用POST方式请求。</li><li>GET： 部分DRM厂商支持GET方式请求。使用该种方式请求时，需要在KeyServerUrl字段带上各项请求信息。</li></ul><p>默认值：POST</p>
                     * @param _keyAcquireMode <p>DRM厂商请求方式。</p><p>枚举值：</p><ul><li>POST： 大多数DRM厂商使用POST方式请求。</li><li>GET： 部分DRM厂商支持GET方式请求。使用该种方式请求时，需要在KeyServerUrl字段带上各项请求信息。</li></ul><p>默认值：POST</p>
                     * 
                     */
                    void SetKeyAcquireMode(const std::string& _keyAcquireMode);

                    /**
                     * 判断参数 KeyAcquireMode 是否已赋值
                     * @return KeyAcquireMode 是否已赋值
                     * 
                     */
                    bool KeyAcquireModeHasBeenSet() const;

                private:

                    /**
                     * <p>资源标记，该字段内容为用户自定义； 支持1-128个字符的数字、字母、下划线(_)、中划线(-)。 该字段对应Speke请求中的cid字段。 注：不同DRM厂商对该字段的限制有所区别（如：华曦达不支持该字段带_），具体规则请与DRM厂商进行确认。</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>DRM厂商访问地址，该字段内容从DRM厂商获取。注: 不同DRM厂商对子流的数量限制不一样，如 PallyCon 限制不能超过5条子流，DRMtoday厂商最多仅支持9条子流加密</p>
                     */
                    std::string m_keyServerUrl;
                    bool m_keyServerUrlHasBeenSet;

                    /**
                     * <p>加密初始化向量(十六进制32字节字符串)，该字段内容为用户自定义。</p>
                     */
                    std::string m_vector;
                    bool m_vectorHasBeenSet;

                    /**
                     * <p>加密方式，可选值：<br>cbcs：PlayReady，Widevine，FairPlay，Widevine+FairPlay，Widevine+PlayReady，PlayReady+FairPlay，Widevine+PlayReady+FairPlay支持；<br>cenc：PlayReady，Widevine，Widevine+PlayReady支持；<br>若不填FairPlay 默认cbcs；<br>PlayReady，Widevine 默认cenc；<br>Widevine+FairPlay，PlayReady+FairPlay，Widevine+PlayReady+FairPlay默认cbcs；<br>Widevine+PlayReady默认cenc；</p>
                     */
                    std::string m_encryptionMethod;
                    bool m_encryptionMethodHasBeenSet;

                    /**
                     * <p>子流加密规则，默认 preset0<br>preset0：全部子流使用同一个key加密；<br>preset1：每个子流使用不同的key加密；</p>
                     */
                    std::string m_encryptionPreset;
                    bool m_encryptionPresetHasBeenSet;

                    /**
                     * <p>DRM厂商请求方式。</p><p>枚举值：</p><ul><li>POST： 大多数DRM厂商使用POST方式请求。</li><li>GET： 部分DRM厂商支持GET方式请求。使用该种方式请求时，需要在KeyServerUrl字段带上各项请求信息。</li></ul><p>默认值：POST</p>
                     */
                    std::string m_keyAcquireMode;
                    bool m_keyAcquireModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SPEKEDRM_H_
