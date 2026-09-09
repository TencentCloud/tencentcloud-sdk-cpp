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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CALLBACKCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CALLBACKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 回调配置
                */
                class CallbackConfig : public AbstractModel
                {
                public:
                    CallbackConfig();
                    ~CallbackConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>回调AESKey</p>
                     * @return CallbackAesKey <p>回调AESKey</p>
                     * 
                     */
                    std::string GetCallbackAesKey() const;

                    /**
                     * 设置<p>回调AESKey</p>
                     * @param _callbackAesKey <p>回调AESKey</p>
                     * 
                     */
                    void SetCallbackAesKey(const std::string& _callbackAesKey);

                    /**
                     * 判断参数 CallbackAesKey 是否已赋值
                     * @return CallbackAesKey 是否已赋值
                     * 
                     */
                    bool CallbackAesKeyHasBeenSet() const;

                    /**
                     * 获取<p>回调Token</p>
                     * @return CallbackToken <p>回调Token</p>
                     * 
                     */
                    std::string GetCallbackToken() const;

                    /**
                     * 设置<p>回调Token</p>
                     * @param _callbackToken <p>回调Token</p>
                     * 
                     */
                    void SetCallbackToken(const std::string& _callbackToken);

                    /**
                     * 判断参数 CallbackToken 是否已赋值
                     * @return CallbackToken 是否已赋值
                     * 
                     */
                    bool CallbackTokenHasBeenSet() const;

                    /**
                     * 获取<p>回调URL</p>
                     * @return CallbackUrl <p>回调URL</p>
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置<p>回调URL</p>
                     * @param _callbackUrl <p>回调URL</p>
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                private:

                    /**
                     * <p>回调AESKey</p>
                     */
                    std::string m_callbackAesKey;
                    bool m_callbackAesKeyHasBeenSet;

                    /**
                     * <p>回调Token</p>
                     */
                    std::string m_callbackToken;
                    bool m_callbackTokenHasBeenSet;

                    /**
                     * <p>回调URL</p>
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CALLBACKCONFIG_H_
