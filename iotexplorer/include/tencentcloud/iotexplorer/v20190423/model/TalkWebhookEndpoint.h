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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKWEBHOOKENDPOINT_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKWEBHOOKENDPOINT_H_

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
                * Webhook工具配置列表
                */
                class TalkWebhookEndpoint : public AbstractModel
                {
                public:
                    TalkWebhookEndpoint();
                    ~TalkWebhookEndpoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Webhook地址，仅支持 80 和 443 端口</p>
                     * @return Url <p>Webhook地址，仅支持 80 和 443 端口</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>Webhook地址，仅支持 80 和 443 端口</p>
                     * @param _url <p>Webhook地址，仅支持 80 和 443 端口</p>
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
                     * 获取<p>超时时间，0~30 秒</p><p>取值范围：[0, 30]</p>
                     * @return Timeout <p>超时时间，0~30 秒</p><p>取值范围：[0, 30]</p>
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置<p>超时时间，0~30 秒</p><p>取值范围：[0, 30]</p>
                     * @param _timeout <p>超时时间，0~30 秒</p><p>取值范围：[0, 30]</p>
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                private:

                    /**
                     * <p>Webhook地址，仅支持 80 和 443 端口</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>超时时间，0~30 秒</p><p>取值范围：[0, 30]</p>
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKWEBHOOKENDPOINT_H_
