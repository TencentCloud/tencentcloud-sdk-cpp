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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SDMCDRMKEYPROVIDERINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SDMCDRMKEYPROVIDERINFO_H_

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
                * 华曦达（SDMC）相关的 DRM 密钥提供商信息。
                */
                class SDMCDrmKeyProviderInfo : public AbstractModel
                {
                public:
                    SDMCDrmKeyProviderInfo();
                    ~SDMCDrmKeyProviderInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取华曦达分配的用户 ID。最大长度为128个字符。
                     * @return Uid 华曦达分配的用户 ID。最大长度为128个字符。
                     * 
                     */
                    std::string GetUid() const;

                    /**
                     * 设置华曦达分配的用户 ID。最大长度为128个字符。
                     * @param _uid 华曦达分配的用户 ID。最大长度为128个字符。
                     * 
                     */
                    void SetUid(const std::string& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取华曦达分配的用户密钥 ID。最大长度为128个字符。
                     * @return SecretId 华曦达分配的用户密钥 ID。最大长度为128个字符。
                     * 
                     */
                    std::string GetSecretId() const;

                    /**
                     * 设置华曦达分配的用户密钥 ID。最大长度为128个字符。
                     * @param _secretId 华曦达分配的用户密钥 ID。最大长度为128个字符。
                     * 
                     */
                    void SetSecretId(const std::string& _secretId);

                    /**
                     * 判断参数 SecretId 是否已赋值
                     * @return SecretId 是否已赋值
                     * 
                     */
                    bool SecretIdHasBeenSet() const;

                    /**
                     * 获取华曦达分配的用户密钥内容。最大长度为128个字符。
                     * @return SecretKey 华曦达分配的用户密钥内容。最大长度为128个字符。
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置华曦达分配的用户密钥内容。最大长度为128个字符。
                     * @param _secretKey 华曦达分配的用户密钥内容。最大长度为128个字符。
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取华曦达分配的 FairPlay 证书地址。该地址需使用 HTTPS 协议，最大长度为1024个字符。
                     * @return FairPlayCertificateUrl 华曦达分配的 FairPlay 证书地址。该地址需使用 HTTPS 协议，最大长度为1024个字符。
                     * 
                     */
                    std::string GetFairPlayCertificateUrl() const;

                    /**
                     * 设置华曦达分配的 FairPlay 证书地址。该地址需使用 HTTPS 协议，最大长度为1024个字符。
                     * @param _fairPlayCertificateUrl 华曦达分配的 FairPlay 证书地址。该地址需使用 HTTPS 协议，最大长度为1024个字符。
                     * 
                     */
                    void SetFairPlayCertificateUrl(const std::string& _fairPlayCertificateUrl);

                    /**
                     * 判断参数 FairPlayCertificateUrl 是否已赋值
                     * @return FairPlayCertificateUrl 是否已赋值
                     * 
                     */
                    bool FairPlayCertificateUrlHasBeenSet() const;

                private:

                    /**
                     * 华曦达分配的用户 ID。最大长度为128个字符。
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * 华曦达分配的用户密钥 ID。最大长度为128个字符。
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * 华曦达分配的用户密钥内容。最大长度为128个字符。
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * 华曦达分配的 FairPlay 证书地址。该地址需使用 HTTPS 协议，最大长度为1024个字符。
                     */
                    std::string m_fairPlayCertificateUrl;
                    bool m_fairPlayCertificateUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SDMCDRMKEYPROVIDERINFO_H_
