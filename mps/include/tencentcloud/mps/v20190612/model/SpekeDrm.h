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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SPEKEDRM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SPEKEDRM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * FairPlay，WideVine，PlayReady 等Drm加密方式。
                */
                class SpekeDrm : public AbstractModel
                {
                public:
                    SpekeDrm();
                    ~SpekeDrm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源标记，该字段内容为用户自定义；
支持1-128个字符的数字、字母、下划线(`_`)、中划线(-)。
该字段对应Speke请求中的cid字段。
注：不同DRM厂商对该字段的限制有所区别（如：华曦达不支持该字段带`_`），具体规则请与DRM厂商进行确认。
                     * @return ResourceId 资源标记，该字段内容为用户自定义；
支持1-128个字符的数字、字母、下划线(`_`)、中划线(-)。
该字段对应Speke请求中的cid字段。
注：不同DRM厂商对该字段的限制有所区别（如：华曦达不支持该字段带`_`），具体规则请与DRM厂商进行确认。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源标记，该字段内容为用户自定义；
支持1-128个字符的数字、字母、下划线(`_`)、中划线(-)。
该字段对应Speke请求中的cid字段。
注：不同DRM厂商对该字段的限制有所区别（如：华曦达不支持该字段带`_`），具体规则请与DRM厂商进行确认。
                     * @param _resourceId 资源标记，该字段内容为用户自定义；
支持1-128个字符的数字、字母、下划线(`_`)、中划线(-)。
该字段对应Speke请求中的cid字段。
注：不同DRM厂商对该字段的限制有所区别（如：华曦达不支持该字段带`_`），具体规则请与DRM厂商进行确认。
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
                     * 获取DRM厂商访问地址，该字段内容从DRM厂商获取。

注: 不同DRM厂商对子流的数量限制不一样，如 PallyCon 限制不能超过5条子流，DRMtoday厂商最多仅支持9条子流加密
                     * @return KeyServerUrl DRM厂商访问地址，该字段内容从DRM厂商获取。

注: 不同DRM厂商对子流的数量限制不一样，如 PallyCon 限制不能超过5条子流，DRMtoday厂商最多仅支持9条子流加密
                     * 
                     */
                    std::string GetKeyServerUrl() const;

                    /**
                     * 设置DRM厂商访问地址，该字段内容从DRM厂商获取。

注: 不同DRM厂商对子流的数量限制不一样，如 PallyCon 限制不能超过5条子流，DRMtoday厂商最多仅支持9条子流加密
                     * @param _keyServerUrl DRM厂商访问地址，该字段内容从DRM厂商获取。

注: 不同DRM厂商对子流的数量限制不一样，如 PallyCon 限制不能超过5条子流，DRMtoday厂商最多仅支持9条子流加密
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
                     * 获取加密初始化向量(十六进制32字节字符串)，该字段内容为用户自定义。
                     * @return Vector 加密初始化向量(十六进制32字节字符串)，该字段内容为用户自定义。
                     * 
                     */
                    std::string GetVector() const;

                    /**
                     * 设置加密初始化向量(十六进制32字节字符串)，该字段内容为用户自定义。
                     * @param _vector 加密初始化向量(十六进制32字节字符串)，该字段内容为用户自定义。
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
                     * 获取加密方式，可选值：
cbcs：PlayReady，Widevine，FairPlay，WideVine+FairPlay，Widevine+Playready，Playready+Fairplay，Widevine+Playready+Fairplay支持；
cenc：PlayReady，Widevine，Widevine+Playready支持；

若不填
FairPlay 默认cbcs;
PlayReady，Widevine 默认cenc;
WideVine+FairPlay，Playready+Fairplay，Widevine+Playready+Fairplay默认cbcs;
Widevine+Playready默认cenc;
                     * @return EncryptionMethod 加密方式，可选值：
cbcs：PlayReady，Widevine，FairPlay，WideVine+FairPlay，Widevine+Playready，Playready+Fairplay，Widevine+Playready+Fairplay支持；
cenc：PlayReady，Widevine，Widevine+Playready支持；

若不填
FairPlay 默认cbcs;
PlayReady，Widevine 默认cenc;
WideVine+FairPlay，Playready+Fairplay，Widevine+Playready+Fairplay默认cbcs;
Widevine+Playready默认cenc;
                     * 
                     */
                    std::string GetEncryptionMethod() const;

                    /**
                     * 设置加密方式，可选值：
cbcs：PlayReady，Widevine，FairPlay，WideVine+FairPlay，Widevine+Playready，Playready+Fairplay，Widevine+Playready+Fairplay支持；
cenc：PlayReady，Widevine，Widevine+Playready支持；

若不填
FairPlay 默认cbcs;
PlayReady，Widevine 默认cenc;
WideVine+FairPlay，Playready+Fairplay，Widevine+Playready+Fairplay默认cbcs;
Widevine+Playready默认cenc;
                     * @param _encryptionMethod 加密方式，可选值：
cbcs：PlayReady，Widevine，FairPlay，WideVine+FairPlay，Widevine+Playready，Playready+Fairplay，Widevine+Playready+Fairplay支持；
cenc：PlayReady，Widevine，Widevine+Playready支持；

若不填
FairPlay 默认cbcs;
PlayReady，Widevine 默认cenc;
WideVine+FairPlay，Playready+Fairplay，Widevine+Playready+Fairplay默认cbcs;
Widevine+Playready默认cenc;
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
                     * 获取子流加密规则，默认 preset0
preset0：全部子流使用同一个key加密；
preset1：每个子流使用不同的key加密；

                     * @return EncryptionPreset 子流加密规则，默认 preset0
preset0：全部子流使用同一个key加密；
preset1：每个子流使用不同的key加密；

                     * 
                     */
                    std::string GetEncryptionPreset() const;

                    /**
                     * 设置子流加密规则，默认 preset0
preset0：全部子流使用同一个key加密；
preset1：每个子流使用不同的key加密；

                     * @param _encryptionPreset 子流加密规则，默认 preset0
preset0：全部子流使用同一个key加密；
preset1：每个子流使用不同的key加密；

                     * 
                     */
                    void SetEncryptionPreset(const std::string& _encryptionPreset);

                    /**
                     * 判断参数 EncryptionPreset 是否已赋值
                     * @return EncryptionPreset 是否已赋值
                     * 
                     */
                    bool EncryptionPresetHasBeenSet() const;

                private:

                    /**
                     * 资源标记，该字段内容为用户自定义；
支持1-128个字符的数字、字母、下划线(`_`)、中划线(-)。
该字段对应Speke请求中的cid字段。
注：不同DRM厂商对该字段的限制有所区别（如：华曦达不支持该字段带`_`），具体规则请与DRM厂商进行确认。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * DRM厂商访问地址，该字段内容从DRM厂商获取。

注: 不同DRM厂商对子流的数量限制不一样，如 PallyCon 限制不能超过5条子流，DRMtoday厂商最多仅支持9条子流加密
                     */
                    std::string m_keyServerUrl;
                    bool m_keyServerUrlHasBeenSet;

                    /**
                     * 加密初始化向量(十六进制32字节字符串)，该字段内容为用户自定义。
                     */
                    std::string m_vector;
                    bool m_vectorHasBeenSet;

                    /**
                     * 加密方式，可选值：
cbcs：PlayReady，Widevine，FairPlay，WideVine+FairPlay，Widevine+Playready，Playready+Fairplay，Widevine+Playready+Fairplay支持；
cenc：PlayReady，Widevine，Widevine+Playready支持；

若不填
FairPlay 默认cbcs;
PlayReady，Widevine 默认cenc;
WideVine+FairPlay，Playready+Fairplay，Widevine+Playready+Fairplay默认cbcs;
Widevine+Playready默认cenc;
                     */
                    std::string m_encryptionMethod;
                    bool m_encryptionMethodHasBeenSet;

                    /**
                     * 子流加密规则，默认 preset0
preset0：全部子流使用同一个key加密；
preset1：每个子流使用不同的key加密；

                     */
                    std::string m_encryptionPreset;
                    bool m_encryptionPresetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SPEKEDRM_H_
