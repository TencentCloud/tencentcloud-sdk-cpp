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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CALLBACKINFO_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CALLBACKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 应用回调信息
                */
                class CallbackInfo : public AbstractModel
                {
                public:
                    CallbackInfo();
                    ~CallbackInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取回调url
                     * @return CallbackUrl 回调url
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置回调url
                     * @param CallbackUrl 回调url
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取回调加密key，已废弃
                     * @return Token 回调加密key，已废弃
                     */
                    std::string GetToken() const;

                    /**
                     * 设置回调加密key，已废弃
                     * @param Token 回调加密key，已废弃
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取回调加密key
                     * @return CallbackKey 回调加密key
                     */
                    std::string GetCallbackKey() const;

                    /**
                     * 设置回调加密key
                     * @param CallbackKey 回调加密key
                     */
                    void SetCallbackKey(const std::string& _callbackKey);

                    /**
                     * 判断参数 CallbackKey 是否已赋值
                     * @return CallbackKey 是否已赋值
                     */
                    bool CallbackKeyHasBeenSet() const;

                    /**
                     * 获取回调验签token
                     * @return CallbackToken 回调验签token
                     */
                    std::string GetCallbackToken() const;

                    /**
                     * 设置回调验签token
                     * @param CallbackToken 回调验签token
                     */
                    void SetCallbackToken(const std::string& _callbackToken);

                    /**
                     * 判断参数 CallbackToken 是否已赋值
                     * @return CallbackToken 是否已赋值
                     */
                    bool CallbackTokenHasBeenSet() const;

                private:

                    /**
                     * 回调url
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 回调加密key，已废弃
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * 回调加密key
                     */
                    std::string m_callbackKey;
                    bool m_callbackKeyHasBeenSet;

                    /**
                     * 回调验签token
                     */
                    std::string m_callbackToken;
                    bool m_callbackTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CALLBACKINFO_H_
