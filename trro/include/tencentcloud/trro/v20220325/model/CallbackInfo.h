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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_CALLBACKINFO_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_CALLBACKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * 回调配置
                */
                class CallbackInfo : public AbstractModel
                {
                public:
                    CallbackInfo();
                    ~CallbackInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>回调地址</p>
                     * @return Url <p>回调地址</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>回调地址</p>
                     * @param _url <p>回调地址</p>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>回调签名密钥，用于回调请求的签名校验</p>
                     * @return Secret <p>回调签名密钥，用于回调请求的签名校验</p>
                     * 
                     */
                    std::string GetSecret() const;

                    /**
                     * 设置<p>回调签名密钥，用于回调请求的签名校验</p>
                     * @param _secret <p>回调签名密钥，用于回调请求的签名校验</p>
                     * 
                     */
                    void SetSecret(const std::string& _secret);

                    /**
                     * 判断参数 Secret 是否已赋值
                     * @return Secret 是否已赋值
                     * 
                     */
                    bool SecretHasBeenSet() const;

                private:

                    /**
                     * <p>回调地址</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>回调签名密钥，用于回调请求的签名校验</p>
                     */
                    std::string m_secret;
                    bool m_secretHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_CALLBACKINFO_H_
