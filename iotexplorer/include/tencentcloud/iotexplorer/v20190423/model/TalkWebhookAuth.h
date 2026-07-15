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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKWEBHOOKAUTH_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKWEBHOOKAUTH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * Webhook鉴权配置
                */
                class TalkWebhookAuth : public AbstractModel
                {
                public:
                    TalkWebhookAuth();
                    ~TalkWebhookAuth() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取鉴权类型：none、hmac、static_headers、bearer
                     * @return Type 鉴权类型：none、hmac、static_headers、bearer
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置鉴权类型：none、hmac、static_headers、bearer
                     * @param _type 鉴权类型：none、hmac、static_headers、bearer
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取HMAC签名密钥，Type=hmac时必填
                     * @return SignKey HMAC签名密钥，Type=hmac时必填
                     * 
                     */
                    std::string GetSignKey() const;

                    /**
                     * 设置HMAC签名密钥，Type=hmac时必填
                     * @param _signKey HMAC签名密钥，Type=hmac时必填
                     * 
                     */
                    void SetSignKey(const std::string& _signKey);

                    /**
                     * 判断参数 SignKey 是否已赋值
                     * @return SignKey 是否已赋值
                     * 
                     */
                    bool SignKeyHasBeenSet() const;

                    /**
                     * 获取静态鉴权请求头，JSON对象字符串，仅允许白名单header名
                     * @return Headers 静态鉴权请求头，JSON对象字符串，仅允许白名单header名
                     * 
                     */
                    std::string GetHeaders() const;

                    /**
                     * 设置静态鉴权请求头，JSON对象字符串，仅允许白名单header名
                     * @param _headers 静态鉴权请求头，JSON对象字符串，仅允许白名单header名
                     * 
                     */
                    void SetHeaders(const std::string& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                    /**
                     * 获取Bearer Token，Type=bearer时用于生成Authorization请求头
                     * @return BearerToken Bearer Token，Type=bearer时用于生成Authorization请求头
                     * 
                     */
                    std::string GetBearerToken() const;

                    /**
                     * 设置Bearer Token，Type=bearer时用于生成Authorization请求头
                     * @param _bearerToken Bearer Token，Type=bearer时用于生成Authorization请求头
                     * 
                     */
                    void SetBearerToken(const std::string& _bearerToken);

                    /**
                     * 判断参数 BearerToken 是否已赋值
                     * @return BearerToken 是否已赋值
                     * 
                     */
                    bool BearerTokenHasBeenSet() const;

                private:

                    /**
                     * 鉴权类型：none、hmac、static_headers、bearer
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * HMAC签名密钥，Type=hmac时必填
                     */
                    std::string m_signKey;
                    bool m_signKeyHasBeenSet;

                    /**
                     * 静态鉴权请求头，JSON对象字符串，仅允许白名单header名
                     */
                    std::string m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * Bearer Token，Type=bearer时用于生成Authorization请求头
                     */
                    std::string m_bearerToken;
                    bool m_bearerTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKWEBHOOKAUTH_H_
